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
	struct RIVET_DDL_SHARED HeadVisibilityEvent : EventBase {
		constexpr static std::string_view type_name = "HeadVisibilityEvent";
		constexpr static rivet::rivet_type_id type_id = 0x5189f0ed;

		constexpr static std::string_view Hide_type_name = "Hide";
		constexpr static rivet::rivet_type_id Hide_type_id = 0x94090b9b;
		constexpr static std::string_view FromCine_type_name = "FromCine";
		constexpr static rivet::rivet_type_id FromCine_type_id = 0x6251d0d6; 

		explicit HeadVisibilityEvent() = default;
		explicit HeadVisibilityEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Hide {};
		bool FromCine {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeadVisibilityEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
