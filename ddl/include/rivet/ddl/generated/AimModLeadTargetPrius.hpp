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

#include <rivet/ddl/generated/AimModifierPrius.hpp> 

namespace rivet::ddl::generated {
	struct AimModLeadTargetPriusModDef; 

	struct RIVET_DDL_SHARED AimModLeadTargetPrius : AimModifierPrius {
		constexpr static std::string_view type_name = "AimModLeadTargetPrius";
		constexpr static rivet::rivet_type_id type_id = 0x5fdab0a1;

		constexpr static std::string_view MaxPredictiveSpeed_type_name = "MaxPredictiveSpeed";
		constexpr static rivet::rivet_type_id MaxPredictiveSpeed_type_id = 0x9af719b0;
		constexpr static std::string_view LockOnShotCount_type_name = "LockOnShotCount";
		constexpr static rivet::rivet_type_id LockOnShotCount_type_id = 0x4e7b8ad3;
		constexpr static std::string_view AdditionalLeadTime_type_name = "AdditionalLeadTime";
		constexpr static rivet::rivet_type_id AdditionalLeadTime_type_id = 0x56e81338;
		constexpr static std::string_view MaxLeadTime_type_name = "MaxLeadTime";
		constexpr static rivet::rivet_type_id MaxLeadTime_type_id = 0xee01647e;
		constexpr static std::string_view ConfigModDefs_type_name = "ConfigModDefs";
		constexpr static rivet::rivet_type_id ConfigModDefs_type_id = 0x3d4ae417; 

		explicit AimModLeadTargetPrius() = default;
		explicit AimModLeadTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MaxPredictiveSpeed {};
		int32_t LockOnShotCount {};
		float AdditionalLeadTime {};
		float MaxLeadTime {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AimModLeadTargetPriusModDef>> ConfigModDefs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLeadTargetPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
