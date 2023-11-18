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

#include <rivet/ddl/generated/VehicleBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VehiclePushablePrius : VehicleBasePrius {
		constexpr static std::string_view type_name = "VehiclePushablePrius";
		constexpr static rivet::rivet_type_id type_id = 0x33505c86;

		constexpr static std::string_view Friction_type_name = "Friction";
		constexpr static rivet::rivet_type_id Friction_type_id = 0xe80da57b;
		constexpr static std::string_view TorqueDecay_type_name = "TorqueDecay";
		constexpr static rivet::rivet_type_id TorqueDecay_type_id = 0x6eaf9a3c;
		constexpr static std::string_view Mass_type_name = "Mass";
		constexpr static rivet::rivet_type_id Mass_type_id = 0x5c939bd6;
		constexpr static std::string_view MaxAutoAccel_type_name = "MaxAutoAccel";
		constexpr static rivet::rivet_type_id MaxAutoAccel_type_id = 0xeca13066; 

		explicit VehiclePushablePrius() = default;
		explicit VehiclePushablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Friction {};
		float TorqueDecay {};
		float Mass {};
		float MaxAutoAccel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehiclePushablePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
