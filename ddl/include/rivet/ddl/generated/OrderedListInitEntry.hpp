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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED OrderedListInitEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OrderedListInitEntry";
		constexpr static rivet::rivet_type_id type_id = 0xbf294823;

		constexpr static std::string_view Number_type_name = "Number";
		constexpr static rivet::rivet_type_id Number_type_id = 0xa8e85133;
		constexpr static std::string_view String_type_name = "String";
		constexpr static rivet::rivet_type_id String_type_id = 0xa0c6fcce;
		constexpr static std::string_view Actor_type_name = "Actor";
		constexpr static rivet::rivet_type_id Actor_type_id = 0x5d269a38;
		constexpr static std::string_view Vector_type_name = "Vector";
		constexpr static rivet::rivet_type_id Vector_type_id = 0x2516063c;
		constexpr static std::string_view Boolean_type_name = "Boolean";
		constexpr static rivet::rivet_type_id Boolean_type_id = 0x8b6feb50; 

		explicit OrderedListInitEntry() = default;
		explicit OrderedListInitEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Number {};
		std::string_view String {};
		uint64_t Actor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Vector {};
		bool Boolean {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrderedListInitEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on