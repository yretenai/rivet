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

	struct RIVET_DDL_SHARED SkinItemDecal : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemDecal";
		constexpr const static rivet::rivet_type_id type_id = 0x6e734e81;

		constexpr const static std::string_view Material_type_name = "Material";
		constexpr const static rivet::rivet_type_id Material_type_id = 0x86bfc8e5;
		constexpr const static std::string_view Scale_type_name = "Scale";
		constexpr const static rivet::rivet_type_id Scale_type_id = 0xf515e945; 

		explicit SkinItemDecal() = default;
		explicit SkinItemDecal([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> Material {};
		float Scale {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemDecal>;
	};
} // namespace rivet::ddl::generated

// clang-format on
