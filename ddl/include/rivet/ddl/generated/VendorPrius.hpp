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

#include <rivet/ddl/generated/enums/xf88150a5.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VendorPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VendorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x19712944;

		constexpr static std::string_view VendorConfigs_type_name = "VendorConfigs";
		constexpr static rivet::rivet_type_id VendorConfigs_type_id = 0x3d54432b;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view AllowUpgrades_type_name = "AllowUpgrades";
		constexpr static rivet::rivet_type_id AllowUpgrades_type_id = 0x5a5f9e61;
		constexpr static std::string_view TutorialType_type_name = "TutorialType";
		constexpr static rivet::rivet_type_id TutorialType_type_id = 0xe832f21;
		constexpr static std::string_view PurchaseVolumeActor_type_name = "PurchaseVolumeActor";
		constexpr static rivet::rivet_type_id PurchaseVolumeActor_type_id = 0x8c4c71fb;
		constexpr static std::string_view PurchaseCameraActor_type_name = "PurchaseCameraActor";
		constexpr static rivet::rivet_type_id PurchaseCameraActor_type_id = 0x2ce3a298; 

		explicit VendorPrius() = default;
		explicit VendorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> VendorConfigs {};
		bool StartActive {};
		bool AllowUpgrades {};
		rivet::ddl::generated::xf88150a5 TutorialType {};
		uint64_t PurchaseVolumeActor {};
		uint64_t PurchaseCameraActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
