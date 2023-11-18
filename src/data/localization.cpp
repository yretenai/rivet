// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <memory>

#include <ankerl/unordered_dense.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/data/localization.hpp>
#include <rivet/hash/type_id_registry.hpp>

using namespace rivet::type_id;

namespace rivet::data {
	localization::localization(const std::shared_ptr<rivet_data_array> &stream): data(stream) {
		if (data.header.schema != localization::type_id) {
			throw invalid_tag_error("localization::localization: invalid type id");
		}

		const auto header = data.get_section<rivet_size>(localization_header_type_id);
		const auto flags = data.get_section<rivet::structures::rivet_localization_flag>(localization_flags_type_id);
		const auto tags = data.get_section_data(localization_tags_type_id);
		const auto texts = data.get_section_data(localization_text_type_id);
		const auto tags_offsets = data.get_section<rivet_off>(localization_tags_offsets_type_id);
		const auto text_offsets = data.get_section<rivet_off>(localization_text_offsets_type_id);
		const auto indices = data.get_section<uint16_t>(localization_indices_type_id);
		const auto hashes = data.get_section<rivet_hash>(localization_hashes_type_id);
		const auto ids = data.get_section<rivet_id>(localization_ids_type_id);

		count = header->get(0);
		if (flags->size() < count) {
			throw invalid_tag_error("localization::localization: invalid flags size");
		}

		if (tags_offsets->size() < count) {
			throw invalid_tag_error("localization::localization: invalid tags offsets size");
		}

		if (text_offsets->size() < count) {
			throw invalid_tag_error("localization::localization: invalid text offsets size");
		}

		if (indices->size() < count) {
			throw invalid_tag_error("localization::localization: invalid indices size");
		}

		if (hashes->size() < count) {
			throw invalid_tag_error("localization::localization: invalid hashes size");
		}

		if (ids->size() < count) {
			throw invalid_tag_error("localization::localization: invalid ids size");
		}

		hash_lookup.reserve(count);
		tag_lookup.reserve(count);
		entries.reserve(count);

		for (rivet_size index = 0; index < count; ++index) {
			const auto tag_offset = tags_offsets->get(index);
			const auto text_offset = text_offsets->get(index);
			auto tag = tags->to_cstring_view(tag_offset);
			const auto text = texts->to_u8cstring_view(text_offset);
			auto hash = hashes->get(index);
			auto loc_id = ids->get(index);
			const auto sorting_index = indices->get(index);
			const auto flag = flags->get(index);

			auto entry = rivet::structures::rivet_localization_entry();
			entry.tag = tag;
			entry.text = text;
			entry.hash = hash;
			entry.id = loc_id;
			entry.sorting_index = sorting_index;
			entry.flags = flag;

			hash_lookup.insert({ hash, loc_id });
			tag_lookup.insert({ tag, loc_id });
			entries.insert({ loc_id, entry });
		}
	}

	localization::localization(const asset_bundle &bundle, const rivet_size index): localization(bundle.get_entry(index)) { }
} // namespace rivet::data
