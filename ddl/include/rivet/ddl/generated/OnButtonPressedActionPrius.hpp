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
	struct RIVET_DDL_SHARED OnButtonPressedActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OnButtonPressedActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x231a7d0b;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view SignalMax_type_name = "SignalMax";
		constexpr static rivet::rivet_type_id SignalMax_type_id = 0x9149785e; 

		explicit OnButtonPressedActionPrius() = default;
		explicit OnButtonPressedActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool StartActive {};
		int32_t SignalMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnButtonPressedActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
