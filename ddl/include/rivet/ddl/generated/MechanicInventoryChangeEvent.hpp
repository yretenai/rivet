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

#include <rivet/ddl/generated/ChangeModeEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MechanicInventoryChangeEvent : ChangeModeEvent {
		constexpr static std::string_view type_name = "MechanicInventoryChangeEvent";
		constexpr static rivet::rivet_type_id type_id = 0x35748b97;

		constexpr static std::string_view addedMechanics_type_name = "addedMechanics";
		constexpr static rivet::rivet_type_id addedMechanics_type_id = 0x159a406b;
		constexpr static std::string_view removedMechanics_type_name = "removedMechanics";
		constexpr static rivet::rivet_type_id removedMechanics_type_id = 0xe5f14bc7; 

		explicit MechanicInventoryChangeEvent() = default;
		explicit MechanicInventoryChangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> addedMechanics {};
		std::vector<std::string_view> removedMechanics {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MechanicInventoryChangeEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
