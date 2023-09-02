// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/localization.hpp>
#include <rivet/structures/rivet_localization.hpp>

namespace rivet::data {
	localization::localization(const std::shared_ptr<rivet_data_array> &stream): data(stream) {
		if (data.header.schema != localization::type_id) {
			throw invalid_tag_error("localization::localization: invalid type id");
		}

		auto header = data.get_section<rivet_size>(header_type_id);
		auto flags = data.get_section<uint32_t>(flags_type_id);
		auto tags = data.get_section_data(tags_type_id);
		auto texts = data.get_section_data(text_type_id);
		auto tags_offsets = data.get_section<rivet_off>(tags_offsets_type_id);
		auto text_offsets = data.get_section<rivet_off>(text_offsets_type_id);
		auto indices = data.get_section<uint16_t>(indices_type_id);
		auto hashes = data.get_section<rivet_hash>(hashes_type_id);
		auto ids = data.get_section<rivet_id>(ids_type_id);

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
			auto tag_offset = tags_offsets->get(index);
			auto text_offset = text_offsets->get(index);
			auto tag = tags->to_cstring_view(tag_offset);
			auto text = texts->to_u8cstring_view(text_offset);
			auto hash = hashes->get(index);
			auto loc_id = ids->get(index);
			auto sorting_index = indices->get(index);
			auto flag = flags->get(index);

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

	localization::localization(const asset_bundle &bundle, rivet_size index): localization(bundle.get_entry(index)) { }
} // namespace rivet::data
