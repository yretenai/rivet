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

#include <rivet/ddl/generated/ActorNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugActor; 

	struct RIVET_DDL_SHARED DefaultLocalHeroNodeDef : ActorNodeBaseDef {
		constexpr static std::string_view type_name = "DefaultLocalHeroNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x6f6e8761;

		constexpr static std::string_view Hero_type_name = "Hero";
		constexpr static rivet::rivet_type_id Hero_type_id = 0x615eae36; 

		explicit DefaultLocalHeroNodeDef() = default;
		explicit DefaultLocalHeroNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::OutputPlugActor> Hero {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DefaultLocalHeroNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
