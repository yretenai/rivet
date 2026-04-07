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

#pragma pack(push, 1)
	enum class AssetType : uint32_t {
		Built = 0,
		TextureStream = 1,
		Unknown2 = 2,
		Audio = 3,
		Unknown4 = 4,
		Animation = 5,
		Unknown6 = 6,
		ZoneGrid = 7,
		Count = 8,
	};

	enum class AssetLanguage : uint32_t {
		None = 0,
		English = 1,
		BritishEnglish = 2,
		Danish = 3,
		Dutch = 4,
		Finnish = 5,
		French = 6,
		German = 7,
		Italian = 8,
		Japanese = 9,
		Korean = 10,
		Norwegian = 11,
		Polish = 12,
		Portuguese = 13,
		Russian = 14,
		Spanish = 15,
		Swedish = 16,
		BrazilianPortuguese = 17,
		Arabic = 18,
		Turkish = 19,
		LatinAmericanSpanish = 20,
		SimplifiedChinese = 21,
		TraditionalChinese = 22,
		CanadianFrench = 23,
		Czech = 24,
		Hungarian = 25,
		Greek = 26,
		Romanian = 27,
		Thai = 28,
		Vietnamese = 29,
		Indonesian = 30,
		Croatian = 31,
		Count = 0x20,
	};

	struct ArchiveAsset {
		uint32_t index;
		uint32_t offset;
	};
	static_assert(sizeof(ArchiveAsset) == 8, "ArchiveAsset size mismatch");

	struct FoundAsset {
		uint32_t size;
		ArchiveAsset asset;
		int32_t header;
	};
	static_assert(sizeof(FoundAsset) == 0x10, "FoundAsset size mismatch");

	struct LoadMetadata {
		uint8_t type;
		uint8_t language;
		uint8_t flags;
		uint8_t padding;
		uint32_t index;
	};
	static_assert(sizeof(LoadMetadata) == 8, "LoadMetadata size mismatch");

	struct LoadOperation {
		uint32_t index;
		ArchiveAsset asset;
		uint32_t size;
		uint32_t header;
		uint8_t language;
		uint8_t priority;
		uint16_t padding;
	};
	static_assert(sizeof(LoadOperation) == 0x18, "LoadOperation size mismatch");

	struct DataRange {
		uint8_t* buffer;
		int64_t size;
		int64_t unknown;
	};
	static_assert(sizeof(DataRange) == 0x18, "DataRange size mismatch");

	struct AssetHeader {
		int64_t committedVersion; // set this to zero?
		int64_t completedVersion; // set this to zero?
		int32_t status; // 0 is success
		int64_t assetId; // from args
		int32_t assetIndex; // from LoadMeta
		uint8_t assetType; // from LoadMeta
		uint8_t language; // important for asset reloading
		uint8_t flags; // from LoadMeta
		uint8_t padding;
		int32_t dataRangeCount;
		struct DataRange* dataRanges; // pointer to data ranges
		struct DataRange defaultDataRanges[0x4];
		void* customData[0x4]; // stuff from the asset manager, initialized to zero
	};
	static_assert(sizeof(AssetHeader) == 0xb0, "AssetHeader size mismatch");

	struct ArchiveFileSystem {
		void* vtable;
		uint8_t pad1[0x10];
		void* toc;
		uint8_t pad2[0x58];
		uint32_t* mountedTable;
	};
	static_assert(sizeof(ArchiveFileSystem) == 0x80, "ArchiveFileSystem size mismatch");

	struct SortFunc {
		intptr_t func;
		intptr_t target;
	};
	static_assert(sizeof(SortFunc) == 0x10, "SortFunc size mismatch");

	struct AssetFile {
		int32_t status;
		int32_t padding;
		int64_t data;
		AssetId asset_id;
	};
#pragma pack(pop)

	using create_asset_id_t = AssetId* (*)(AssetId* result, const char* path);
	using is_valid_asset_t = bool (*)(ArchiveFileSystem* self, AssetId asset);
	using open_file_t = void (*)(intptr_t self, AssetFile* file, AssetId asset_id, AssetType type, int32_t platform, uint8_t manager_id);
	using read_file_t = bool (*)(intptr_t self, AssetFile* file, char* buffer, size_t offset, size_t size, int32_t priority, int32_t unknown2);
	using close_file_t = void (*)(intptr_t self, AssetFile* file);
	using decode_url_t = void (*)(const char*, unsigned int, char*, unsigned int*);
	using mgr_load_asset_t = intptr_t (*)(intptr_t, AssetId, AssetId, const char*, intptr_t, intptr_t, int32_t);
	using sort_t = void (*)(intptr_t elems, int32_t count, int32_t element_size, SortFunc dispatcher);
	using mount_archive_t = void (*)(ArchiveFileSystem* self, int32_t index);
	using commit_assets_t = void (*)(int32_t count);
	using alloc_asset_t = AssetHeader* (*)(uint32_t flags, int32_t result, AssetId asset_id, LoadMetadata* metadata, uint8_t language);
	using resolve_asset_t = FoundAsset* (*)(void* self, AssetId asset_id, AssetLanguage language, AssetType type);
	using set_language_t = void (*)(AssetLanguage language);
	using create_asset_t = bool (*)(AssetHeader* header, const uint8_t* dataHeader, void* globalData);
	using create_mip_t = void (*)(intptr_t self, intptr_t asset, uint32_t lod);
	using create_mip_ng_t = void (*)(intptr_t self);
	using window_init_t = bool (*)(intptr_t self);
	using is_asset_valid_t = bool (*)(int32_t magic, uint8_t manager_id, int64_t asset_id);

	struct AssetLoader {
		auto init() -> void;
		auto fini() -> void;
	};
} // namespace rivet_hook
