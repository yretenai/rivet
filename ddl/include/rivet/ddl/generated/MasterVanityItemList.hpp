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

#include <rivet/ddl/generated/MasterSkinItemList.hpp> 

namespace rivet::ddl::generated {
	struct VanityCineHelmetTransData;
	struct VanityUIColor;
	struct VanityAccessoryData; 

	struct RIVET_DDL_SHARED MasterVanityItemList : MasterSkinItemList {
		constexpr static std::string_view type_name = "MasterVanityItemList";
		constexpr static rivet::rivet_type_id type_id = 0x43c0f6a0;

		constexpr static std::string_view AccessoryData_type_name = "AccessoryData";
		constexpr static rivet::rivet_type_id AccessoryData_type_id = 0x4afede63;
		constexpr static std::string_view UIColors_type_name = "UIColors";
		constexpr static rivet::rivet_type_id UIColors_type_id = 0xded0aa4d;
		constexpr static std::string_view CineHelmetTransData_type_name = "CineHelmetTransData";
		constexpr static rivet::rivet_type_id CineHelmetTransData_type_id = 0x5624f4ce; 

		explicit MasterVanityItemList() = default;
		explicit MasterVanityItemList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::VanityAccessoryData>> AccessoryData {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VanityUIColor>> UIColors {};
		std::shared_ptr<rivet::ddl::generated::VanityCineHelmetTransData> CineHelmetTransData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterVanityItemList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
