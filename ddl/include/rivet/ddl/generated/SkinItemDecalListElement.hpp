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

#include <rivet/ddl/generated/enums/x7ecfc969.hpp> 

namespace rivet::ddl::generated {
	struct SkinItemDecal; 

	struct RIVET_DDL_SHARED SkinItemDecalListElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemDecalListElement";
		constexpr static rivet::rivet_type_id type_id = 0x3956ece6;

		constexpr static std::string_view DebugName_type_name = "DebugName";
		constexpr static rivet::rivet_type_id DebugName_type_id = 0x4ef19112;
		constexpr static std::string_view NameLocTag_type_name = "NameLocTag";
		constexpr static rivet::rivet_type_id NameLocTag_type_id = 0xa0041b54;
		constexpr static std::string_view Available_type_name = "Available";
		constexpr static rivet::rivet_type_id Available_type_id = 0x27723b89;
		constexpr static std::string_view Decal_type_name = "Decal";
		constexpr static rivet::rivet_type_id Decal_type_id = 0xcd48ef8c; 

		explicit SkinItemDecalListElement() = default;
		explicit SkinItemDecalListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DebugName {};
		std::string_view NameLocTag {};
		rivet::ddl::generated::x7ecfc969 Available {};
		std::shared_ptr<rivet::ddl::generated::SkinItemDecal> Decal {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemDecalListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
