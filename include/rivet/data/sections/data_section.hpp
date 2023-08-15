// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <memory>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data::section {
	struct data_section {
		explicit data_section(std::shared_ptr<rivet_data_array_t> &stream) { }
		RIVET_DELETE_COPY(data_section);
	};
}
