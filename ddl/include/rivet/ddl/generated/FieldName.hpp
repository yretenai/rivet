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
	struct RIVET_DDL_SHARED FieldName : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FieldName";
		constexpr static rivet::rivet_type_id type_id = 0x9176bbd6;

		constexpr static std::string_view Field_type_name = "Field";
		constexpr static rivet::rivet_type_id Field_type_id = 0x42a68999;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6; 

		explicit FieldName() = default;
		explicit FieldName([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Field {};
		std::string_view Name {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FieldName>;
	};
} // namespace rivet::ddl::generated

// clang-format on
