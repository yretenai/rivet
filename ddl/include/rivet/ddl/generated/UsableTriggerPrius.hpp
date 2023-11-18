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
	struct RIVET_DDL_SHARED UsableTriggerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UsableTriggerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf9604aef;

		constexpr static std::string_view TriggerGroup_type_name = "TriggerGroup";
		constexpr static rivet::rivet_type_id TriggerGroup_type_id = 0x3c09677;
		constexpr static std::string_view Distance_type_name = "Distance";
		constexpr static rivet::rivet_type_id Distance_type_id = 0xe69327f1;
		constexpr static std::string_view RequireInFront_type_name = "RequireInFront";
		constexpr static rivet::rivet_type_id RequireInFront_type_id = 0xda7d2bb5;
		constexpr static std::string_view RequireFacing_type_name = "RequireFacing";
		constexpr static rivet::rivet_type_id RequireFacing_type_id = 0x89cdda63; 

		explicit UsableTriggerPrius() = default;
		explicit UsableTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t TriggerGroup {};
		float Distance {};
		bool RequireInFront {};
		bool RequireFacing {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UsableTriggerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
