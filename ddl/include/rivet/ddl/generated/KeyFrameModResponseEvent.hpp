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

#include <rivet/ddl/generated/ResponseEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED KeyFrameModResponseEvent : ResponseEvent {
		constexpr static std::string_view type_name = "KeyFrameModResponseEvent";
		constexpr static rivet::rivet_type_id type_id = 0xe32f1a9e;

		constexpr static std::string_view ModifierName_type_name = "ModifierName";
		constexpr static rivet::rivet_type_id ModifierName_type_id = 0xe992e16a;
		constexpr static std::string_view XValue_type_name = "XValue";
		constexpr static rivet::rivet_type_id XValue_type_id = 0x725fe045;
		constexpr static std::string_view YValue_type_name = "YValue";
		constexpr static rivet::rivet_type_id YValue_type_id = 0xb90333e0;
		constexpr static std::string_view ZValue_type_name = "ZValue";
		constexpr static rivet::rivet_type_id ZValue_type_id = 0x3f97414e;
		constexpr static std::string_view SetGlobal_type_name = "SetGlobal";
		constexpr static rivet::rivet_type_id SetGlobal_type_id = 0x739d0143;
		constexpr static std::string_view ApplyModifier_type_name = "ApplyModifier";
		constexpr static rivet::rivet_type_id ApplyModifier_type_id = 0x99308179; 

		explicit KeyFrameModResponseEvent() = default;
		explicit KeyFrameModResponseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ModifierName {};
		float XValue {};
		float YValue {};
		float ZValue {};
		bool SetGlobal {};
		bool ApplyModifier {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KeyFrameModResponseEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
