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
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::data {
	struct archive_toc;

	struct RIVET_SHARED dependency_dag : dat1 {
		constexpr const static std::string_view type_name = "DependencyDAG";
		constexpr const static rivet_type_id type_id = 0x2A077A51;
		constexpr const static rivet_type_id magic = 0xB8EF3955;

		RIVET_DEFINE_TYPE_ID(types, "Asset Types");
		RIVET_DEFINE_TYPE_ID(ids, "Asset Ids");
		RIVET_DEFINE_TYPE_ID(links, "Dependency Links");
		RIVET_DEFINE_TYPE_ID(names, "Asset Names");
		RIVET_DEFINE_TYPE_ID(heads, "Dependency Links Heads");

		constexpr const static rivet_type_id graph_type_id = 0xBFEC699F; // todo: find real name

		struct dependency_dag_header {
			rivet_type_id type_id;
			rivet_size size;
			rivet_size compressed_size;
		};
		static_assert(sizeof(dependency_dag_header) == 12);

		dependency_dag_header dag_header = {};
		std::unordered_map<rivet_asset_id, std::shared_ptr<rivet::structures::rivet_asset>> missing_assets = {};
		std::vector<std::vector<std::pair<std::string_view, rivet_asset_id>>> groups;
		std::shared_ptr<archive_toc> toc;

		explicit RIVET_DECL dependency_dag(const std::shared_ptr<rivet_data_array> &stream,
										   const std::shared_ptr<archive_toc> &toc);
		RIVET_DELETE_COPY(dependency_dag)

	private:
		void insert_dag_data(rivet_size index,
							 const std::shared_ptr<rivet_array<uint32_t, RIVET_ALIGNMENT>> &links,
							 const std::shared_ptr<rivet_array<rivet_off, RIVET_ALIGNMENT>> &heads,
							 const std::shared_ptr<rivet_array<rivet_off, RIVET_ALIGNMENT>> &names,
							 const std::shared_ptr<rivet_array<rivet::structures::rivet_asset_type, RIVET_ALIGNMENT>> &types,
							 std::string_view name, bool is_ephemeral = false) noexcept;
	};
}
