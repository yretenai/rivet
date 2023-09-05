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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct FiringPrius; 

	struct RIVET_DDL_SHARED BotConfigFiring : ConfigBase {
		constexpr const static std::string_view type_name = "BotConfigFiring";
		constexpr const static rivet::rivet_type_id type_id = 0x980cde1a;

		constexpr const static std::string_view WeaponItem_type_name = "WeaponItem";
		constexpr const static rivet::rivet_type_id WeaponItem_type_id = 0x8b393dd4;
		constexpr const static std::string_view Firing_type_name = "Firing";
		constexpr const static rivet::rivet_type_id Firing_type_id = 0x6bad3cd5;
		constexpr const static std::string_view CanAggressorRush_type_name = "CanAggressorRush";
		constexpr const static rivet::rivet_type_id CanAggressorRush_type_id = 0x5165ee36; 

		explicit BotConfigFiring() = default;
		explicit BotConfigFiring([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view WeaponItem {};
		std::shared_ptr<rivet::ddl::generated::FiringPrius> Firing {};
		bool CanAggressorRush {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigFiring>;
	};
} // namespace rivet::ddl::generated

// clang-format on
