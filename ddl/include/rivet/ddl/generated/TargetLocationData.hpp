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

#include <rivet/ddl/generated/enums/x457f748b.hpp>
#include <rivet/ddl/generated/enums/x61afe359.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED TargetLocationData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetLocationData";
		constexpr static rivet::rivet_type_id type_id = 0x40824713;

		constexpr static std::string_view LocationType_type_name = "LocationType";
		constexpr static rivet::rivet_type_id LocationType_type_id = 0xc3db52f8;
		constexpr static std::string_view NameHash_type_name = "NameHash";
		constexpr static rivet::rivet_type_id NameHash_type_id = 0xc2f561e2;
		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view BodyPart_type_name = "BodyPart";
		constexpr static rivet::rivet_type_id BodyPart_type_id = 0xdfcd36c5;
		constexpr static std::string_view BodyPartName_type_name = "BodyPartName";
		constexpr static rivet::rivet_type_id BodyPartName_type_id = 0xd618ef74; 

		explicit TargetLocationData() = default;
		explicit TargetLocationData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x61afe359 LocationType {};
		std::string_view NameHash {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Position {};
		rivet::ddl::generated::x457f748b BodyPart {};
		std::string_view BodyPartName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetLocationData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
