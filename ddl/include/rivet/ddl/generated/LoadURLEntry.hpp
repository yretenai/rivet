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
	struct RIVET_DDL_SHARED LoadURLEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LoadURLEntry";
		constexpr static rivet::rivet_type_id type_id = 0x9451883c;

		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view URL_type_name = "URL";
		constexpr static rivet::rivet_type_id URL_type_id = 0x70c9680d;
		constexpr static std::string_view FontFolderPath_type_name = "FontFolderPath";
		constexpr static rivet::rivet_type_id FontFolderPath_type_id = 0xe82def0b;
		constexpr static std::string_view DefaultFontName_type_name = "DefaultFontName";
		constexpr static rivet::rivet_type_id DefaultFontName_type_id = 0x93f16ebb; 

		explicit LoadURLEntry() = default;
		explicit LoadURLEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DisplayName {};
		std::string_view URL {};
		std::string_view FontFolderPath {};
		std::string_view DefaultFontName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadURLEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
