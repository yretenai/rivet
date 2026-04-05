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

	const char *decode_url_string_name = "?DecodeURLString@Library@cohtml@@SAXPEBDIPEADPEAI@Z";
	using decode_url_t = void (*)(const char*, unsigned int, char*, unsigned int*);
	decode_url_t fwd_decode_url = nullptr;

	using load_asset_t = intptr_t (*)(intptr_t, AssetId, AssetId, const char*, intptr_t, intptr_t, int32_t);
	load_asset_t fwd_load_asset = nullptr;

	std::vector<uint8_t *>
	find_function(const std::string_view &name, HMODULE game, const hex_signature &signature) {
		g_output << "[rivet] searching for " << name << " pointer" << std::endl;
		auto pointers = scan(game, signature);

		if (pointers.empty()) {
			g_output << "[rivet] could not find " << name << " pointer, aborting" << std::endl;
			return {};
		}
		
		return pointers;
	}

	void
	create_hook(const std::string_view &name, LPVOID pointer, LPVOID detour, LPVOID *original) {
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

	void
	create_hook(const std::string_view &name, HMODULE game, const hex_signature &signature, LPVOID detour, LPVOID *original, size_t limit, int select) {
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

	void
	null_func() { }

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
				g_output.flush();
			}
		}

		return nullptr;
	}

	void decode_url(const char* url, unsigned int urlLen, char* decoded, unsigned int* decodedSize) {
		if (url != nullptr) {
			g_output << "[cohtml] " << url << std::endl;
			g_output.flush();
		}

		fwd_decode_url(url, urlLen, decoded, decodedSize);
	}

	void
	hook_cohtml() {
		HMODULE mod = GetModuleHandleA("cohtml.WindowsDesktop.dll");
		if (!mod) {
			g_output << "cannot hook cohtml, not loaded yet." << std::endl;
			return;
		}

		LPVOID proc = reinterpret_cast<LPVOID>(GetProcAddress(mod, decode_url_string_name));
		if (!proc) {
			g_output << "cannot hook cohtml, export not found." << std::endl;
			return;
		}

		create_hook("cohtml", proc,  reinterpret_cast<LPVOID*>(decode_url), reinterpret_cast<LPVOID*>(&fwd_decode_url));
	}

	intptr_t
	load_asset(intptr_t self, AssetId asset_id, AssetId parent_asset_id, const char* asset_name, intptr_t referencing_asset, intptr_t unknown6, int32_t unknown7) {
		g_output << "[load asset] " << std::hex << asset_id << " ";

		if (asset_name && *asset_name) {
			g_output << asset_name << " from ";
		} else {
			g_output << "(null) from ";
		}

		if (referencing_asset) {
			auto upper_path = reinterpret_cast<const char**>(referencing_asset + 0x10);

			if (upper_path && *upper_path && **upper_path) {
				g_output << *upper_path;
			} else {
				g_output << "(null)";
			}
		} else {
			g_output << "(nowhere)";
		}

		g_output << std::endl;
		g_output.flush();

		return fwd_load_asset(self, asset_id, parent_asset_id, asset_name, referencing_asset, unknown6, unknown7);
	}

#pragma clang diagnostic pop

	namespace runtime {
		void
		init() {
			// this runs on the main thread

			g_output.open("./rivet.log");
			g_output << "[rivet] init" << std::endl;

			g_settings = Settings::load();

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

			if (g_settings.log_cohtml) {
				hook_cohtml();
			}

			if (g_settings.log_paths) {
				create_hook("asset paths", g_game_module, LOAD_ASSET_SIGNATURE, reinterpret_cast<LPVOID>(&load_asset), reinterpret_cast<LPVOID *>(&fwd_load_asset));
			}

			g_output << "[rivet] init complete" << std::endl;
		}

		void
		fini() {
			g_settings.save();
			g_output << "[rivet] fini" << std::endl;

			if (g_renderdoc != nullptr) {
				g_output << "[rivet] unloading renderdoc" << std::endl;
				FreeLibrary(g_renderdoc);
			}

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
