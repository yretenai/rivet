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
	struct RIVET_DDL_SHARED SwappableTAASwapTAAEvent : EventBase {
		constexpr static std::string_view type_name = "SwappableTAASwapTAAEvent";
		constexpr static rivet::rivet_type_id type_id = 0xb46e0070;

		constexpr static std::string_view UseDefaultTaa_type_name = "UseDefaultTaa";
		constexpr static rivet::rivet_type_id UseDefaultTaa_type_id = 0x91f73313; 

		explicit SwappableTAASwapTAAEvent() = default;
		explicit SwappableTAASwapTAAEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool UseDefaultTaa {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwappableTAASwapTAAEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
