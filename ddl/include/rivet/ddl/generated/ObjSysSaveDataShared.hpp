// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct ActiveObjective; 

	struct RIVET_DDL_SHARED ObjSysSaveDataShared : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ObjSysSaveDataShared";
		constexpr static rivet::rivet_type_id type_id = 0x83983f42;

		constexpr static std::string_view RequestedGraphs_type_name = "RequestedGraphs";
		constexpr static rivet::rivet_type_id RequestedGraphs_type_id = 0xfd5bea83;
		constexpr static std::string_view PrimaryObjective_type_name = "PrimaryObjective";
		constexpr static rivet::rivet_type_id PrimaryObjective_type_id = 0x75d0a0f3; 

		explicit ObjSysSaveDataShared() = default;
		explicit ObjSysSaveDataShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint64_t> RequestedGraphs {};
		std::shared_ptr<rivet::ddl::generated::ActiveObjective> PrimaryObjective {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysSaveDataShared>;
	};
} // namespace rivet::ddl::generated

// clang-format on
