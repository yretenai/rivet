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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct MissionOrderListIndirect; 

	struct RIVET_DDL_SHARED MasterMissionOrderConfigBase : ConfigBase {
		constexpr static std::string_view type_name = "MasterMissionOrderConfigBase";
		constexpr static rivet::rivet_type_id type_id = 0xa0b1788e;

		constexpr static std::string_view MissionOrderLists_type_name = "MissionOrderLists";
		constexpr static rivet::rivet_type_id MissionOrderLists_type_id = 0x20608a8f; 

		explicit MasterMissionOrderConfigBase() = default;
		explicit MasterMissionOrderConfigBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MissionOrderListIndirect>> MissionOrderLists {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterMissionOrderConfigBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
