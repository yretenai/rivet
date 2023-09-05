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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED WeaponPickupAttachment : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WeaponPickupAttachment";
		constexpr const static rivet::rivet_type_id type_id = 0x80f6608a;

		constexpr const static std::string_view Locator_type_name = "Locator";
		constexpr const static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr const static std::string_view OffsetFromLocator_type_name = "OffsetFromLocator";
		constexpr const static rivet::rivet_type_id OffsetFromLocator_type_id = 0xb1c76511;
		constexpr const static std::string_view PickupSpacing_type_name = "PickupSpacing";
		constexpr const static rivet::rivet_type_id PickupSpacing_type_id = 0x32272c38; 

		explicit WeaponPickupAttachment() = default;
		explicit WeaponPickupAttachment([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Locator {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> OffsetFromLocator {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> PickupSpacing {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponPickupAttachment>;
	};
} // namespace rivet::ddl::generated

// clang-format on
