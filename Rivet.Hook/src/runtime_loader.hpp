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
	// using open_file_t = void (*)(void* self, AssetFile* file, AssetId asset_id, int32_t unknown, int64_t unknown, int64_t unknown, uint8_t unknown);
	// using read_file_t = bool (*)(void* self, AssetFile* file, char* buffer, size_t offset, size_t size);
	// using close_file_t = void (*)(void* self, AssetFile* file);
	using decode_url_t = void (*)(const char*, unsigned int, char*, unsigned int*);
	using mgr_load_asset_t = intptr_t (*)(intptr_t, AssetId, AssetId, const char*, intptr_t, intptr_t, int32_t);

	struct AssetLoader {
		auto init() -> void;
	};
} // namespace rivet_hook
