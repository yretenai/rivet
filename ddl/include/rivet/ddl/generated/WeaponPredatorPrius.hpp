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

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponPredatorPrius : WeaponGamePrius {
		constexpr static std::string_view type_name = "WeaponPredatorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x43641016;

		constexpr static std::string_view TargetMaterialGraph_type_name = "TargetMaterialGraph";
		constexpr static rivet::rivet_type_id TargetMaterialGraph_type_id = 0x5fc332ac; 

		explicit WeaponPredatorPrius() = default;
		explicit WeaponPredatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TargetMaterialGraph {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponPredatorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
