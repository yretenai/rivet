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
	struct RIVET_DDL_SHARED AimModLosTimeContractingSpreadPrius : AimModifierPrius {
		constexpr const static std::string_view type_name = "AimModLosTimeContractingSpreadPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x32617495;

		constexpr const static std::string_view InaccuracyMin_type_name = "InaccuracyMin";
		constexpr const static rivet::rivet_type_id InaccuracyMin_type_id = 0x445162fd;
		constexpr const static std::string_view InaccuracyMax_type_name = "InaccuracyMax";
		constexpr const static rivet::rivet_type_id InaccuracyMax_type_id = 0x785c5da4;
		constexpr const static std::string_view LosTimeToMinInaccuracy_type_name = "LosTimeToMinInaccuracy";
		constexpr const static rivet::rivet_type_id LosTimeToMinInaccuracy_type_id = 0x72fbf1e8;
		constexpr const static std::string_view ResetTime_type_name = "ResetTime";
		constexpr const static rivet::rivet_type_id ResetTime_type_id = 0x45a33419;
		constexpr const static std::string_view LeashDist_type_name = "LeashDist";
		constexpr const static rivet::rivet_type_id LeashDist_type_id = 0x4f97f3aa;
		constexpr const static std::string_view LeashTime_type_name = "LeashTime";
		constexpr const static rivet::rivet_type_id LeashTime_type_id = 0xa17fbb18; 

		explicit AimModLosTimeContractingSpreadPrius() = default;
		explicit AimModLosTimeContractingSpreadPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float InaccuracyMin {};
		float InaccuracyMax {};
		float LosTimeToMinInaccuracy {};
		float ResetTime {};
		float LeashDist {};
		float LeashTime {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLosTimeContractingSpreadPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
