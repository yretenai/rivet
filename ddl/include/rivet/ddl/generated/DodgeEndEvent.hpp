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
	struct RIVET_DDL_SHARED DodgeEndEvent : EventBase {
		constexpr static std::string_view type_name = "DodgeEndEvent";
		constexpr static rivet::rivet_type_id type_id = 0x749fbd3d;

		constexpr static std::string_view IsPhaseDash_type_name = "IsPhaseDash";
		constexpr static rivet::rivet_type_id IsPhaseDash_type_id = 0x4a5de148; 

		explicit DodgeEndEvent() = default;
		explicit DodgeEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsPhaseDash {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DodgeEndEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
