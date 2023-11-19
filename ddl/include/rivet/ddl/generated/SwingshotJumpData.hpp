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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SwingshotJumpData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SwingshotJumpData";
		constexpr static rivet::rivet_type_id type_id = 0xc6a3e93d;

		constexpr static std::string_view MinInitialHorizontalSpeed_type_name = "MinInitialHorizontalSpeed";
		constexpr static rivet::rivet_type_id MinInitialHorizontalSpeed_type_id = 0x771ee838;
		constexpr static std::string_view TurnSpeedGain_type_name = "TurnSpeedGain";
		constexpr static rivet::rivet_type_id TurnSpeedGain_type_id = 0xc4a00637;
		constexpr static std::string_view TurnSpeedDamp_type_name = "TurnSpeedDamp";
		constexpr static rivet::rivet_type_id TurnSpeedDamp_type_id = 0x487651be;
		constexpr static std::string_view TurnSpeedMax_type_name = "TurnSpeedMax";
		constexpr static rivet::rivet_type_id TurnSpeedMax_type_id = 0xa66b2ab3; 

		explicit SwingshotJumpData() = default;
		explicit SwingshotJumpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinInitialHorizontalSpeed {};
		float TurnSpeedGain {};
		float TurnSpeedDamp {};
		float TurnSpeedMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingshotJumpData>;
	};
} // namespace rivet::ddl::generated

// clang-format on