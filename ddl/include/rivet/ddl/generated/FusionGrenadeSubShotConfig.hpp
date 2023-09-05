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
	struct FusionGrenadeSubShotPrius; 

	struct RIVET_DDL_SHARED FusionGrenadeSubShotConfig : ConfigBase {
		constexpr const static std::string_view type_name = "FusionGrenadeSubShotConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x5d854a36;

		constexpr const static std::string_view SubShotActor_type_name = "SubShotActor";
		constexpr const static rivet::rivet_type_id SubShotActor_type_id = 0x57e2bc91;
		constexpr const static std::string_view ShotPrius_type_name = "ShotPrius";
		constexpr const static rivet::rivet_type_id ShotPrius_type_id = 0x66fe4621; 

		explicit FusionGrenadeSubShotConfig() = default;
		explicit FusionGrenadeSubShotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SubShotActor {};
		std::shared_ptr<rivet::ddl::generated::FusionGrenadeSubShotPrius> ShotPrius {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FusionGrenadeSubShotConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
