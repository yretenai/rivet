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
	struct RIVET_DDL_SHARED ContractingVolley : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ContractingVolley";
		constexpr static rivet::rivet_type_id type_id = 0xaf32bf19;

		constexpr static std::string_view InaccuracyMin_type_name = "InaccuracyMin";
		constexpr static rivet::rivet_type_id InaccuracyMin_type_id = 0x445162fd;
		constexpr static std::string_view InaccuracyMax_type_name = "InaccuracyMax";
		constexpr static rivet::rivet_type_id InaccuracyMax_type_id = 0x785c5da4;
		constexpr static std::string_view ShotsToMinAccuracy_type_name = "ShotsToMinAccuracy";
		constexpr static rivet::rivet_type_id ShotsToMinAccuracy_type_id = 0xe4a2c370; 

		explicit ContractingVolley() = default;
		explicit ContractingVolley([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float InaccuracyMin {};
		float InaccuracyMax {};
		float ShotsToMinAccuracy {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContractingVolley>;
	};
} // namespace rivet::ddl::generated

// clang-format on
