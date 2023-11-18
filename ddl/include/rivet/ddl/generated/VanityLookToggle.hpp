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
	struct RIVET_DDL_SHARED VanityLookToggle : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VanityLookToggle";
		constexpr static rivet::rivet_type_id type_id = 0xa22022cc;

		constexpr static std::string_view Look_type_name = "Look";
		constexpr static rivet::rivet_type_id Look_type_id = 0x1baa14b2;
		constexpr static std::string_view Toggle_type_name = "Toggle";
		constexpr static rivet::rivet_type_id Toggle_type_id = 0x1b92e3ec; 

		explicit VanityLookToggle() = default;
		explicit VanityLookToggle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Look {};
		bool Toggle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityLookToggle>;
	};
} // namespace rivet::ddl::generated

// clang-format on
