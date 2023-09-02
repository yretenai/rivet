// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
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
		rivet_off header_offset;
	};

	static_assert(sizeof(rivet_asset_raw) == 16);

	struct rivet_asset_raw_spider {
		uint32_t unknown;
		uint32_t size;
		uint32_t chunk_id;
	};

	static_assert(sizeof(rivet_asset_raw_spider) == 0xC);
#pragma pack(pop)

	struct rivet_asset_texture_header {
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
		uint32_t size;
		uint32_t size_streamed;
		uint64_t unknownD;
	};

	static_assert(sizeof(rivet_asset_texture_header) == 72);

	struct rivet_asset_header {
		rivet_type_id schema;
		// sizes of each block, may be 0 or spill into .stream
		std::array<rivet_size, 4> sizes;
		// _art.zone: 0 - main block, 1 - physics, 2 - unknown, 3 - texture data
		uint16_t unknown14; // second-smallest number
		uint16_t unknown16; // flags, likely. 0x100, 0x200, 0x400, 0x800, 0x1000
		uint32_t unknown18; // smaller number, probably size of some chunk
		uint32_t unknown1C; // 3 possible values, 0x3010248, 0x3020148, 0x3030048
		uint32_t unknown20; // large number, scales with size of asset, caps at 0x10000000
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
		bool is_stream : 1;
		bool is_texture : 1;
		bool has_header : 1;
		bool is_virtual : 1;
		bool is_key : 1;
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
		std::optional<rivet_asset_texture_header> texture_header;
		std::optional<rivet_asset_header> header;

		// stuff from dag
		std::optional<std::string_view> name;
		std::vector<std::pair<std::string_view, rivet_asset_id>> dependencies;
		rivet_asset_type type;
	};
} // namespace rivet::structures
