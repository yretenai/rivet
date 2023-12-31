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

#include <rivet/ddl/generated/enums/x189ff42f.hpp>
#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct VendorItemData; 

	struct RIVET_DDL_SHARED VendorConfig : ConfigBase {
		constexpr static std::string_view type_name = "VendorConfig";
		constexpr static rivet::rivet_type_id type_id = 0x8cd6fc16;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view TabChangeDelayDuration_type_name = "TabChangeDelayDuration";
		constexpr static rivet::rivet_type_id TabChangeDelayDuration_type_id = 0xe0952624;
		constexpr static std::string_view PurchaseWeaponHoldTime_type_name = "PurchaseWeaponHoldTime";
		constexpr static rivet::rivet_type_id PurchaseWeaponHoldTime_type_id = 0x51b9fd65;
		constexpr static std::string_view UpgradeCellHoldTime_type_name = "UpgradeCellHoldTime";
		constexpr static rivet::rivet_type_id UpgradeCellHoldTime_type_id = 0xd9921e1c;
		constexpr static std::string_view UpgradeCellWidth_type_name = "UpgradeCellWidth";
		constexpr static rivet::rivet_type_id UpgradeCellWidth_type_id = 0x9e910762;
		constexpr static std::string_view UpgradeCellHeight_type_name = "UpgradeCellHeight";
		constexpr static rivet::rivet_type_id UpgradeCellHeight_type_id = 0x2f30bced;
		constexpr static std::string_view UpgradeCellYOffset_type_name = "UpgradeCellYOffset";
		constexpr static rivet::rivet_type_id UpgradeCellYOffset_type_id = 0x97243543;
		constexpr static std::string_view IdleVOTriggerTime_type_name = "IdleVOTriggerTime";
		constexpr static rivet::rivet_type_id IdleVOTriggerTime_type_id = 0xf02bd9d2;
		constexpr static std::string_view ItemDatas_type_name = "ItemDatas";
		constexpr static rivet::rivet_type_id ItemDatas_type_id = 0x193188f2; 

		explicit VendorConfig() = default;
		explicit VendorConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x189ff42f Type {};
		float TabChangeDelayDuration {};
		float PurchaseWeaponHoldTime {};
		float UpgradeCellHoldTime {};
		float UpgradeCellWidth {};
		float UpgradeCellHeight {};
		float UpgradeCellYOffset {};
		float IdleVOTriggerTime {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VendorItemData>> ItemDatas {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
