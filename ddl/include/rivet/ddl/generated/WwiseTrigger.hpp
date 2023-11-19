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
	struct RIVET_DDL_SHARED WwiseTrigger : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseTrigger";
		constexpr static rivet::rivet_type_id type_id = 0xbfd462e;

		constexpr static std::string_view TriggerName_type_name = "TriggerName";
		constexpr static rivet::rivet_type_id TriggerName_type_id = 0x3a9d5bb7;
		constexpr static std::string_view TriggerId_type_name = "TriggerId";
		constexpr static rivet::rivet_type_id TriggerId_type_id = 0x37eaf81d; 

		explicit WwiseTrigger() = default;
		explicit WwiseTrigger([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TriggerName {};
		uint32_t TriggerId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseTrigger>;
	};
} // namespace rivet::ddl::generated

// clang-format on