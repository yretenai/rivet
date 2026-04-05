// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace rivet_hook {
	using AssetId = uint64_t;
	using create_asset_id_t = AssetId* (__stdcall*)(AssetId* result, const char* path);
	using is_valid_asset_t = bool (*)(AssetId asset);
	using is_installed_asset_t = bool (*)(AssetId asset);
	using load_assets_t = void (*)(void* self, void* command);
	using lookup_asset_t = void (*)(void* self, void* result, AssetId asset, int32_t type, int32_t asset_version);
	using open_file_t = void (*)(void* self, void* file, AssetId asset, int32_t type, int32_t platform, int32_t asset_version);
	using read_file_t = bool (*)(void* self, void* file, char* buffer, size_t ofset, size_t size, int32_t priority, bool sync);
	using close_file_t = void (*)(void* self, void* file);

	struct AssetLoader {
		create_asset_id_t game_create_asset_id = nullptr;
		is_valid_asset_t game_is_valid_asset = nullptr;
		is_installed_asset_t game_is_installed_asset = nullptr;
		load_assets_t game_load_asset = nullptr;
		lookup_asset_t game_lookup_asset = nullptr;
		open_file_t game_open_file = nullptr;
		read_file_t game_read_file = nullptr;
		close_file_t game_close_file = nullptr;

		init(HMODULE game);
	};
} // namespace rivet_hook
