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
	struct DDLTransform; 

	struct RIVET_DDL_SHARED StructuredLogStatementTransform : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StructuredLogStatementTransform";
		constexpr static rivet::rivet_type_id type_id = 0x8c4368e6;

		constexpr static std::string_view TestName_type_name = "TestName";
		constexpr static rivet::rivet_type_id TestName_type_id = 0x3006a975;
		constexpr static std::string_view VariableName_type_name = "VariableName";
		constexpr static rivet::rivet_type_id VariableName_type_id = 0x11d33588;
		constexpr static std::string_view Transform_type_name = "Transform";
		constexpr static rivet::rivet_type_id Transform_type_id = 0xf54f1ea1; 

		explicit StructuredLogStatementTransform() = default;
		explicit StructuredLogStatementTransform([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TestName {};
		std::string_view VariableName {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> Transform {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogStatementTransform>;
	};
} // namespace rivet::ddl::generated

// clang-format on
