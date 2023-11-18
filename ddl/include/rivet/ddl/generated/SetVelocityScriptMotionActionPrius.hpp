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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetVelocityScriptMotionActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetVelocityScriptMotionActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7839b929;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view IdealSpeed_type_name = "IdealSpeed";
		constexpr static rivet::rivet_type_id IdealSpeed_type_id = 0xd6f8c91d;
		constexpr static std::string_view Accel_type_name = "Accel";
		constexpr static rivet::rivet_type_id Accel_type_id = 0x44affa24;
		constexpr static std::string_view Decel_type_name = "Decel";
		constexpr static rivet::rivet_type_id Decel_type_id = 0xa9242a88; 

		explicit SetVelocityScriptMotionActionPrius() = default;
		explicit SetVelocityScriptMotionActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		float IdealSpeed {};
		float Accel {};
		float Decel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetVelocityScriptMotionActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
