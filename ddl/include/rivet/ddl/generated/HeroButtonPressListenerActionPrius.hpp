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

#include <rivet/ddl/generated/enums/xe50c3252.hpp>
#include <rivet/ddl/generated/enums/x290280c7.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct ActionControlBase; 

	struct RIVET_DDL_SHARED HeroButtonPressListenerActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroButtonPressListenerActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x43691b5e;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view InputType_type_name = "InputType";
		constexpr static rivet::rivet_type_id InputType_type_id = 0xe7282389;
		constexpr static std::string_view Button_type_name = "Button";
		constexpr static rivet::rivet_type_id Button_type_id = 0x47ee25a;
		constexpr static std::string_view Action_type_name = "Action";
		constexpr static rivet::rivet_type_id Action_type_id = 0x79b4c2f5;
		constexpr static std::string_view StartListening_type_name = "StartListening";
		constexpr static rivet::rivet_type_id StartListening_type_id = 0xda0f12ca;
		constexpr static std::string_view RetriggerDelay_type_name = "RetriggerDelay";
		constexpr static rivet::rivet_type_id RetriggerDelay_type_id = 0xffff3a00;
		constexpr static std::string_view TriggerOnHeld_type_name = "TriggerOnHeld";
		constexpr static rivet::rivet_type_id TriggerOnHeld_type_id = 0xa4a100c; 

		explicit HeroButtonPressListenerActionPrius() = default;
		explicit HeroButtonPressListenerActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x290280c7 InputType {};
		rivet::ddl::generated::xe50c3252 Button {};
		std::shared_ptr<rivet::ddl::generated::ActionControlBase> Action {};
		bool StartListening {};
		float RetriggerDelay {};
		bool TriggerOnHeld {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroButtonPressListenerActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
