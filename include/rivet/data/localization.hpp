// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string_view>

#include <ankerl/unordered_dense.h>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_localization.hpp> // IWYU pragma: keep

namespace rivet::data {
	struct asset_bundle;

	struct RIVET_SHARED localization {
		constexpr static rivet_type_id type_id = 0x122BB0AB;

		RIVET_DEFINE_TYPE_ID(header, "Localization Header Built");
		RIVET_DEFINE_TYPE_ID(flags, "Localization Flags Built");
		RIVET_DEFINE_TYPE_ID(tags, "Localization Tags Built");
		RIVET_DEFINE_TYPE_ID(text, "Localization Text Built");
		RIVET_DEFINE_TYPE_ID(tags_offsets, "Localization TagOffsets Built");
		RIVET_DEFINE_TYPE_ID(text_offsets, "Localization TextOffsets Built");
		RIVET_DEFINE_TYPE_ID(indices, "Localization SortedIndexes Built");
		RIVET_DEFINE_TYPE_ID(ids, "Localization SortedHashes Built");
		RIVET_DEFINE_FAKE_TYPE_ID(hashes, "Localization Tag Hashes", 0x06a58050); // todo: find real type id

		explicit localization(const std::shared_ptr<rivet_data_array> &stream);
		explicit localization(const rivet::data::asset_bundle &bundle, rivet_size index = 0);

		rivet::data::dat1 data;
		uint32_t count;
		ankerl::unordered_dense::map<uint32_t, uint32_t> hash_lookup;
		ankerl::unordered_dense::map<std::string_view, uint32_t> tag_lookup;
		ankerl::unordered_dense::map<uint32_t, rivet::structures::rivet_localization_entry> entries;
	};
} // namespace rivet::data
