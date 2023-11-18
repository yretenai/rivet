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

#include <rivet/ddl/generated/enums/x3126d105.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SkinItemColorOverride : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemColorOverride";
		constexpr static rivet::rivet_type_id type_id = 0x40313556;

		constexpr static std::string_view ColorChannels_type_name = "ColorChannels";
		constexpr static rivet::rivet_type_id ColorChannels_type_id = 0x12c50e26;
		constexpr static std::string_view ColorConstantName_type_name = "ColorConstantName";
		constexpr static rivet::rivet_type_id ColorConstantName_type_id = 0x76c51e4c;
		constexpr static std::string_view R_type_name = "R";
		constexpr static rivet::rivet_type_id R_type_id = 0xbee6a893;
		constexpr static std::string_view G_type_name = "G";
		constexpr static rivet::rivet_type_id G_type_id = 0xd33b4c78;
		constexpr static std::string_view B_type_name = "B";
		constexpr static rivet::rivet_type_id B_type_id = 0xa351b8f7;
		constexpr static std::string_view ColorConfig_type_name = "ColorConfig";
		constexpr static rivet::rivet_type_id ColorConfig_type_id = 0xa50ec5bf;
		constexpr static std::string_view ColorConfigName_type_name = "ColorConfigName";
		constexpr static rivet::rivet_type_id ColorConfigName_type_id = 0x351f7eaa; 

		explicit SkinItemColorOverride() = default;
		explicit SkinItemColorOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x3126d105 ColorChannels {};
		std::string_view ColorConstantName {};
		uint8_t R {};
		uint8_t G {};
		uint8_t B {};
		std::string_view ColorConfig {};
		std::string_view ColorConfigName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemColorOverride>;
	};
} // namespace rivet::ddl::generated

// clang-format on
