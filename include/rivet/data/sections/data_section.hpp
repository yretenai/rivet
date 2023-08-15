// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/data/registry.hpp>

#include <unordered_map>
#include <istream>

namespace rivet::data::section {
	struct data_section {
		explicit data_section(std::shared_ptr<rivet_data_array_t> &stream) { }
		RIVET_DELETE_COPY(data_section);
	};
}
