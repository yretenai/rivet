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

#include <rivet/ddl/generated/StatusEffectConfig.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED StatusEffectFossilizeConfig : StatusEffectConfig {
		constexpr static std::string_view type_name = "StatusEffectFossilizeConfig";
		constexpr static rivet::rivet_type_id type_id = 0x8dc132d6;

		constexpr static std::string_view BeardActor_type_name = "BeardActor";
		constexpr static rivet::rivet_type_id BeardActor_type_id = 0x4c1f8462;
		constexpr static std::string_view BowTieActor_type_name = "BowTieActor";
		constexpr static rivet::rivet_type_id BowTieActor_type_id = 0x8e20da2c;
		constexpr static std::string_view GlassesActor_type_name = "GlassesActor";
		constexpr static rivet::rivet_type_id GlassesActor_type_id = 0x7c25eb77;
		constexpr static std::string_view GraveActor_type_name = "GraveActor";
		constexpr static rivet::rivet_type_id GraveActor_type_id = 0x5d849728; 

		explicit StatusEffectFossilizeConfig() = default;
		explicit StatusEffectFossilizeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BeardActor {};
		std::string_view BowTieActor {};
		std::string_view GlassesActor {};
		std::string_view GraveActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectFossilizeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
