// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include <rivet/rivet_keywords.hpp>

namespace rivet::structures {
	struct rivet_archive;

#pragma pack(push, 1)
	struct rivet_asset_raw {
		rivet_size size;
		uint32_t archive_id;
		rivet_off archive_offset;
		rivet_off metadata_offset;
	};
	static_assert(sizeof(rivet_asset_raw) == 16);

	struct rivet_archive_raw {
		const char name[0x30];
		uint64_t time;
		uint32_t version;
		uint32_t unknown;
		uint16_t load_priority;
	};
	static_assert(sizeof(rivet_archive_raw) == 0x42);
#pragma pack(pop)

	struct rivet_asset_texture_meta {
		uint64_t unknown1;
		uint64_t unknown2;
		uint64_t unknown3;
		uint32_t unknown4;
		uint32_t unknown5;
		uint32_t unknown6;
		uint32_t unknown7;
		uint64_t unknown8;
		uint32_t unknown9;
		uint32_t unknownA;
		uint32_t unknownB;
		uint32_t unknownC;
		uint64_t unknownD;
	};
	static_assert(sizeof(rivet_asset_texture_meta) == 72);

	struct rivet_asset_header {
		uint32_t id;
		uint32_t size;
		uint32_t unknown3;
		uint32_t unknown4;
		uint32_t unknown5;
		uint32_t unknown6;
		uint32_t unknown7;
		uint32_t unknown8;
		uint32_t unknown9;
	};
	static_assert(sizeof(rivet_asset_header) == 36);

	enum class rivet_asset_type : uint8_t {
		LEVEL,
		ZONE,
		ACTOR,
		CONDUIT,
		CONFIG,
		CINEMATIC,
		MODEL,
		ANIMATION_CLIP,
		ANIMATION_SET,
		MATERIAL,
		MATERIAL_GRAPH,
		TEXTURE,
		ATMOSPHERE,
		EFFECT,
		SOUNDBANK,
		LOCALIZATION,
		UNKNOWN_16,
		UNKNOWN_17,
		ZONE_LIGHTING,
		LEVEL_LIGHTING,
		NODE_GRAPH,
		UNKNOWN_21,
		WWISE_LOOKUP,

		NONE = 0xFF
	};

	struct rivet_asset_flags {
		bool is_raw: 1;
		bool is_texture: 1;
		bool has_header: 1;
		bool is_virtual: 1;
	};

	struct rivet_asset {
		// stuff from toc
		rivet_asset_id id;
		rivet_size size;
		rivet_off offset;
		std::shared_ptr<rivet_archive> archive;
		rivet_locale locale;
		rivet_asset_category category;
		rivet_asset_flags flags;
		rivet_asset_texture_meta chunk;
		rivet_asset_header header;

		// stuff from dag
		std::string_view name;
		std::vector<std::pair<std::string_view, rivet_asset_id>> dependencies;
		rivet_asset_type type;
	};
}
