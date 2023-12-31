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

#include <rivet/ddl/generated/TriggerResponderBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TriggerResponderDamageModPrius : TriggerResponderBasePrius {
		constexpr static std::string_view type_name = "TriggerResponderDamageModPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf32f9875;

		constexpr static std::string_view ModWhenTriggered_type_name = "ModWhenTriggered";
		constexpr static rivet::rivet_type_id ModWhenTriggered_type_id = 0x42ab46d3;
		constexpr static std::string_view ModWhenUntriggered_type_name = "ModWhenUntriggered";
		constexpr static rivet::rivet_type_id ModWhenUntriggered_type_id = 0x5f6b33d8; 

		explicit TriggerResponderDamageModPrius() = default;
		explicit TriggerResponderDamageModPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ModWhenTriggered {};
		float ModWhenUntriggered {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderDamageModPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
