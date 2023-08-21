// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>

namespace rivet::data {
	dependency_dag::dependency_dag(std::shared_ptr<rivet_data_array> &&stream, std::shared_ptr<archive_toc> &toc) : dat1(stream->slice(12)) {
		if(header.type_id != type_id) {
			throw invalid_tag_error();
		}

		dag_header = stream->get<dependency_dag_header>(0);
		if(dag_header.type_id != magic) {
			throw invalid_tag_error();
		}
		// todo
	}
}
