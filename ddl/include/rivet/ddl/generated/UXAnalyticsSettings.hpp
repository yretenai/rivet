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

#include <rivet/ddl/generated/enums/x9c7f04c6.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UXAnalyticsSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UXAnalyticsSettings";
		constexpr static rivet::rivet_type_id type_id = 0xaddbf497;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view TitleName_type_name = "TitleName";
		constexpr static rivet::rivet_type_id TitleName_type_id = 0xef896feb;
		constexpr static std::string_view IssuerId_type_name = "IssuerId";
		constexpr static rivet::rivet_type_id IssuerId_type_id = 0x16ae9ed;
		constexpr static std::string_view AppId_type_name = "AppId";
		constexpr static rivet::rivet_type_id AppId_type_id = 0x2f89fce0;
		constexpr static std::string_view ApiKey_type_name = "ApiKey";
		constexpr static rivet::rivet_type_id ApiKey_type_id = 0xbe725f26;
		constexpr static std::string_view SecretKey_type_name = "SecretKey";
		constexpr static rivet::rivet_type_id SecretKey_type_id = 0x3176db72;
		constexpr static std::string_view ServerName_type_name = "ServerName";
		constexpr static rivet::rivet_type_id ServerName_type_id = 0x56859ca1;
		constexpr static std::string_view ConfigServerName_type_name = "ConfigServerName";
		constexpr static rivet::rivet_type_id ConfigServerName_type_id = 0xafacaca8;
		constexpr static std::string_view DebugEventMode_type_name = "DebugEventMode";
		constexpr static rivet::rivet_type_id DebugEventMode_type_id = 0x72cd5082; 

		explicit UXAnalyticsSettings() = default;
		explicit UXAnalyticsSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		std::string_view TitleName {};
		std::string_view IssuerId {};
		std::string_view AppId {};
		std::string_view ApiKey {};
		std::string_view SecretKey {};
		std::string_view ServerName {};
		std::string_view ConfigServerName {};
		rivet::ddl::generated::x9c7f04c6 DebugEventMode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UXAnalyticsSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
