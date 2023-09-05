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
	struct EnvelopePointFloat; 

	struct RIVET_DDL_SHARED EnvelopeFloatDef : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "EnvelopeFloatDef";
		constexpr const static rivet::rivet_type_id type_id = 0x9fdf69f9;

		constexpr const static std::string_view CanAddOrRemovePoints_type_name = "CanAddOrRemovePoints";
		constexpr const static rivet::rivet_type_id CanAddOrRemovePoints_type_id = 0xac589b88;
		constexpr const static std::string_view MinX_type_name = "MinX";
		constexpr const static rivet::rivet_type_id MinX_type_id = 0x1505f32;
		constexpr const static std::string_view MinY_type_name = "MinY";
		constexpr const static rivet::rivet_type_id MinY_type_id = 0x76576fa4;
		constexpr const static std::string_view MaxX_type_name = "MaxX";
		constexpr const static rivet::rivet_type_id MaxX_type_id = 0x13dbbb5d;
		constexpr const static std::string_view MaxY_type_name = "MaxY";
		constexpr const static rivet::rivet_type_id MaxY_type_id = 0x64dc8bcb;
		constexpr const static std::string_view VisibleMinX_type_name = "VisibleMinX";
		constexpr const static rivet::rivet_type_id VisibleMinX_type_id = 0x59cf96cd;
		constexpr const static std::string_view VisibleMinY_type_name = "VisibleMinY";
		constexpr const static rivet::rivet_type_id VisibleMinY_type_id = 0x2ec8a65b;
		constexpr const static std::string_view VisibleMaxX_type_name = "VisibleMaxX";
		constexpr const static rivet::rivet_type_id VisibleMaxX_type_id = 0x4b4472a2;
		constexpr const static std::string_view VisibleMaxY_type_name = "VisibleMaxY";
		constexpr const static rivet::rivet_type_id VisibleMaxY_type_id = 0x3c434234;
		constexpr const static std::string_view DefaultPoints_type_name = "DefaultPoints";
		constexpr const static rivet::rivet_type_id DefaultPoints_type_id = 0x7c71d118;
		constexpr const static std::string_view Points_type_name = "Points";
		constexpr const static rivet::rivet_type_id Points_type_id = 0x19c2c04e; 

		explicit EnvelopeFloatDef() = default;
		explicit EnvelopeFloatDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool CanAddOrRemovePoints {};
		float MinX {};
		float MinY {};
		float MaxX {};
		float MaxY {};
		float VisibleMinX {};
		float VisibleMinY {};
		float VisibleMaxX {};
		float VisibleMaxY {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> DefaultPoints {};
		std::vector<std::shared_ptr<rivet::ddl::generated::EnvelopePointFloat>> Points {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvelopeFloatDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
