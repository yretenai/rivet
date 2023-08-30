// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cassert>

#include <rivet/data/dat1.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data {
	dat1::dat1(const std::shared_ptr<rivet_data_array> &stream): buffer(stream) {
		auto tag = buffer->get<uint32_t>(0);
		if (tag != magic) {
			// check for a 36 byte header
			// todo: create multipart_data struct.
			tag = buffer->get<uint32_t>(36);
			if (tag != magic) {
				throw invalid_tag_error();
			}

			asset_header = buffer->get<rivet::structures::rivet_asset_header>(0);
			assert(asset_header.sizes[0] > 0);
			buffer = buffer->slice(sizeof(rivet::structures::rivet_asset_header), asset_header.sizes[0]);
		}

		header = buffer->get<data_header_t>(0);
		if (asset_header.schema == 0) {
			asset_header.schema = header.schema;
			asset_header.sizes[0] = header.size;
		}

		if (header.section_count > 0) {
			auto section_headers = buffer->slice<data_entry_t>(sizeof(data_header_t), header.section_count);

			for (auto section_header : *section_headers) {
				auto slice = buffer->slice(section_header.offset, section_header.size);
				sections.emplace(section_header.type_id, std::make_pair(section_header, slice));
			}
		}

		type_name = buffer->to_cstring_view(sizeof(data_header_t) + sizeof(data_entry_t) * header.section_count);
	}

	auto
	dat1::get_section_data(rivet_type_id type_id) const -> std::shared_ptr<rivet_data_array> {
		auto entry = sections.find(type_id);

		if (entry == sections.end()) {
			return nullptr;
		}

		return entry->second.second;
	}
} // namespace rivet::data
