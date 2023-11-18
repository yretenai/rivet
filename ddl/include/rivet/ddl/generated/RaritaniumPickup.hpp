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
	struct RIVET_DDL_SHARED RaritaniumPickup : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RaritaniumPickup";
		constexpr static rivet::rivet_type_id type_id = 0xfc0ec04c;

		constexpr static std::string_view Actor_type_name = "Actor";
		constexpr static rivet::rivet_type_id Actor_type_id = 0x5d269a38;
		constexpr static std::string_view Chance_type_name = "Chance";
		constexpr static rivet::rivet_type_id Chance_type_id = 0x1a437543; 

		explicit RaritaniumPickup() = default;
		explicit RaritaniumPickup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Actor {};
		float Chance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RaritaniumPickup>;
	};
} // namespace rivet::ddl::generated

// clang-format on
