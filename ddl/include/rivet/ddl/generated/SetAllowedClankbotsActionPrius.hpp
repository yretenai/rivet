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
	struct RIVET_DDL_SHARED SetAllowedClankbotsActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetAllowedClankbotsActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x83b35a77;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view AllowClankbot_type_name = "AllowClankbot";
		constexpr static rivet::rivet_type_id AllowClankbot_type_id = 0x3c072816;
		constexpr static std::string_view AllowPowerbot_type_name = "AllowPowerbot";
		constexpr static rivet::rivet_type_id AllowPowerbot_type_id = 0x7095ccc1;
		constexpr static std::string_view AllowSpringbot_type_name = "AllowSpringbot";
		constexpr static rivet::rivet_type_id AllowSpringbot_type_id = 0x31b7f029;
		constexpr static std::string_view AllowStretchbot_type_name = "AllowStretchbot";
		constexpr static rivet::rivet_type_id AllowStretchbot_type_id = 0x16399e51; 

		explicit SetAllowedClankbotsActionPrius() = default;
		explicit SetAllowedClankbotsActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool AllowClankbot {};
		bool AllowPowerbot {};
		bool AllowSpringbot {};
		bool AllowStretchbot {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetAllowedClankbotsActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
