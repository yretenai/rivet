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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActivityClueConditionTimeInCurrentAwarenessState : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActivityClueConditionTimeInCurrentAwarenessState";
		constexpr static rivet::rivet_type_id type_id = 0x320f8bed;

		constexpr static std::string_view MinTime_type_name = "MinTime";
		constexpr static rivet::rivet_type_id MinTime_type_id = 0x91fceeba;
		constexpr static std::string_view MaxTime_type_name = "MaxTime";
		constexpr static rivet::rivet_type_id MaxTime_type_id = 0x920f0ef5; 

		explicit ActivityClueConditionTimeInCurrentAwarenessState() = default;
		explicit ActivityClueConditionTimeInCurrentAwarenessState([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinTime {};
		float MaxTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueConditionTimeInCurrentAwarenessState>;
	};
} // namespace rivet::ddl::generated

// clang-format on
