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
	struct UBPImage; 

	struct RIVET_DDL_SHARED UBPLocalizedImageHelper : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UBPLocalizedImageHelper";
		constexpr static rivet::rivet_type_id type_id = 0xe4e4ffd4;

		constexpr static std::string_view image_elements_type_name = "image_elements";
		constexpr static rivet::rivet_type_id image_elements_type_id = 0x54860089; 

		explicit UBPLocalizedImageHelper() = default;
		explicit UBPLocalizedImageHelper([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UBPImage>> image_elements {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UBPLocalizedImageHelper>;
	};
} // namespace rivet::ddl::generated

// clang-format on