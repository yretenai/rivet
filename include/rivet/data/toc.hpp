// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <iosfwd>
#include <memory>
#include <array>

#include <rivet/data/dat1.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_archive.hpp>

namespace rivet::data {
	struct RIVET_SHARED archive_toc : dat1 {
		constexpr const static rivet_type_id type_id = 0x4D7CF320;
		constexpr const static rivet_type_id magic = 0x34E89035;
		constexpr const static char* defined_name = "ArchiveTOC";

		constexpr const static rivet_type_id section_groups = 0xEDE8ADA9; // todo: find real name.
		constexpr const static rivet_type_id section_ids = 0x506D7B8A; // todo: find real name.
		constexpr const static rivet_type_id section_assets = 0x65BCF461; // todo: find real name.
		constexpr const static rivet_type_id section_archives = 0x398ABFF0; // todo: find real name.
		constexpr const static rivet_type_id section_streamed_ids = 0x36A6C8CC; // todo: find real name.
		constexpr const static rivet_type_id section_chunks = 0xC9FB9DDA; // todo: find real name.
		constexpr const static rivet_type_id section_version = 0x62297090 ; // todo: find real name.
		constexpr const static rivet_type_id section_metadata = 0x654BDED9; // todo: find real name.

#pragma pack(push, 1)
		struct archive_toc_header {
			rivet_type_id type_id;
			rivet_size size;
		};
		static_assert(sizeof(archive_toc_header) == 8);
#pragma pack(pop)

		archive_toc_header toc_header = { };
		std::unordered_map<rivet_asset_id, std::weak_ptr<rivet::structures::rivet_archive>> asset_archive_lookup = { };
		std::vector<std::shared_ptr<rivet::structures::rivet_archive>> archives = { };
		uint32_t version = 0;

		explicit RIVET_DECL archive_toc(std::shared_ptr<rivet_data_array> &&stream);
		RIVET_DELETE_COPY(archive_toc)
	};
}
