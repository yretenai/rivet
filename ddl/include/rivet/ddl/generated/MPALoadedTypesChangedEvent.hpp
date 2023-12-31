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

#include <rivet/ddl/generated/enums/xb1be5abd.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MPALoadedTypesChangedEvent : EventBase {
		constexpr static std::string_view type_name = "MPALoadedTypesChangedEvent";
		constexpr static rivet::rivet_type_id type_id = 0xa06c9c6e;

		constexpr static std::string_view SystemType_type_name = "SystemType";
		constexpr static rivet::rivet_type_id SystemType_type_id = 0x7709150f; 

		explicit MPALoadedTypesChangedEvent() = default;
		explicit MPALoadedTypesChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xb1be5abd SystemType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MPALoadedTypesChangedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
