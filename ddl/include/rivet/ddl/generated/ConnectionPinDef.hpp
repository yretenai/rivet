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

#include <rivet/ddl/generated/NodeGraphItemDef.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector2; 

	struct RIVET_DDL_SHARED ConnectionPinDef : NodeGraphItemDef {
		constexpr static std::string_view type_name = "ConnectionPinDef";
		constexpr static rivet::rivet_type_id type_id = 0x34a59c22;

		constexpr static std::string_view Point_type_name = "Point";
		constexpr static rivet::rivet_type_id Point_type_id = 0xaef63fe5; 

		explicit ConnectionPinDef() = default;
		explicit ConnectionPinDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector2> Point {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConnectionPinDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on