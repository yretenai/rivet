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

#include <rivet/ddl/generated/enums/xfa020271.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FacingStartEvent : EventBase {
		constexpr static std::string_view type_name = "FacingStartEvent";
		constexpr static rivet::rivet_type_id type_id = 0xc9d4dfc8;

		constexpr static std::string_view Direction_type_name = "Direction";
		constexpr static rivet::rivet_type_id Direction_type_id = 0xbcb74ebf; 

		explicit FacingStartEvent() = default;
		explicit FacingStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xfa020271 Direction {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FacingStartEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
