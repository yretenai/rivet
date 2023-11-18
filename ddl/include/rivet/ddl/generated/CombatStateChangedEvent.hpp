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

#include <rivet/ddl/generated/enums/xba3c7381.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CombatStateChangedEvent : EventBase {
		constexpr static std::string_view type_name = "CombatStateChangedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x52a7a47e;

		constexpr static std::string_view PreviousState_type_name = "PreviousState";
		constexpr static rivet::rivet_type_id PreviousState_type_id = 0xf6c107b4;
		constexpr static std::string_view NextState_type_name = "NextState";
		constexpr static rivet::rivet_type_id NextState_type_id = 0x831aa432; 

		explicit CombatStateChangedEvent() = default;
		explicit CombatStateChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xba3c7381 PreviousState {};
		rivet::ddl::generated::xba3c7381 NextState {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CombatStateChangedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
