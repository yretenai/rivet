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

#include <rivet/ddl/generated/Base.hpp> 

namespace rivet::ddl::generated {
	struct Simple; 

	struct RIVET_DDL_SHARED MoveCosinePrius : Base {
		constexpr static std::string_view type_name = "MoveCosinePrius";
		constexpr static rivet::rivet_type_id type_id = 0xd5ba509f;

		constexpr static std::string_view DynamicStrings_type_name = "DynamicStrings";
		constexpr static rivet::rivet_type_id DynamicStrings_type_id = 0x173c9ba3;
		constexpr static std::string_view DynamicStructs_type_name = "DynamicStructs";
		constexpr static rivet::rivet_type_id DynamicStructs_type_id = 0x64c4a145;
		constexpr static std::string_view StaticStrings_type_name = "StaticStrings";
		constexpr static rivet::rivet_type_id StaticStrings_type_id = 0x36687e7c;
		constexpr static std::string_view String_type_name = "String";
		constexpr static rivet::rivet_type_id String_type_id = 0xa0c6fcce;
		constexpr static std::string_view SingleStruct_type_name = "SingleStruct";
		constexpr static rivet::rivet_type_id SingleStruct_type_id = 0x650c78f5; 

		explicit MoveCosinePrius() = default;
		explicit MoveCosinePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> DynamicStrings {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Simple>> DynamicStructs {};
		std::vector<std::string_view> StaticStrings {};
		std::string_view String {};
		std::shared_ptr<rivet::ddl::generated::Simple> SingleStruct {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoveCosinePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on