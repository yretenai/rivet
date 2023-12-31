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

#include <rivet/ddl/generated/enums/xc2d17b4c.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED MeleeActivatedButtonPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MeleeActivatedButtonPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcebda135;

		constexpr static std::string_view InteractionMode_type_name = "InteractionMode";
		constexpr static rivet::rivet_type_id InteractionMode_type_id = 0x6f23ba2e;
		constexpr static std::string_view RetriggerDelay_type_name = "RetriggerDelay";
		constexpr static rivet::rivet_type_id RetriggerDelay_type_id = 0xffff3a00;
		constexpr static std::string_view ButtonPositionOffset_type_name = "ButtonPositionOffset";
		constexpr static rivet::rivet_type_id ButtonPositionOffset_type_id = 0x2dabcd4; 

		explicit MeleeActivatedButtonPrius() = default;
		explicit MeleeActivatedButtonPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc2d17b4c InteractionMode {};
		float RetriggerDelay {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> ButtonPositionOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeActivatedButtonPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
