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
	struct RIVET_DDL_SHARED PSNAuthenticationSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PSNAuthenticationSettings";
		constexpr static rivet::rivet_type_id type_id = 0x2fdef570;

		constexpr static std::string_view Host_type_name = "Host";
		constexpr static rivet::rivet_type_id Host_type_id = 0xffb7d34d;
		constexpr static std::string_view Path_type_name = "Path";
		constexpr static rivet::rivet_type_id Path_type_id = 0x3bc44bbf;
		constexpr static std::string_view Token_type_name = "Token";
		constexpr static rivet::rivet_type_id Token_type_id = 0x46646dfa;
		constexpr static std::string_view ConfigID_type_name = "ConfigID";
		constexpr static rivet::rivet_type_id ConfigID_type_id = 0xc3890163;
		constexpr static std::string_view LinkPlatform_type_name = "LinkPlatform";
		constexpr static rivet::rivet_type_id LinkPlatform_type_id = 0xa843195;
		constexpr static std::string_view Namespace_type_name = "Namespace";
		constexpr static rivet::rivet_type_id Namespace_type_id = 0xb11cf45a; 

		explicit PSNAuthenticationSettings() = default;
		explicit PSNAuthenticationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Host {};
		std::string_view Path {};
		std::string_view Token {};
		std::string_view ConfigID {};
		std::string_view LinkPlatform {};
		std::string_view Namespace {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PSNAuthenticationSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
