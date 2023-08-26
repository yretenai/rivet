// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <array>
#include <string_view>
#include <unordered_map>
#include <memory>
#include <vector>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet {
	namespace structures {
		struct rivet_archive;
		struct rivet_asset;
	}

	namespace data {
		struct RIVET_SHARED archive_toc : dat1 {
			constexpr const static rivet_type_id type_id = 0x4D7CF320;
			constexpr const static rivet_type_id magic = 0x34E89035;
			constexpr const static char *defined_name = "ArchiveTOC";

			constexpr const static std::string_view section_header_name = "Archive TOC Header";
			constexpr const static std::string_view section_ids_name = "Archive TOC Asset IDs";
			constexpr const static std::string_view section_assets_name = "Archive TOC Asset Metadata";
			constexpr const static std::string_view section_archives_name = "Archive TOC File Metadata";
			constexpr const static std::string_view section_texture_ids_name = "Archive TOC Texture Asset Ids";
			constexpr const static std::string_view section_texture_meta_name = "Archive TOC Texture Meta";
			constexpr const static std::string_view section_texture_header_name = "Archive TOC Texture Header";
			constexpr const static std::string_view section_asset_headers_name = "Archive TOC Asset Header Data";

			constexpr const static rivet_type_id section_header = rivet::hash::type_id<section_header_name>::value;
			constexpr const static rivet_type_id section_ids = rivet::hash::type_id<section_ids_name>::value;
			constexpr const static rivet_type_id section_assets = rivet::hash::type_id<section_assets_name>::value;
			constexpr const static rivet_type_id section_archives = rivet::hash::type_id<section_archives_name>::value;
			constexpr const static rivet_type_id section_texture_ids = rivet::hash::type_id<section_texture_ids_name>::value;
			constexpr const static rivet_type_id section_texture_meta = rivet::hash::type_id<section_texture_meta_name>::value;
			constexpr const static rivet_type_id section_texture_header = rivet::hash::type_id<section_texture_header_name>::value;
			constexpr const static rivet_type_id section_asset_headers = rivet::hash::type_id<section_asset_headers_name>::value;

			struct archive_toc_header {
				rivet_type_id type_id;
				rivet_size size;
			};
			static_assert(sizeof(archive_toc_header) == 8);

			archive_toc_header toc_header = {};
			std::unordered_map<rivet_asset_id, std::vector<std::weak_ptr<rivet::structures::rivet_asset>>> asset_lookup = {};
			std::vector<std::shared_ptr<rivet::structures::rivet_archive>> archives = {};
			std::array<std::array<std::array<std::vector<std::shared_ptr<rivet::structures::rivet_asset>>, 2>, 4>, 32> groups = {};
			uint32_t streamed_texture_count = 0;

			explicit RIVET_DECL archive_toc(const std::shared_ptr<rivet_data_array> &stream);
			RIVET_DELETE_COPY(archive_toc)

			[[maybe_unused]] [[nodiscard]] std::vector<std::shared_ptr<rivet::structures::rivet_asset>> get_group(rivet_locale locale, rivet_asset_category category, bool raw) const;
			[[nodiscard]] std::shared_ptr<rivet::structures::rivet_asset> get_asset(rivet_asset_id id, rivet_locale locale, rivet_asset_category category, bool raw) const;
		};
	}
}
