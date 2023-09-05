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
	struct FinaleMechStatusEffectTrackerPixelizedPrius;
	struct FinaleMechStatusEffectTrackerFreezePrius;
	struct FinaleMechStatusEffectTrackerShrubberyPrius;
	struct FinaleMechStatusEffectTrackerLightningRodPrius; 

	struct RIVET_DDL_SHARED FinaleMechConfigStatusEffects : ConfigBase {
		constexpr const static std::string_view type_name = "FinaleMechConfigStatusEffects";
		constexpr const static rivet::rivet_type_id type_id = 0x9918e1b8;

		constexpr const static std::string_view PixelizedTrackerPrius_type_name = "PixelizedTrackerPrius";
		constexpr const static rivet::rivet_type_id PixelizedTrackerPrius_type_id = 0x5d48d42;
		constexpr const static std::string_view FreezeTrackerPrius_type_name = "FreezeTrackerPrius";
		constexpr const static rivet::rivet_type_id FreezeTrackerPrius_type_id = 0x72373026;
		constexpr const static std::string_view ShrubberyTrackerPrius_type_name = "ShrubberyTrackerPrius";
		constexpr const static rivet::rivet_type_id ShrubberyTrackerPrius_type_id = 0xb35aac7a;
		constexpr const static std::string_view LightningRodTrackerPrius_type_name = "LightningRodTrackerPrius";
		constexpr const static rivet::rivet_type_id LightningRodTrackerPrius_type_id = 0x9dc20243; 

		explicit FinaleMechConfigStatusEffects() = default;
		explicit FinaleMechConfigStatusEffects([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::FinaleMechStatusEffectTrackerPixelizedPrius> PixelizedTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::FinaleMechStatusEffectTrackerFreezePrius> FreezeTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::FinaleMechStatusEffectTrackerShrubberyPrius> ShrubberyTrackerPrius {};
		std::shared_ptr<rivet::ddl::generated::FinaleMechStatusEffectTrackerLightningRodPrius> LightningRodTrackerPrius {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleMechConfigStatusEffects>;
	};
} // namespace rivet::ddl::generated

// clang-format on
