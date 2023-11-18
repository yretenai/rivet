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
	struct RIVET_DDL_SHARED AnimLookChangeEvent : EventBase {
		constexpr static std::string_view type_name = "AnimLookChangeEvent";
		constexpr static rivet::rivet_type_id type_id = 0x2127e69b;

		constexpr static std::string_view DisableLooks_type_name = "DisableLooks";
		constexpr static rivet::rivet_type_id DisableLooks_type_id = 0x9ad9f90d;
		constexpr static std::string_view EnableLooks_type_name = "EnableLooks";
		constexpr static rivet::rivet_type_id EnableLooks_type_id = 0x37c7283d; 

		explicit AnimLookChangeEvent() = default;
		explicit AnimLookChangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> DisableLooks {};
		std::vector<std::string_view> EnableLooks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimLookChangeEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
