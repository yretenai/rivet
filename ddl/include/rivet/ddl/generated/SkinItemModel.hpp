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

#include <rivet/ddl/generated/enums/xa06d5978.hpp>
#include <rivet/ddl/generated/enums/x5d60d87e.hpp> 

namespace rivet::ddl::generated {
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED SkinItemModel : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemModel";
		constexpr static rivet::rivet_type_id type_id = 0x6dfd1f15;

		constexpr static std::string_view BodyType_type_name = "BodyType";
		constexpr static rivet::rivet_type_id BodyType_type_id = 0x1a1c112a;
		constexpr static std::string_view HeadType_type_name = "HeadType";
		constexpr static rivet::rivet_type_id HeadType_type_id = 0xe711902c;
		constexpr static std::string_view Model_type_name = "Model";
		constexpr static rivet::rivet_type_id Model_type_id = 0xcec6be18;
		constexpr static std::string_view ModelInnerLayer_type_name = "ModelInnerLayer";
		constexpr static rivet::rivet_type_id ModelInnerLayer_type_id = 0xdb07822b; 

		explicit SkinItemModel() = default;
		explicit SkinItemModel([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x5d60d87e BodyType {};
		rivet::ddl::generated::xa06d5978 HeadType {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> Model {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> ModelInnerLayer {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModel>;
	};
} // namespace rivet::ddl::generated

// clang-format on
