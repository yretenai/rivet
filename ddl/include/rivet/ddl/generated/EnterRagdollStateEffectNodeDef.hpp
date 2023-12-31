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

#include <rivet/ddl/generated/enums/x684c6439.hpp>
#include <rivet/ddl/generated/NodalShotEffectNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct InputPlugFloat; 

	struct RIVET_DDL_SHARED EnterRagdollStateEffectNodeDef : NodalShotEffectNodeBaseDef {
		constexpr static std::string_view type_name = "EnterRagdollStateEffectNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x7319bb19;

		constexpr static std::string_view ActorType_type_name = "ActorType";
		constexpr static rivet::rivet_type_id ActorType_type_id = 0x1eb7640e;
		constexpr static std::string_view Impulse_type_name = "Impulse";
		constexpr static rivet::rivet_type_id Impulse_type_id = 0xebf69433;
		constexpr static std::string_view Lifetime_type_name = "Lifetime";
		constexpr static rivet::rivet_type_id Lifetime_type_id = 0xc7e68df8; 

		explicit EnterRagdollStateEffectNodeDef() = default;
		explicit EnterRagdollStateEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x684c6439 ActorType {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> Impulse {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> Lifetime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnterRagdollStateEffectNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
