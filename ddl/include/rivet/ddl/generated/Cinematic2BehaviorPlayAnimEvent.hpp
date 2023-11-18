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
	struct RIVET_DDL_SHARED Cinematic2BehaviorPlayAnimEvent : EventBase {
		constexpr static std::string_view type_name = "Cinematic2BehaviorPlayAnimEvent";
		constexpr static rivet::rivet_type_id type_id = 0x8b932077;

		constexpr static std::string_view TimeNorm_type_name = "TimeNorm";
		constexpr static rivet::rivet_type_id TimeNorm_type_id = 0x5ae5b57e;
		constexpr static std::string_view Rate_type_name = "Rate";
		constexpr static rivet::rivet_type_id Rate_type_id = 0xef7cff89; 

		explicit Cinematic2BehaviorPlayAnimEvent() = default;
		explicit Cinematic2BehaviorPlayAnimEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TimeNorm {};
		float Rate {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BehaviorPlayAnimEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
