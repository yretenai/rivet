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

#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/DamageModifierInvulnerablePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierByTypePrius : DamageModifierInvulnerablePrius {
		constexpr static std::string_view type_name = "DamageModifierByTypePrius";
		constexpr static rivet::rivet_type_id type_id = 0x13372a43;

		constexpr static std::string_view InvincibleToDamageTypes_type_name = "InvincibleToDamageTypes";
		constexpr static rivet::rivet_type_id InvincibleToDamageTypes_type_id = 0x30fed5ea; 

		explicit DamageModifierByTypePrius() = default;
		explicit DamageModifierByTypePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<rivet::ddl::generated::DamageTypes> InvincibleToDamageTypes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierByTypePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
