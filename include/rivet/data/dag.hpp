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
	struct RIVET_SHARED dependency_dag : dat1 {
		constexpr const static rivet_typeid_t type_id = 0xB8EF3955;
		constexpr const static rivet_typeid_t magic = 0x2A077A51;
		constexpr const static char* defined_name = "DependencyDAG";

		struct dependency_dag_header {
			rivet_typeid_t type_id;
			rivet_size64_t size;
		};

		dependency_dag_header dag_header = { };

		explicit RIVET_DECL dependency_dag(std::shared_ptr<rivet_data_array_t> &stream);
		RIVET_DELETE_COPY(dependency_dag)
	};
}
