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

#include <rivet/ddl/generated/TriggerSwitchSimplePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TriggerSwitchRandomEnabledPrius : TriggerSwitchSimplePrius {
		constexpr static std::string_view type_name = "TriggerSwitchRandomEnabledPrius";
		constexpr static rivet::rivet_type_id type_id = 0x16d9ff09;

		constexpr static std::string_view ChanceToBeEnabled_type_name = "ChanceToBeEnabled";
		constexpr static rivet::rivet_type_id ChanceToBeEnabled_type_id = 0xd7620a70; 

		explicit TriggerSwitchRandomEnabledPrius() = default;
		explicit TriggerSwitchRandomEnabledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ChanceToBeEnabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchRandomEnabledPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on