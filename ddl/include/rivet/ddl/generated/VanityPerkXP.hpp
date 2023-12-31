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

#include <rivet/ddl/generated/VanityPerkBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VanityPerkXP : VanityPerkBase {
		constexpr static std::string_view type_name = "VanityPerkXP";
		constexpr static rivet::rivet_type_id type_id = 0x4d93a019;

		constexpr static std::string_view XPMultSet_type_name = "XPMultSet";
		constexpr static rivet::rivet_type_id XPMultSet_type_id = 0x9d1d86cb;
		constexpr static std::string_view XPMultPiece_type_name = "XPMultPiece";
		constexpr static rivet::rivet_type_id XPMultPiece_type_id = 0x4f4f1411; 

		explicit VanityPerkXP() = default;
		explicit VanityPerkXP([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float XPMultSet {};
		float XPMultPiece {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityPerkXP>;
	};
} // namespace rivet::ddl::generated

// clang-format on
