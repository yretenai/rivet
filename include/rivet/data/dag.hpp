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
	struct archive_toc;

	struct RIVET_SHARED dependency_dag : dat1 {
		constexpr const static rivet_type_id type_id = 0x2A077A51;
		constexpr const static rivet_type_id magic = 0xB8EF3955;
		constexpr const static char* defined_name = "DependencyDAG";

		constexpr const static rivet_type_id section_types = 0x7A0266BC; // todo: rivet_constexpr_hash("Asset Types");
		constexpr const static rivet_type_id section_ids = 0x933C0D32; // todo: rivet_constexpr_hash("Asset Ids");
		constexpr const static rivet_type_id section_links = 0xBC91D1CC; // todo: rivet_constexpr_hash("Dependency Links");
		constexpr const static rivet_type_id section_graph = 0xBFEC699F; // todo: find real name
		constexpr const static rivet_type_id section_names = 0xD101A6CC; // todo: rivet_constexpr_hash("Asset Names");
		constexpr const static rivet_type_id section_heads = 0xF958372E; // todo: rivet_constexpr_hash("Dependency Links Heads");

#pragma pack(push, 1)
		struct dependency_dag_header {
			rivet_type_id type_id;
			rivet_size64 size;
		};
		static_assert(sizeof(dependency_dag_header) == 12);
#pragma pack(pop)

		dependency_dag_header dag_header = { };

		explicit RIVET_DECL dependency_dag(std::shared_ptr<rivet_data_array> &&stream, std::shared_ptr<archive_toc> &toc);
		RIVET_DELETE_COPY(dependency_dag)
	};
}
