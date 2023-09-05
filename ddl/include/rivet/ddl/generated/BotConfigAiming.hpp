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
	struct AimingBasePrius;
	struct AimModWrapper; 

	struct RIVET_DDL_SHARED BotConfigAiming : ConfigBase {
		constexpr const static std::string_view type_name = "BotConfigAiming";
		constexpr const static rivet::rivet_type_id type_id = 0x8d73a96b;

		constexpr const static std::string_view Aiming_type_name = "Aiming";
		constexpr const static rivet::rivet_type_id Aiming_type_id = 0x7ed24ba4;
		constexpr const static std::string_view AimMods_type_name = "AimMods";
		constexpr const static rivet::rivet_type_id AimMods_type_id = 0x1d7694a1; 

		explicit BotConfigAiming() = default;
		explicit BotConfigAiming([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AimingBasePrius> Aiming {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AimModWrapper>> AimMods {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigAiming>;
	};
} // namespace rivet::ddl::generated

// clang-format on
