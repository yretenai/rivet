// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <unordered_map>
#include <string>

#include "runtime_loader.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"

namespace rivet_hook {
	std::unordered_map<AssetId, std::string> mod_files = {};
	
	std::array<AssetId, 8> known_important_assets = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
	}; // todo

	create_asset_id_t game_create_asset_id = nullptr;
	is_valid_asset_t game_is_valid_asset = nullptr;
	is_installed_asset_t game_is_installed_asset = nullptr;
	// open_file_t game_open_file = nullptr;
	// read_file_t game_read_file = nullptr;
	// close_file_t game_close_file = nullptr;
	decode_url_t game_decode_url = nullptr;
	mgr_load_asset_t game_mgr_load_asset = nullptr;
	
	intptr_t game_load_ops = 0;

	auto
	create_asset_id(AssetId* asset_id, char* asset_name) -> AssetId* {
		auto result = game_create_asset_id(asset_id, asset_name);

		if (asset_name && *asset_name && asset_id) {
			g_output << "[asset id] " << std::hex << *asset_id << " " << asset_name << std::endl;
			g_output.flush();
		}

		return result;
	}

	auto
	decode_url(const char* url, unsigned int urlLen, char* decoded, unsigned int* decodedSize) -> void {
		if (url != nullptr) {
			g_output << "[cohtml] " << url << std::endl;
			g_output.flush();
		}

		game_decode_url(url, urlLen, decoded, decodedSize);
	}

	auto
	mgr_load_asset(intptr_t self, AssetId asset_id, AssetId parent_asset_id, const char* asset_name, intptr_t referencing_asset, intptr_t unknown6, int32_t unknown7) -> intptr_t {
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

		return game_mgr_load_asset(self, asset_id, parent_asset_id, asset_name, referencing_asset, unknown6, unknown7);
	}

	auto
	hook_cohtml() -> void {
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

		create_hook("cohtml", proc, reinterpret_cast<LPVOID*>(decode_url), reinterpret_cast<LPVOID*>(&game_decode_url));
	}

	auto
	load_mod_assets() -> void {

	}

	auto
	reimpl_load_ops(void* self, AssetId* asset_ids, void* metadata, int32_t asset_count) -> int32_t {
		return 0; // todo
	}

	auto
	is_valid_asset(AssetId asset_id) -> bool {
		return mod_files.contains(asset_id) || game_is_valid_asset(asset_id);
	}

	auto
	is_installed_asset(AssetId asset_id) -> bool {
		return mod_files.contains(asset_id) || game_is_installed_asset(asset_id);	
	}

	auto
	AssetLoader::init() -> void {
		auto create_asset_id_ptrs = find_function("asset ids", g_game_module, CREATE_ASSET_ID_SIGNATURE);
		if (!create_asset_id_ptrs.empty()) {
			if (g_settings.log_asset_ids) {
				create_hook("asset ids", create_asset_id_ptrs[0], reinterpret_cast<LPVOID>(&create_asset_id), reinterpret_cast<LPVOID *>(&game_create_asset_id));
			} else {
				game_create_asset_id = (create_asset_id_t) create_asset_id_ptrs[0];
			}
		}

		if (g_settings.log_paths) {
			create_hook("asset paths", g_game_module, LOAD_ASSET_SIGNATURE, reinterpret_cast<LPVOID>(&mgr_load_asset), reinterpret_cast<LPVOID *>(&game_mgr_load_asset));
		}

		if (g_settings.log_cohtml) {
			hook_cohtml();
		}

		if (!g_settings.enable_asset_loader) {
			return;
		}

		load_mod_assets();
	}
}
