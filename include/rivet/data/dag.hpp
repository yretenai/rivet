// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <iosfwd>
#include <memory>

#include <rivet/data/data_file.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::data {
	struct RIVET_SHARED dependency_dag : data_file {
		constexpr const static rivet_typeid_t type_id = 0x2A077A51;
		constexpr const static char* type_name = "DependencyDAG";

		explicit RIVET_DECL dependency_dag(std::shared_ptr<rivet_data_array_t> &stream);
		RIVET_DELETE_COPY(dependency_dag)
	};
}
