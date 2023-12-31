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

#include <rivet/ddl/generated/AwardBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct AwardObjective; 

	struct RIVET_DDL_SHARED AwardCompleteObjectivesPrius : AwardBasePrius {
		constexpr static std::string_view type_name = "AwardCompleteObjectivesPrius";
		constexpr static rivet::rivet_type_id type_id = 0x52088e8a;

		constexpr static std::string_view Objectives_type_name = "Objectives";
		constexpr static rivet::rivet_type_id Objectives_type_id = 0xb7863755; 

		explicit AwardCompleteObjectivesPrius() = default;
		explicit AwardCompleteObjectivesPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::AwardObjective>> Objectives {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardCompleteObjectivesPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
