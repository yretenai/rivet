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
	struct RIVET_DDL_SHARED GrindLeanStopEvent : EventBase {
		constexpr static std::string_view type_name = "GrindLeanStopEvent";
		constexpr static rivet::rivet_type_id type_id = 0x4fda6dc4;

		constexpr static std::string_view IsLeft_type_name = "IsLeft";
		constexpr static rivet::rivet_type_id IsLeft_type_id = 0xe522bc03; 

		explicit GrindLeanStopEvent() = default;
		explicit GrindLeanStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsLeft {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindLeanStopEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
