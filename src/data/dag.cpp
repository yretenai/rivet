// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dag.hpp>
#include <rivet/data/registry.hpp>

namespace rivet::data {
	using dependency_dag_registry [[maybe_unused]] = register_data_handler<dependency_dag>;

	dependency_dag::dependency_dag(std::shared_ptr<rivet_data_array_t> &stream) : data_file(stream) {
		if(header.type_id != type_id) {
			throw invalid_tag_error();
		}
		// todo
	}
}
