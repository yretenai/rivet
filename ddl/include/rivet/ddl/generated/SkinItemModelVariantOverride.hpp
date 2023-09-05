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
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED SkinItemModelVariantOverride : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemModelVariantOverride";
		constexpr const static rivet::rivet_type_id type_id = 0x930268a4;

		constexpr const static std::string_view ModelVariant_type_name = "ModelVariant";
		constexpr const static rivet::rivet_type_id ModelVariant_type_id = 0x27a47dad;
		constexpr const static std::string_view VariantName_type_name = "VariantName";
		constexpr const static rivet::rivet_type_id VariantName_type_id = 0x1320265a; 

		explicit SkinItemModelVariantOverride() = default;
		explicit SkinItemModelVariantOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> ModelVariant {};
		std::string_view VariantName {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModelVariantOverride>;
	};
} // namespace rivet::ddl::generated

// clang-format on
