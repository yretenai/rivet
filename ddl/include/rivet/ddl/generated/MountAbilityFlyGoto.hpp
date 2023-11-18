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

#include <rivet/ddl/generated/MountAbilityBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MountAbilityFlyGoto : MountAbilityBase {
		constexpr static std::string_view type_name = "MountAbilityFlyGoto";
		constexpr static rivet::rivet_type_id type_id = 0x14288b4d;

		constexpr static std::string_view AnimOutroName_type_name = "AnimOutroName";
		constexpr static rivet::rivet_type_id AnimOutroName_type_id = 0x52eadacf;
		constexpr static std::string_view AnimIntroName_type_name = "AnimIntroName";
		constexpr static rivet::rivet_type_id AnimIntroName_type_id = 0x218e38;
		constexpr static std::string_view FlyerGotoLocator_type_name = "FlyerGotoLocator";
		constexpr static rivet::rivet_type_id FlyerGotoLocator_type_id = 0xcb06900;
		constexpr static std::string_view GotoActorLocator_type_name = "GotoActorLocator";
		constexpr static rivet::rivet_type_id GotoActorLocator_type_id = 0x7d971e7d;
		constexpr static std::string_view GotoSpeed_type_name = "GotoSpeed";
		constexpr static rivet::rivet_type_id GotoSpeed_type_id = 0xbc7dba80;
		constexpr static std::string_view MinOutroSpeed_type_name = "MinOutroSpeed";
		constexpr static rivet::rivet_type_id MinOutroSpeed_type_id = 0xb984ea2f;
		constexpr static std::string_view MaxOutroSpeed_type_name = "MaxOutroSpeed";
		constexpr static rivet::rivet_type_id MaxOutroSpeed_type_id = 0xf9cb9259; 

		explicit MountAbilityFlyGoto() = default;
		explicit MountAbilityFlyGoto([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AnimOutroName {};
		std::string_view AnimIntroName {};
		std::string_view FlyerGotoLocator {};
		std::string_view GotoActorLocator {};
		float GotoSpeed {};
		float MinOutroSpeed {};
		float MaxOutroSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityFlyGoto>;
	};
} // namespace rivet::ddl::generated

// clang-format on
