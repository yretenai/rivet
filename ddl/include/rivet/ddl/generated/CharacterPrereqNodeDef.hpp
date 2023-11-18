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

#include <rivet/ddl/generated/enums/HeroTypes.hpp>
#include <rivet/ddl/generated/PrereqNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CharacterPrereqNodeDef : PrereqNodeBaseDef {
		constexpr static std::string_view type_name = "CharacterPrereqNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x83b7b9a5;

		constexpr static std::string_view RequiredHeroType_type_name = "RequiredHeroType";
		constexpr static rivet::rivet_type_id RequiredHeroType_type_id = 0x2553353; 

		explicit CharacterPrereqNodeDef() = default;
		explicit CharacterPrereqNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::HeroTypes RequiredHeroType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CharacterPrereqNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
