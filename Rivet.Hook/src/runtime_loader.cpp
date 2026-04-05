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
	create_asset_id_t game_create_asset_id = nullptr;
	is_valid_asset_t game_is_valid_asset = nullptr;
	is_installed_asset_t game_is_installed_asset = nullptr;
	load_assets_t game_load_asset = nullptr;
	lookup_asset_t game_lookup_asset = nullptr;
	open_file_t game_open_file = nullptr;
	read_file_t game_read_file = nullptr;
	close_file_t game_close_file = nullptr;

	std::unordered_map<AssetId, std::string> mod_files = {};

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
	AssetLoader::init() -> void {
		auto create_asset_id_ptrs = find_function("asset ids", g_game_module, CREATE_ASSET_ID_SIGNATURE);
		if (!create_asset_id_ptrs.empty()) {
			if (g_settings.log_asset_ids) {
				create_hook("asset ids", create_asset_id_ptrs[0], reinterpret_cast<LPVOID>(&create_asset_id), reinterpret_cast<LPVOID *>(&game_create_asset_id));
			} else {
				game_create_asset_id = (create_asset_id_t) create_asset_id_ptrs[0];
			}
		}

		if (!g_settings.enable_asset_loader) {
			return;
		}
	}
}
