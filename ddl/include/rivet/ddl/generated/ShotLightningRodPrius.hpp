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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/BasicBulletPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ShotLightningRodPrius : BasicBulletPrius {
		constexpr static std::string_view type_name = "ShotLightningRodPrius";
		constexpr static rivet::rivet_type_id type_id = 0x22410692;

		constexpr static std::string_view MaxArcs_type_name = "MaxArcs";
		constexpr static rivet::rivet_type_id MaxArcs_type_id = 0x8fec7d16;
		constexpr static std::string_view ExplosionKnockbackLevel_type_name = "ExplosionKnockbackLevel";
		constexpr static rivet::rivet_type_id ExplosionKnockbackLevel_type_id = 0x3f5dbe92;
		constexpr static std::string_view ArcKnockbackLevel_type_name = "ArcKnockbackLevel";
		constexpr static rivet::rivet_type_id ArcKnockbackLevel_type_id = 0x14dda30f;
		constexpr static std::string_view ArcEndJoint_type_name = "ArcEndJoint";
		constexpr static rivet::rivet_type_id ArcEndJoint_type_id = 0x53d45368; 

		explicit ShotLightningRodPrius() = default;
		explicit ShotLightningRodPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MaxArcs {};
		rivet::ddl::generated::KnockbackLevels ExplosionKnockbackLevel {};
		rivet::ddl::generated::KnockbackLevels ArcKnockbackLevel {};
		std::string_view ArcEndJoint {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotLightningRodPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on