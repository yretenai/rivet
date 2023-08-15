// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/toc.hpp>

namespace rivet::data {
	using archive_toc_registry [[maybe_unused]] = rivet::data::register_data_handler<archive_toc>;

	archive_toc::archive_toc(std::istream &stream) : data_file(stream) {
		// todo
	}

	archive_toc::archive_toc(std::shared_ptr<rivet_data_array_t> &stream) : data_file(stream) {
		// todo
	}
}
