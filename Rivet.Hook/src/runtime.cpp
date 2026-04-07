// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <chrono>
#include <fstream>
#include <memory>
#include <ostream>
#include <thread>
#include <unordered_set>
#include <cstdio>

#include "ddl.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"
#include "signature_engine.hpp"
#include "runtime_loader.hpp"

#include <MinHook.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmicrosoft-cast"

namespace {
	HMODULE g_renderdoc = nullptr;
	bool g_minhook_initialized = false;
	std::thread g_ddl_dump_thread;
	rivet_hook::AssetLoader loader;
} // namespace

namespace rivet_hook {
	std::ofstream g_output;
	rivet_hook::Settings g_settings;
	HMODULE g_game_module = nullptr;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-pro-bounds-pointer-arithmetic"
	using context_log_t = const char *(*)(const char *, const char *);
	context_log_t fwd_context_log = nullptr;
	std::string last_context;
	std::string last_message;

	auto
	find_function(const std::string_view &name, HMODULE game, const hex_signature &signature) -> std::vector<uint8_t *>{
		g_output << "[rivet] searching for " << name << " pointer" << std::endl;
		auto pointers = scan(game, signature);

		if (pointers.empty()) {
			g_output << "[rivet] could not find " << name << " pointer, aborting" << std::endl;
			return {};
		}

		return pointers;
	}

	auto
	create_hook(const std::string_view &name, LPVOID pointer, LPVOID detour, LPVOID *original) -> void {
		if (!g_minhook_initialized) {
			if (MH_Initialize() != MH_OK) {
				g_output << "[rivet] failed to initialize minhook" << std::endl;
				return;
			}
			g_minhook_initialized = true;
		}

		g_output << "[rivet] found " << name << " pointer at " << std::hex << reinterpret_cast<uintptr_t>(pointer) << std::dec << std::endl;

		if (MH_CreateHook(pointer, detour, original) != MH_OK) {
			g_output << "[rivet] failed to create " << name << " hook" << std::endl;
			return;
		}

		if (MH_EnableHook(pointer) != MH_OK) {
			g_output << "[rivet] failed to enable " << name << " hook" << std::endl;
			return;
		}

		g_output << "[rivet] created " << name << " hook" << std::endl;
	}

	auto
	create_hook(const std::string_view &name, HMODULE game, const hex_signature &signature, LPVOID detour, LPVOID *original, size_t limit, int select) -> void {
		auto pointers = find_function(name, game, signature);
		if (pointers.empty()) {
			return;
		}

		if (pointers.size() > limit) {
			g_output << "[rivet] found " << pointers.size() << " " << name << " pointers, too many. aborting" << std::endl;
			return;
		}

		create_hook(name, pointers[select], detour, original);
	}

	auto null_func() -> void { }

	auto return_true() -> bool { return true; }

	auto return_false() -> bool { return false; }

	auto
	context_log(const char *context, const char *message) -> const char * {
		auto valid = (context != nullptr && context[0] != 0 && context[0] != '?') && (message != nullptr && message[0] != 0 && message[0] != '?');
		const auto *result = fwd_context_log(context, message);
		if (valid) {
			auto current_context = std::string(context);
			auto current_message = std::string(message);

			if (current_context != last_context || current_message != last_message) {
				last_context = current_context;
				last_message = current_message;
				g_output << "[ctx] [" << (context == nullptr ? "?" : context) << "] " << (message == nullptr ? "" : message) << std::endl;
			}
		}
		return result;
	}

	auto
	log(const char *message, ...) -> void * { // NOLINT(*-dcl50-cpp)
		if (message != nullptr) {
			va_list args; // NOLINT(*-init-variables)
			va_start(args, message);
			auto buffer_size = vsnprintf(nullptr, 0, message, args) + 1;
			auto buffer = std::make_unique<char[]>(buffer_size); // NOLINT(*-avoid-c-arrays)
			vsnprintf(buffer.get(), buffer_size, message, args); // NOLINT(*-err33-c)
			va_end(args);
			std::string buffer_str(buffer.get());
			g_output << "[log] " << buffer_str;
			if (buffer_str.back() != '\n') {
				g_output << std::endl;
			} else {
			}
		}

		return nullptr;
	}

#pragma clang diagnostic pop

	namespace runtime {
		auto init() -> void {
			// this runs on the main thread

			g_output.open("./rivet.log");
			g_output << "[rivet] init" << std::endl;

			g_settings = Settings::load();
			g_settings.save();

			if (!GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_PIN, nullptr, &g_game_module)) {
				g_output << "[rivet] unable to get the executable handle." << std::endl;
				return;
			}

			if (g_settings.suppress_crash_handler) {
				create_hook("crash handler", g_game_module, CRASH_HANDLER_SIGNATURE, reinterpret_cast<LPVOID>(&null_func), nullptr);
			}

			loader.init();

			if (g_settings.load_renderdoc) {
				g_output << "[rivet] loading renderdoc" << std::endl;
				if (std::filesystem::exists("renderdoc.dll")) {
					g_output << "[rivet] loaded local renderdoc" << std::endl;
					g_renderdoc = LoadLibraryA("renderdoc.dll");
				} else {
					auto renderdoc_path = std::filesystem::path(g_settings.renderdoc_path.data());
					if (renderdoc_path.empty()) {
						g_output << "[rivet] renderdoc.dll not found" << std::endl;
					} else {
						if (std::filesystem::exists(renderdoc_path)) {
							g_output << "[rivet] loaded " << renderdoc_path << std::endl;
							g_renderdoc = LoadLibraryA(g_settings.renderdoc_path.data());
						} else {
							g_output << "[rivet] renderdoc.dll not found" << std::endl;
						}
					}
				}
			}

			if (g_settings.dump_ddl) {
				if (g_settings.debug_ddl) {
					std::filesystem::create_directory("./ddl");
				}
				g_output << "[rivet] starting ddl dump thread" << std::endl;
				g_ddl_dump_thread = std::thread(rivet_hook::ddl::dump_ddl);
			}

			if (g_settings.attach_context_log) {
				create_hook("context log", g_game_module, CONTEXT_LOG_SIGNATURE, reinterpret_cast<LPVOID>(&context_log), reinterpret_cast<LPVOID *>(&fwd_context_log));
			}

			if (g_settings.attach_log) {
				create_hook("log", g_game_module, LOG_SIGNATURE, reinterpret_cast<LPVOID>(&log), nullptr);
			}

			if (g_settings.list_versions) {
				g_output << "[rivet] dumping versions" << std::endl;
				rivet_hook::ddl::list_versions();
			}

			g_output << "[rivet] init complete" << std::endl;
			g_output.flush();
		}

		auto fini() -> void {
			g_output << "[rivet] fini" << std::endl;

			if (g_renderdoc != nullptr) {
				g_output << "[rivet] unloading renderdoc" << std::endl;
				FreeLibrary(g_renderdoc);
			}

			loader.fini();

			if (g_ddl_dump_thread.joinable()) {
				g_ddl_dump_thread.join();
			}

			g_output << "[rivet] fini complete" << std::endl;
			g_output.flush();
			g_output.close();
		}
	} // namespace runtime
} // namespace rivet_hook

#pragma clang diagnostic pop
