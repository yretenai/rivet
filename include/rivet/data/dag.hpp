// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <iosfwd>
#include <memory>

#include <rivet/data/dat1.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_hash.hpp>

namespace rivet::data {
	struct archive_toc;

	struct RIVET_SHARED dependency_dag : dat1 {
		constexpr const static rivet_type_id type_id = 0x2A077A51;
		constexpr const static rivet_type_id magic = 0xB8EF3955;
		constexpr const static char defined_name[] = "DependencyDAG";

		constexpr const static char section_types_name[] = "Asset Types";
		constexpr const static char section_ids_name[] = "Asset Ids";
		constexpr const static char section_links_name[] = "Dependency Links";
		constexpr const static char section_names_name[] = "Asset Names";
		constexpr const static char section_heads_name[] = "Dependency Links Heads";

		constexpr const static rivet_type_id section_types = rivet::hash::type_id<section_types_name, sizeof(section_types_name)>::value;
		constexpr const static rivet_type_id section_ids = rivet::hash::type_id<section_ids_name, sizeof(section_ids_name)>::value;
		constexpr const static rivet_type_id section_links = rivet::hash::type_id<section_links_name, sizeof(section_links_name)>::value;
		constexpr const static rivet_type_id section_graph = 0xBFEC699F; // todo: find real name
		constexpr const static rivet_type_id section_names = rivet::hash::type_id<section_names_name, sizeof(section_names_name)>::value;
		constexpr const static rivet_type_id section_heads =rivet::hash::type_id<section_heads_name, sizeof(section_heads_name)>::value;

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
