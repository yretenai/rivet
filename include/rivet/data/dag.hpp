// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vector>
#include <memory>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet {
	namespace structures {
		struct rivet_asset;
	}

	namespace data {
		struct archive_toc;

		struct RIVET_SHARED dependency_dag : dat1 {
			constexpr const static rivet_type_id type_id = 0x2A077A51;
			constexpr const static rivet_type_id magic = 0xB8EF3955;
			constexpr const static std::string_view defined_name = "DependencyDAG";

			constexpr const static std::string_view section_types_name = "Asset Types";
			constexpr const static std::string_view section_ids_name = "Asset Ids";
			constexpr const static std::string_view section_links_name = "Dependency Links";
			constexpr const static std::string_view section_names_name = "Asset Names";
			constexpr const static std::string_view section_heads_name = "Dependency Links Heads";

			constexpr const static rivet_type_id section_types = rivet::hash::type_id<section_types_name>::value;
			constexpr const static rivet_type_id section_ids = rivet::hash::type_id<section_ids_name>::value; // uninitialized ids?
			constexpr const static rivet_type_id section_links = rivet::hash::type_id<section_links_name>::value;
			constexpr const static rivet_type_id section_graph = 0xBFEC699F; // todo: find real name
			constexpr const static rivet_type_id section_names = rivet::hash::type_id<section_names_name>::value;
			constexpr const static rivet_type_id section_heads = rivet::hash::type_id<section_heads_name>::value;

			struct dependency_dag_header {
				rivet_type_id type_id;
				rivet_size size;
				rivet_size compressed_size;
			};
			static_assert(sizeof(dependency_dag_header) == 12);

			dependency_dag_header dag_header = {};
			std::unordered_map<rivet_asset_id, std::shared_ptr<rivet::structures::rivet_asset>> missing_assets = {};
			std::vector<std::vector<std::pair<std::string, rivet_asset_id>>> groups;
			std::shared_ptr<archive_toc> toc;

			explicit RIVET_DECL dependency_dag(std::shared_ptr<rivet_data_array> &&stream,
											   std::shared_ptr<archive_toc> &toc);
			RIVET_DELETE_COPY(dependency_dag)
		};
	}
}
