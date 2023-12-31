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

#include <rivet/ddl/generated/enums/xf0177ef8.hpp>
#include <rivet/ddl/generated/POIInstanceDataBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED POITypePing : POIInstanceDataBase {
		constexpr static std::string_view type_name = "POITypePing";
		constexpr static rivet::rivet_type_id type_id = 0x53368b52;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799; 

		explicit POITypePing() = default;
		explicit POITypePing([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf0177ef8 Type {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POITypePing>;
	};
} // namespace rivet::ddl::generated

// clang-format on
