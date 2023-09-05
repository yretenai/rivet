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

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierSlotPercentPrius : DamageModifierIncomingPrius {
		constexpr const static std::string_view type_name = "DamageModifierSlotPercentPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xee49070a;

		constexpr const static std::string_view PercentSlot_type_name = "PercentSlot";
		constexpr const static rivet::rivet_type_id PercentSlot_type_id = 0x65dc2ad9; 

		explicit DamageModifierSlotPercentPrius() = default;
		explicit DamageModifierSlotPercentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<float> PercentSlot {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierSlotPercentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
