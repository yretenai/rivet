// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::structures {
	struct rivet_archive;

#pragma pack(push, 1)
	struct rivet_asset_chunk {
		uint64_t unknown1;
		uint64_t unknown2;
		uint64_t unknown3;
		uint32_t unknown4;
		uint32_t unknown5;
		uint32_t unknown_bitset;
		uint32_t unknown7;
		uint64_t unknown8;
		uint32_t unknown9;
		uint32_t unknownA;
		uint32_t unknownB;
		uint32_t unknownC;
		uint64_t unknownD;
	};
	static_assert(sizeof(rivet_asset_chunk) == 72);
#pragma pack(pop)

	struct rivet_asset {
		rivet_asset_id id;
		std::shared_ptr<std::string> name;
		rivet_size size;
		rivet_off offset;
		rivet_off metadata_offset;
		std::shared_ptr<rivet_archive> archive;
		std::shared_ptr<std::vector<rivet_asset_id>> dependencies;
		uint8_t group_id;
		bool is_streamed_asset;
		rivet_asset_chunk chunk;
	};
}
