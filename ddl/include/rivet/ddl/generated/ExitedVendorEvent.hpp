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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ExitedVendorEvent : EventBase {
		constexpr static std::string_view type_name = "ExitedVendorEvent";
		constexpr static rivet::rivet_type_id type_id = 0x346d7d1b;

		constexpr static std::string_view PurchasedItem_type_name = "PurchasedItem";
		constexpr static rivet::rivet_type_id PurchasedItem_type_id = 0x26122941;
		constexpr static std::string_view AnimName_type_name = "AnimName";
		constexpr static rivet::rivet_type_id AnimName_type_id = 0xc9e716ce; 

		explicit ExitedVendorEvent() = default;
		explicit ExitedVendorEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PurchasedItem {};
		std::string_view AnimName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExitedVendorEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
