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

#include <rivet/ddl/generated/enums/x7d682dac.hpp> 

namespace rivet::ddl::generated {
	struct ECMFieldMap; 

	struct RIVET_DDL_SHARED ECMResponse : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ECMResponse";
		constexpr static rivet::rivet_type_id type_id = 0x3fa7347a;

		constexpr static std::string_view GroupIndex_type_name = "GroupIndex";
		constexpr static rivet::rivet_type_id GroupIndex_type_id = 0xeefb3d57;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view FieldMap_type_name = "FieldMap";
		constexpr static rivet::rivet_type_id FieldMap_type_id = 0x739793ab;
		constexpr static std::string_view IsValid_type_name = "IsValid";
		constexpr static rivet::rivet_type_id IsValid_type_id = 0x84fa27f9; 

		explicit ECMResponse() = default;
		explicit ECMResponse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t GroupIndex {};
		std::string_view Name {};
		rivet::ddl::generated::x7d682dac Type {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ECMFieldMap>> FieldMap {};
		bool IsValid {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ECMResponse>;
	};
} // namespace rivet::ddl::generated

// clang-format on