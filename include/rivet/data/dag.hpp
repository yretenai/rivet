// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp> // IWYU pragma: keep

namespace rivet::data {
	struct archive_toc;

	struct RIVET_SHARED dependency_dag : dat1 {
		constexpr const static std::string_view type_name = "DependencyDAG";
		constexpr const static rivet_type_id type_id = 0x2A077A51;
		constexpr const static rivet_type_id magic = 0xB8EF3955;
		constexpr const static rivet_type_id magic_compressed = 0x891F77AF;

		RIVET_DEFINE_TYPE_ID(types, "Asset Types");
		RIVET_DEFINE_TYPE_ID(ids, "Asset Ids");
		RIVET_DEFINE_TYPE_ID(links, "Dependency Links");
		RIVET_DEFINE_TYPE_ID(names, "Asset Names");
		RIVET_DEFINE_TYPE_ID(heads, "Dependency Links Heads");
		RIVET_DEFINE_FAKE_TYPE_ID(graph, "Dependency Graph", 0xBFEC699F); // todo: find real name

		struct dependency_dag_header {
			rivet_type_id type_id;
			rivet_size size;
			rivet_size compressed_size;
		};

		static_assert(sizeof(dependency_dag_header) == 12);

		mutable ankerl::unordered_dense::map<rivet_asset_id, std::shared_ptr<rivet::structures::rivet_asset>> missing_assets = {};
		std::vector<std::vector<std::pair<std::string_view, rivet_asset_id>>> groups;
		std::shared_ptr<archive_toc> toc;

		explicit dependency_dag(const std::shared_ptr<rivet_data_array> &stream, const std::shared_ptr<archive_toc> &toc);

		static auto
		get_dag_data_buffer(const std::shared_ptr<rivet_data_array> &stream) -> std::shared_ptr<rivet_data_array>;

	private:
		void
		insert_dag_data(rivet_size index, const std::shared_ptr<rivet_array<uint32_t>> &links, const std::shared_ptr<rivet_array<rivet_off>> &heads,
						const std::shared_ptr<rivet_array<rivet_off>> &names, const std::shared_ptr<rivet_array<rivet::structures::rivet_asset_type>> &types, std::string_view name,
						bool is_ephemeral = false) const;
	};
} // namespace rivet::data
