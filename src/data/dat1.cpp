// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dat1.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data {
	dat1::dat1(std::shared_ptr<rivet_data_array> &&stream) {
		buffer = stream;

		auto tag = stream->get<uint32_t>(0);
		if (tag != magic) {
			throw invalid_tag_error();
		}

		header = stream->get<data_header_t>(0);
		auto section_headers = stream->slice<data_entry_t>(sizeof(data_header_t), header.section_count);
		string_buffer = buffer->slice(sizeof(data_header_t) + sizeof(data_entry_t) * header.section_count);
		type_name = string_buffer->to_cstring();

		for (auto section_header: *section_headers) {
			auto slice = stream->slice(section_header.offset, section_header.size);
			sections.emplace(section_header.type_id, std::make_pair(section_header, slice));
		}
	}

	std::shared_ptr<rivet_data_array> dat1::get_section_data(rivet_type_id type_id) {
		auto entry = sections.find(type_id);

		if (entry == sections.end()) {
			return nullptr;
		}

		return entry->second.second;
	}
}
