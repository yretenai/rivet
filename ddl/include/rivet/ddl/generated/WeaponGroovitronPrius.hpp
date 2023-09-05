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

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponGroovitronPrius : WeaponGamePrius {
		constexpr const static std::string_view type_name = "WeaponGroovitronPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x7fa5cd90;

		constexpr const static std::string_view DanceTrophyConfig_type_name = "DanceTrophyConfig";
		constexpr const static rivet::rivet_type_id DanceTrophyConfig_type_id = 0xa4795f3; 

		explicit WeaponGroovitronPrius() = default;
		explicit WeaponGroovitronPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DanceTrophyConfig {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponGroovitronPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
