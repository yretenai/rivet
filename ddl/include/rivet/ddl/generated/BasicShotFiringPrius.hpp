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

#include <rivet/ddl/generated/WeaponFiringBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct ShotBasePrius; 

	struct RIVET_DDL_SHARED BasicShotFiringPrius : WeaponFiringBasePrius {
		constexpr static std::string_view type_name = "BasicShotFiringPrius";
		constexpr static rivet::rivet_type_id type_id = 0x979106ac;

		constexpr static std::string_view ShotAsset_type_name = "ShotAsset";
		constexpr static rivet::rivet_type_id ShotAsset_type_id = 0x46d53e22;
		constexpr static std::string_view ShotPrius_type_name = "ShotPrius";
		constexpr static rivet::rivet_type_id ShotPrius_type_id = 0x66fe4621; 

		explicit BasicShotFiringPrius() = default;
		explicit BasicShotFiringPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShotAsset {};
		std::shared_ptr<rivet::ddl::generated::ShotBasePrius> ShotPrius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicShotFiringPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
