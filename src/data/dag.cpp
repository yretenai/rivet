// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dag.hpp>

namespace rivet::data {
	using dependency_dag_registry [[maybe_unused]] = register_data_handler<dependency_dag>;

	dependency_dag::dependency_dag(std::istream &stream) : data_file(stream) {
		// todo
	}

	dependency_dag::dependency_dag(std::shared_ptr<rivet_data_array_t> &stream) : data_file(stream) {
		// todo
	}
}