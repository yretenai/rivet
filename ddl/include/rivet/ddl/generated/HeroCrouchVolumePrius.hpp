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
	struct RIVET_DDL_SHARED HeroCrouchVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroCrouchVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x4d865ddb;

		constexpr static std::string_view UseProneCamera_type_name = "UseProneCamera";
		constexpr static rivet::rivet_type_id UseProneCamera_type_id = 0xc2a503b6;
		constexpr static std::string_view StandOnExit_type_name = "StandOnExit";
		constexpr static rivet::rivet_type_id StandOnExit_type_id = 0x42ca3b06;
		constexpr static std::string_view ForceWalk_type_name = "ForceWalk";
		constexpr static rivet::rivet_type_id ForceWalk_type_id = 0xeae48f27; 

		explicit HeroCrouchVolumePrius() = default;
		explicit HeroCrouchVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool UseProneCamera {};
		bool StandOnExit {};
		bool ForceWalk {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCrouchVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
