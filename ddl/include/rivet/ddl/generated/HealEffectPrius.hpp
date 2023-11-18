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

#include <rivet/ddl/generated/enums/x4891b54.hpp>
#include <rivet/ddl/generated/ScriptedShotEffectBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HealEffectPrius : ScriptedShotEffectBasePrius {
		constexpr static std::string_view type_name = "HealEffectPrius";
		constexpr static rivet::rivet_type_id type_id = 0x6cd2ed9a;

		constexpr static std::string_view ActorType_type_name = "ActorType";
		constexpr static rivet::rivet_type_id ActorType_type_id = 0x1eb7640e;
		constexpr static std::string_view Health_type_name = "Health";
		constexpr static rivet::rivet_type_id Health_type_id = 0xf0a26d74;
		constexpr static std::string_view ContinuousMode_type_name = "ContinuousMode";
		constexpr static rivet::rivet_type_id ContinuousMode_type_id = 0x678540d; 

		explicit HealEffectPrius() = default;
		explicit HealEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x4891b54 ActorType {};
		float Health {};
		bool ContinuousMode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
