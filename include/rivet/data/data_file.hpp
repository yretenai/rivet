// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/data/registry.hpp>
#include <rivet/data/sections/data_section.hpp>

#include <unordered_map>
#include <istream>

namespace rivet::data {
	struct data_file {
			struct data_header_t {
			uint32_t magic;
			rivet_typeid_t type_id;
			rivet_size_t size;
		};

		struct data_entry_t {
			rivet_typeid_t type_id;
			rivet_off_t offset;
			rivet_size_t size;
		};

		data_header_t header = {};
		std::shared_ptr<rivet_data_array_t> buffer = {};
		std::shared_ptr<rivet_data_array_t> string_buffer = {};
		std::unordered_map<rivet_typeid_t, std::pair<data_entry_t, std::shared_ptr<data_file>>> sections;

		explicit data_file(std::istream &stream) {
			// todo.
		}

		explicit data_file(std::shared_ptr<rivet_data_array_t> &stream) {
			// todo.
		}

		RIVET_DELETE_COPY(data_file);
	};
}
