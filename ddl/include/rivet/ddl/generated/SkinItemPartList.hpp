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

#include <rivet/ddl/generated/enums/x576d8e6a.hpp> 

namespace rivet::ddl::generated {
	struct SkinItemPart; 

	struct RIVET_DDL_SHARED SkinItemPartList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemPartList";
		constexpr static rivet::rivet_type_id type_id = 0x9f7b215b;

		constexpr static std::string_view PartType_type_name = "PartType";
		constexpr static rivet::rivet_type_id PartType_type_id = 0x59a27916;
		constexpr static std::string_view PartList_type_name = "PartList";
		constexpr static rivet::rivet_type_id PartList_type_id = 0x91b4d627;
		constexpr static std::string_view SkipPartTypeList_type_name = "SkipPartTypeList";
		constexpr static rivet::rivet_type_id SkipPartTypeList_type_id = 0x9aa89904; 

		explicit SkinItemPartList() = default;
		explicit SkinItemPartList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x576d8e6a PartType {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemPart>> PartList {};
		std::vector<rivet::ddl::generated::x576d8e6a> SkipPartTypeList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemPartList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
