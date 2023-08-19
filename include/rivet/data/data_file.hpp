// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

#include <memory>
#include <unordered_map>
#include <utility>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/data/registry.hpp>
#include <rivet/data/sections/data_section.hpp>

namespace rivet::data::section { struct data_section; }

namespace rivet::data {
	enum class data_tag : uint32_t {
		DAG = 0xB8EF3955,
		DAT1 = 0x44415431,
		TOC = 0x34E89035,
	};

	struct data_file {
		struct data_header_t {
			uint32_t magic;
			rivet_typeid_t type_id;
			rivet_size_t size;
			uint16_t section_count;
			uint16_t reserved;
		};

		struct data_entry_t {
			rivet_typeid_t type_id;
			rivet_off_t offset;
			rivet_size_t size;
		};

		data_header_t header = { };
		std::shared_ptr<rivet_data_array_t> buffer = { };
		std::shared_ptr<rivet_data_array_t> string_buffer = { };
		std::unordered_map<rivet_typeid_t, std::tuple<data_entry_t, std::shared_ptr<section::data_section>>> sections;

		explicit data_file(std::shared_ptr<rivet_data_array_t> &stream) {
			buffer = stream;

			auto tag = stream->get<data_tag>(0);
			if(tag != data_tag::DAT1) {
				throw invalid_tag_error();
			}

			header = stream->get<data_header_t>(0);
			auto section_headers = stream->slice<data_entry_t>(sizeof(data_header_t), header.section_count);
			string_buffer = buffer->slice(sizeof(data_header_t) + sizeof(data_entry_t) * header.section_count);

			auto section_registry = registry::data_registry<section::data_section>();
			for(auto section_header : *section_headers) {
				auto slice = stream->slice(section_header.offset, section_header.size);
				sections.emplace( section_header.type_id, std::make_tuple(section_header, section_registry(section_header.type_id, slice)));
			}
		}

		RIVET_DELETE_COPY(data_file);

		static std::shared_ptr<data_file> construct(std::shared_ptr<rivet_data_array_t> &stream) {
			auto tag = stream->get<data_tag>(0);

			size_t begin = 0;
			switch(tag) {
				case data_tag::DAG:
					begin = 0xC; // skip DAG tag and size + ??
					break;
				case data_tag::TOC:
					begin = 0x8; // skip TOC tag and size
					break;
				case data_tag::DAT1:
					break;
			}

			auto type_id = stream->get<uint32_t>(begin + 4);

			auto data_registry = registry::data_registry<data_file>();
			auto slice = stream->slice(begin);
			return data_registry(type_id, slice);
		}
	};
}
