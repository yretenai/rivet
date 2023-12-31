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
	struct RIVET_DDL_SHARED TestPerson : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TestPerson";
		constexpr static rivet::rivet_type_id type_id = 0x69a0c0ee;

		constexpr static std::string_view FirstName_type_name = "FirstName";
		constexpr static rivet::rivet_type_id FirstName_type_id = 0xa16f3e5a;
		constexpr static std::string_view LastName_type_name = "LastName";
		constexpr static rivet::rivet_type_id LastName_type_id = 0x6b17a7f8;
		constexpr static std::string_view Age_type_name = "Age";
		constexpr static rivet::rivet_type_id Age_type_id = 0x8b65397b;
		constexpr static std::string_view Height_type_name = "Height";
		constexpr static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr static std::string_view EyeColor_type_name = "EyeColor";
		constexpr static rivet::rivet_type_id EyeColor_type_id = 0x47545727;
		constexpr static std::string_view Address_type_name = "Address";
		constexpr static rivet::rivet_type_id Address_type_id = 0xca40cb9;
		constexpr static std::string_view Phone_type_name = "Phone";
		constexpr static rivet::rivet_type_id Phone_type_id = 0x5d1c5b1c;
		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d; 

		explicit TestPerson() = default;
		explicit TestPerson([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FirstName {};
		std::string_view LastName {};
		int32_t Age {};
		int32_t Height {};
		std::string_view EyeColor {};
		std::string_view Address {};
		std::string_view Phone {};
		int32_t Id {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestPerson>;
	};
} // namespace rivet::ddl::generated

// clang-format on
