// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/toc.hpp>
#include <rivet/data/registry.hpp>

namespace rivet::data {
	using archive_toc_registry [[maybe_unused]] = rivet::data::register_data_handler<archive_toc>;

	archive_toc::archive_toc(std::shared_ptr<rivet_data_array_t> &stream) : data_file(stream) {
		if(header.type_id != type_id) {
			throw invalid_tag_error();
		}
		// todo
	}
}
