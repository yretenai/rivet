// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <string_view>
#include <unordered_map>
#include <vector>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

namespace rivet::data {
	struct RIVET_SHARED archive_toc : dat1 {
		constexpr const static std::string_view type_name = "ArchiveTOC";
		constexpr const static rivet_type_id type_id = 0x4D7CF320;
		constexpr const static rivet_type_id type_id_spider = 0x51B8E006;
		constexpr const static rivet_type_id magic = 0x34E89035;
		constexpr const static rivet_type_id magic_compressed = 0x77AF12AF;

		RIVET_DEFINE_TYPE_ID(header, "Archive TOC Header");
		RIVET_DEFINE_TYPE_ID(ids, "Archive TOC Asset IDs");
		RIVET_DEFINE_TYPE_ID(assets, "Archive TOC Asset Metadata");
		RIVET_DEFINE_TYPE_ID(archives, "Archive TOC File Metadata");
		RIVET_DEFINE_TYPE_ID(texture_ids, "Archive TOC Texture Asset Ids");
		RIVET_DEFINE_TYPE_ID(texture_meta, "Archive TOC Texture Meta");
		RIVET_DEFINE_TYPE_ID(texture_header, "Archive TOC Texture Header");
		RIVET_DEFINE_TYPE_ID(asset_headers, "Archive TOC Asset Header Data");
		RIVET_DEFINE_TYPE_ID(key_asset_ids, "Archive TOC Key Asset IDs");
		constexpr const static rivet_type_id archive_asset_offsets_type_id = 0xDCD720B5;

		struct archive_toc_header {
			rivet_type_id type_id;
			rivet_size size;
		};

		static_assert(sizeof(archive_toc_header) == 8);

		std::unordered_map<rivet_asset_id, std::vector<std::weak_ptr<rivet::structures::rivet_asset>>> asset_lookup = {};
		std::vector<std::shared_ptr<rivet::structures::rivet_archive>> archives = {};
		std::array<std::array<std::array<std::vector<std::shared_ptr<rivet::structures::rivet_asset>>, 2>, 4>, 32> groups = {};
		uint32_t streamed_texture_count = 0;

		explicit archive_toc(const std::shared_ptr<rivet_data_array> &stream);

		static auto
		get_toc_data_buffer(const std::shared_ptr<rivet_data_array> &stream) -> std::shared_ptr<rivet_data_array>;

		[[maybe_unused]] [[nodiscard]] auto
		get_group(rivet_locale locale, rivet_asset_category category, bool is_stream) const -> std::vector<std::shared_ptr<rivet::structures::rivet_asset>>;

		[[nodiscard]] auto
		get_asset(rivet_asset_id asset_id, rivet_locale locale, rivet_asset_category category, bool is_stream) const -> std::shared_ptr<rivet::structures::rivet_asset>;
	};
} // namespace rivet::data
