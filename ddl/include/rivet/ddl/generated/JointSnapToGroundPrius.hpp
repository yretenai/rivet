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
	struct RIVET_DDL_SHARED JointSnapToGroundPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "JointSnapToGroundPrius";
		constexpr static rivet::rivet_type_id type_id = 0x16439c26;

		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr static std::string_view OffsetsAreLocal_type_name = "OffsetsAreLocal";
		constexpr static rivet::rivet_type_id OffsetsAreLocal_type_id = 0x1690eaed;
		constexpr static std::string_view StartCheckYOffset_type_name = "StartCheckYOffset";
		constexpr static rivet::rivet_type_id StartCheckYOffset_type_id = 0x1d5a5f07;
		constexpr static std::string_view EndCheckYOffset_type_name = "EndCheckYOffset";
		constexpr static rivet::rivet_type_id EndCheckYOffset_type_id = 0x7ef5c87; 

		explicit JointSnapToGroundPrius() = default;
		explicit JointSnapToGroundPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Locator {};
		bool OffsetsAreLocal {};
		float StartCheckYOffset {};
		float EndCheckYOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JointSnapToGroundPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
