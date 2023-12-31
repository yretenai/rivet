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

#include <rivet/ddl/generated/enums/VehicleClass.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VehicleTypeListEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VehicleTypeListEntry";
		constexpr static rivet::rivet_type_id type_id = 0xe4926db4;

		constexpr static std::string_view VehicleClass_type_name = "VehicleClass";
		constexpr static rivet::rivet_type_id VehicleClass_type_id = 0xc0bc4d5c;
		constexpr static std::string_view Actor_type_name = "Actor";
		constexpr static rivet::rivet_type_id Actor_type_id = 0x5d269a38;
		constexpr static std::string_view Frequency_type_name = "Frequency";
		constexpr static rivet::rivet_type_id Frequency_type_id = 0xa482271f; 

		explicit VehicleTypeListEntry() = default;
		explicit VehicleTypeListEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::VehicleClass VehicleClass {};
		std::string_view Actor {};
		uint32_t Frequency {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleTypeListEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
