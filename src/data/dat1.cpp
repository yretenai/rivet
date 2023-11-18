// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <memory>
#include <utility>

#include <ankerl/unordered_dense.h>

#include <rivet/data/dat1.hpp>

namespace rivet::data {
	dat1::dat1(const std::shared_ptr<rivet_data_array> &stream, const std::shared_ptr<rivet_data_array> &resident_stream): buffer(stream), resident_buffer(resident_stream) {
		if (buffer->get<uint32_t>(0) != magic) {
			throw invalid_tag_error("dat1::dat1: invalid tag");
		}

		header = buffer->get<dat1_header>(0);

		if (header.section_count > 0) {
			const auto section_headers = buffer->slice<dat1_entry>(sizeof(dat1_header), header.section_count);

			const auto resident_start = buffer->size();
			const auto resident_end = resident_start + (resident_buffer == nullptr ? 0 : resident_buffer->size());
			for (auto section_header : *section_headers) {
				section_ids.emplace(section_header.type_id);

				if (section_header.offset > resident_end) {
					throw invalid_operation("dat1::dat1: section offset is out of bounds");
				}

				if (section_header.offset < resident_start) {
					auto slice = buffer->slice(section_header.offset, section_header.size);
					sections.emplace(section_header.type_id, std::make_pair(section_header, slice));
				} else {
					auto slice = resident_buffer->slice(section_header.offset - resident_start, section_header.size);
					sections.emplace(section_header.type_id, std::make_pair(section_header, slice));
				}
			}
		}

		type_name = buffer->to_cstring_view(sizeof(dat1_header) + sizeof(dat1_entry) * header.section_count);
	}

	auto
	dat1::get_section_data(const rivet_type_id type_id) const -> std::shared_ptr<rivet_data_array> {
		const auto entry = sections.find(type_id);

		if (entry == sections.end()) {
			return nullptr;
		}

		return entry->second.second;
	}
} // namespace rivet::data
