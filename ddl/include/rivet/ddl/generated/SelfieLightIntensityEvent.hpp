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
	struct RIVET_DDL_SHARED SelfieLightIntensityEvent : EventBase {
		constexpr static std::string_view type_name = "SelfieLightIntensityEvent";
		constexpr static rivet::rivet_type_id type_id = 0xa5841dfc;

		constexpr static std::string_view Intensity_type_name = "Intensity";
		constexpr static rivet::rivet_type_id Intensity_type_id = 0x6b4f279e; 

		explicit SelfieLightIntensityEvent() = default;
		explicit SelfieLightIntensityEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Intensity {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelfieLightIntensityEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
