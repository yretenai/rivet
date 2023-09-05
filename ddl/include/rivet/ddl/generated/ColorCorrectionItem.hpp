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

#include <rivet/ddl/generated/enums/xa7ef66f3.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ColorCorrectionItem : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ColorCorrectionItem";
		constexpr const static rivet::rivet_type_id type_id = 0x342a14c4;

		constexpr const static std::string_view Type_type_name = "Type";
		constexpr const static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr const static std::string_view ColorCorrectionTexture_type_name = "ColorCorrectionTexture";
		constexpr const static rivet::rivet_type_id ColorCorrectionTexture_type_id = 0x6aba6325; 

		explicit ColorCorrectionItem() = default;
		explicit ColorCorrectionItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xa7ef66f3 Type {};
		std::string_view ColorCorrectionTexture {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorCorrectionItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
