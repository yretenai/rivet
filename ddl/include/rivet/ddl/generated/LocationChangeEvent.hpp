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

#include <rivet/ddl/generated/UDSEventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LocationChangeEvent : UDSEventBase {
		constexpr static std::string_view type_name = "LocationChangeEvent";
		constexpr static rivet::rivet_type_id type_id = 0xf1f9d24;

		constexpr static std::string_view zoneId_type_name = "zoneId";
		constexpr static rivet::rivet_type_id zoneId_type_id = 0xc74cfc3f;
		constexpr static std::string_view mapPosition_type_name = "mapPosition";
		constexpr static rivet::rivet_type_id mapPosition_type_id = 0xef79418e; 

		explicit LocationChangeEvent() = default;
		explicit LocationChangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view zoneId {};
		std::vector<float> mapPosition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LocationChangeEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
