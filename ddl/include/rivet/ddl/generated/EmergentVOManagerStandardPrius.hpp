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

#include <rivet/ddl/generated/EmergentVOManagerGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED EmergentVOManagerStandardPrius : EmergentVOManagerGamePrius {
		constexpr static std::string_view type_name = "EmergentVOManagerStandardPrius";
		constexpr static rivet::rivet_type_id type_id = 0x752daa97;

		constexpr static std::string_view EmergentVOConfig_type_name = "EmergentVOConfig";
		constexpr static rivet::rivet_type_id EmergentVOConfig_type_id = 0xde8b92bf;
		constexpr static std::string_view TriggerRadius_type_name = "TriggerRadius";
		constexpr static rivet::rivet_type_id TriggerRadius_type_id = 0xcc7f53a5; 

		explicit EmergentVOManagerStandardPrius() = default;
		explicit EmergentVOManagerStandardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EmergentVOConfig {};
		float TriggerRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerStandardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
