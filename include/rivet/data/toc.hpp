// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <rivet/rivet_keywords.hpp>
#include <rivet/data/data_file.hpp>

namespace rivet::data {
	struct RIVET_SHARED archive_toc : data_file {
		constexpr const static rivet_typeid_t type_id = 0x4D7CF320;
		constexpr const static std::string type_name = "ArchiveTOC";

		explicit archive_toc(std::istream &stream);
		explicit archive_toc(std::shared_ptr<rivet_data_array_t> &stream);
		RIVET_DELETE_COPY(archive_toc)
	};
}
