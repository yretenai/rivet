// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdint>

#include "settings.hpp"

namespace rivet_hook {
	constexpr static const char *decode_url_string_name = "?DecodeURLString@Library@cohtml@@SAXPEBDIPEADPEAI@Z";

	using AssetId = uint64_t;

	using create_asset_id_t = AssetId* (*)(AssetId* result, const char* path);
	using is_valid_asset_t = bool (*)(AssetId asset);
	using is_installed_asset_t = bool (*)(AssetId asset);
	using load_assets_t = void (*)(void* self, void* command);
	using lookup_asset_t = void (*)(void* self, void* result, AssetId asset, int32_t type, int32_t asset_version);
	using open_file_t = void (*)(void* self, void* file, AssetId asset, int32_t type, int32_t platform, int32_t asset_version);
	using read_file_t = bool (*)(void* self, void* file, char* buffer, size_t ofset, size_t size, int32_t priority, bool sync);
	using close_file_t = void (*)(void* self, void* file);
	using decode_url_t = void (*)(const char*, unsigned int, char*, unsigned int*);
	using mgr_load_asset_t = intptr_t (*)(intptr_t, AssetId, AssetId, const char*, intptr_t, intptr_t, int32_t);

	struct AssetLoader {
		auto init() -> void;
	};
} // namespace rivet_hook
