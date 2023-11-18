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

#include <rivet/ddl/generated/enums/x8d474ebb.hpp> 

namespace rivet::ddl::generated {
	struct WwiseSwitch; 

	struct RIVET_DDL_SHARED EmergentVOManagerVoiceSwitches : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EmergentVOManagerVoiceSwitches";
		constexpr static rivet::rivet_type_id type_id = 0xf36487e1;

		constexpr static std::string_view Voice_type_name = "Voice";
		constexpr static rivet::rivet_type_id Voice_type_id = 0xfea894fa;
		constexpr static std::string_view Switches_type_name = "Switches";
		constexpr static rivet::rivet_type_id Switches_type_id = 0x94b7f43;
		constexpr static std::string_view RemovalSwitches_type_name = "RemovalSwitches";
		constexpr static rivet::rivet_type_id RemovalSwitches_type_id = 0x9c7eea08; 

		explicit EmergentVOManagerVoiceSwitches() = default;
		explicit EmergentVOManagerVoiceSwitches([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x8d474ebb Voice {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WwiseSwitch>> Switches {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WwiseSwitch>> RemovalSwitches {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerVoiceSwitches>;
	};
} // namespace rivet::ddl::generated

// clang-format on
