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

#include <rivet/ddl/generated/enums/xa6f8b099.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HeatStateData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeatStateData";
		constexpr static rivet::rivet_type_id type_id = 0x19144b05;

		constexpr static std::string_view HeatState_type_name = "HeatState";
		constexpr static rivet::rivet_type_id HeatState_type_id = 0x24604a5;
		constexpr static std::string_view TempThreshold_type_name = "TempThreshold";
		constexpr static rivet::rivet_type_id TempThreshold_type_id = 0x183a4b21;
		constexpr static std::string_view NumBulletsToSpray_type_name = "NumBulletsToSpray";
		constexpr static rivet::rivet_type_id NumBulletsToSpray_type_id = 0x593c7acc; 

		explicit HeatStateData() = default;
		explicit HeatStateData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xa6f8b099 HeatState {};
		float TempThreshold {};
		uint32_t NumBulletsToSpray {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeatStateData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
