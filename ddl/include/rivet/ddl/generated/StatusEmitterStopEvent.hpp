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
	struct RIVET_DDL_SHARED StatusEmitterStopEvent : EventBase {
		constexpr static std::string_view type_name = "StatusEmitterStopEvent";
		constexpr static rivet::rivet_type_id type_id = 0xc5ee2189;

		constexpr static std::string_view EmitterType_type_name = "EmitterType";
		constexpr static rivet::rivet_type_id EmitterType_type_id = 0xf5bf036d;
		constexpr static std::string_view EmitterName_type_name = "EmitterName";
		constexpr static rivet::rivet_type_id EmitterName_type_id = 0x27422a42; 

		explicit StatusEmitterStopEvent() = default;
		explicit StatusEmitterStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EmitterType {};
		std::string_view EmitterName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterStopEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
