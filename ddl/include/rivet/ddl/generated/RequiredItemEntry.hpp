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
	struct RIVET_DDL_SHARED RequiredItemEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RequiredItemEntry";
		constexpr static rivet::rivet_type_id type_id = 0x1a64706;

		constexpr static std::string_view ItemConfig_type_name = "ItemConfig";
		constexpr static rivet::rivet_type_id ItemConfig_type_id = 0xa88f833f;
		constexpr static std::string_view RemoveWhenUnlocked_type_name = "RemoveWhenUnlocked";
		constexpr static rivet::rivet_type_id RemoveWhenUnlocked_type_id = 0x37a80ee3; 

		explicit RequiredItemEntry() = default;
		explicit RequiredItemEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ItemConfig {};
		bool RemoveWhenUnlocked {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RequiredItemEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
