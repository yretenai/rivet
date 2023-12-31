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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ConduitActorPropertiesPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ConduitActorPropertiesPrius";
		constexpr static rivet::rivet_type_id type_id = 0x44f1e771;

		constexpr static std::string_view Size_type_name = "Size";
		constexpr static rivet::rivet_type_id Size_type_id = 0xc750e4da;
		constexpr static std::string_view CharacterType_type_name = "CharacterType";
		constexpr static rivet::rivet_type_id CharacterType_type_id = 0x1554d8e6;
		constexpr static std::string_view DamageTimerDuration_type_name = "DamageTimerDuration";
		constexpr static rivet::rivet_type_id DamageTimerDuration_type_id = 0xf4235539;
		constexpr static std::string_view WeakspotTimerDuration_type_name = "WeakspotTimerDuration";
		constexpr static rivet::rivet_type_id WeakspotTimerDuration_type_id = 0x22d64cc5;
		constexpr static std::string_view BlockTimerDuration_type_name = "BlockTimerDuration";
		constexpr static rivet::rivet_type_id BlockTimerDuration_type_id = 0xf0a044d6; 

		explicit ConduitActorPropertiesPrius() = default;
		explicit ConduitActorPropertiesPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Size {};
		std::string_view CharacterType {};
		float DamageTimerDuration {};
		float WeakspotTimerDuration {};
		float BlockTimerDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitActorPropertiesPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
