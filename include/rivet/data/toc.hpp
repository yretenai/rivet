// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <iosfwd>
#include <memory>

#include <rivet/data/dat1.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::data {
	struct RIVET_SHARED archive_toc : dat1 {
		constexpr const static rivet_typeid_t type_id = 0x34E89035;
		constexpr const static rivet_typeid_t magic = 0x4D7CF320;
		constexpr const static char* defined_name = "ArchiveTOC";

		struct archive_toc_header {
			rivet_typeid_t type_id;
			rivet_size_t size;
		};

		archive_toc_header toc_header = { };

		explicit RIVET_DECL archive_toc(std::shared_ptr<rivet_data_array_t> &stream);
		RIVET_DELETE_COPY(archive_toc)
	};
}
