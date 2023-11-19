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
	struct RIVET_DDL_SHARED RCSMessage : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSMessage";
		constexpr static rivet::rivet_type_id type_id = 0x12da7e90;

		constexpr static std::string_view Total_type_name = "Total";
		constexpr static rivet::rivet_type_id Total_type_id = 0xdb7c2d9f;
		constexpr static std::string_view Messages_type_name = "Messages";
		constexpr static rivet::rivet_type_id Messages_type_id = 0x2103a3e6;
		constexpr static std::string_view ClientFilePaths_type_name = "ClientFilePaths";
		constexpr static rivet::rivet_type_id ClientFilePaths_type_id = 0x1f9e96eb; 

		explicit RCSMessage() = default;
		explicit RCSMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Total {};
		std::vector<std::string_view> Messages {};
		std::vector<std::string_view> ClientFilePaths {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSMessage>;
	};
} // namespace rivet::ddl::generated

// clang-format on