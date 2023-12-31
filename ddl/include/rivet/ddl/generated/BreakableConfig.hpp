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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BreakableConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BreakableConfig";
		constexpr static rivet::rivet_type_id type_id = 0x96c19395;

		constexpr static std::string_view Gravity_type_name = "Gravity";
		constexpr static rivet::rivet_type_id Gravity_type_id = 0x5bf7469f;
		constexpr static std::string_view LinearDamping_type_name = "LinearDamping";
		constexpr static rivet::rivet_type_id LinearDamping_type_id = 0x97613ca3;
		constexpr static std::string_view AngularDamping_type_name = "AngularDamping";
		constexpr static rivet::rivet_type_id AngularDamping_type_id = 0xcdf27098;
		constexpr static std::string_view SuggestedMaxDebris_type_name = "SuggestedMaxDebris";
		constexpr static rivet::rivet_type_id SuggestedMaxDebris_type_id = 0x2acef8eb; 

		explicit BreakableConfig() = default;
		explicit BreakableConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Gravity {};
		float LinearDamping {};
		float AngularDamping {};
		uint32_t SuggestedMaxDebris {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
