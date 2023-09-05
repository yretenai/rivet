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

#include <rivet/ddl/generated/BotComboConditionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboConditionHealthCheckPrius : BotComboConditionBasePrius {
		constexpr const static std::string_view type_name = "BotComboConditionHealthCheckPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x6bbc5238;

		constexpr const static std::string_view HPThreshhold_type_name = "HPThreshhold";
		constexpr const static rivet::rivet_type_id HPThreshhold_type_id = 0x947e58e4; 

		explicit BotComboConditionHealthCheckPrius() = default;
		explicit BotComboConditionHealthCheckPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HPThreshhold {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionHealthCheckPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
