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

#include <rivet/ddl/generated/enums/xaaf755d6.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponEarnedXPData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WeaponEarnedXPData";
		constexpr const static rivet::rivet_type_id type_id = 0x9b4de8f7;

		constexpr const static std::string_view XPSource_type_name = "XPSource";
		constexpr const static rivet::rivet_type_id XPSource_type_id = 0x2aa7da6d;
		constexpr const static std::string_view XPValue_type_name = "XPValue";
		constexpr const static rivet::rivet_type_id XPValue_type_id = 0x551baad0; 

		explicit WeaponEarnedXPData() = default;
		explicit WeaponEarnedXPData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xaaf755d6 XPSource {};
		float XPValue {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponEarnedXPData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
