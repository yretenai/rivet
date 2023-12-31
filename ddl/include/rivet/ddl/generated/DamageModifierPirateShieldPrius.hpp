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
	struct ShieldSectionData; 

	struct RIVET_DDL_SHARED DamageModifierPirateShieldPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageModifierPirateShieldPrius";
		constexpr static rivet::rivet_type_id type_id = 0x99471af4;

		constexpr static std::string_view ShieldSection_type_name = "ShieldSection";
		constexpr static rivet::rivet_type_id ShieldSection_type_id = 0x946e89de;
		constexpr static std::string_view FrameLook_type_name = "FrameLook";
		constexpr static rivet::rivet_type_id FrameLook_type_id = 0xc7cde2a9;
		constexpr static std::string_view ShieldSectionHealth_type_name = "ShieldSectionHealth";
		constexpr static rivet::rivet_type_id ShieldSectionHealth_type_id = 0xcd95b826;
		constexpr static std::string_view ShieldedAnimset_type_name = "ShieldedAnimset";
		constexpr static rivet::rivet_type_id ShieldedAnimset_type_id = 0x1124259a;
		constexpr static std::string_view ShieldChunkLooks_type_name = "ShieldChunkLooks";
		constexpr static rivet::rivet_type_id ShieldChunkLooks_type_id = 0x175c672d;
		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b; 

		explicit DamageModifierPirateShieldPrius() = default;
		explicit DamageModifierPirateShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ShieldSectionData>> ShieldSection {};
		std::string_view FrameLook {};
		float ShieldSectionHealth {};
		std::string_view ShieldedAnimset {};
		std::vector<std::string_view> ShieldChunkLooks {};
		bool StartEnabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierPirateShieldPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
