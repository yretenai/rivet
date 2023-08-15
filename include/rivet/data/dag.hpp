// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <rivet/rivet_keywords.hpp>
#include <rivet/data/data_file.hpp>

namespace rivet::data {
	struct RIVET_SHARED dependency_dag : data_file {
		constexpr const static rivet_typeid_t type_id = 0x2A077A51;
		constexpr const static std::string type_name = "DependencyDAG";

		explicit dependency_dag(std::istream &stream);
		explicit dependency_dag(std::shared_ptr<rivet_data_array_t> &stream);
		RIVET_DELETE_COPY(dependency_dag)
	};
}
