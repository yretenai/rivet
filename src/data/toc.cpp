// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/toc.hpp>

namespace rivet::data {
	archive_toc::archive_toc(std::shared_ptr<rivet_data_array_t> &stream) : dat1(stream->slice(0x8)) {
		if(header.type_id != type_id) {
			throw invalid_tag_error();
		}

		toc_header = stream->get<archive_toc_header>(0);
		if(toc_header.type_id != magic) {
			throw invalid_tag_error();
		}
		// todo
	}
}
