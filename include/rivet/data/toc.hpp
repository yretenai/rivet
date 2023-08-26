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

			RIVET_DEFINE_TYPE_ID(header, "Archive TOC Header");
			RIVET_DEFINE_TYPE_ID(ids, "Archive TOC Asset IDs");
			RIVET_DEFINE_TYPE_ID(assets, "Archive TOC Asset Metadata");
			RIVET_DEFINE_TYPE_ID(archives, "Archive TOC File Metadata");
			RIVET_DEFINE_TYPE_ID(texture_ids, "Archive TOC Texture Asset Ids");
			RIVET_DEFINE_TYPE_ID(texture_meta, "Archive TOC Texture Meta");
			RIVET_DEFINE_TYPE_ID(texture_header, "Archive TOC Texture Header");
			RIVET_DEFINE_TYPE_ID(asset_headers, "Archive TOC Asset Header Data");

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
