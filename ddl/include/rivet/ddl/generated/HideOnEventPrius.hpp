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
	struct EventBase; 

	struct RIVET_DDL_SHARED HideOnEventPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HideOnEventPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1829565c;

		constexpr static std::string_view StartHidden_type_name = "StartHidden";
		constexpr static rivet::rivet_type_id StartHidden_type_id = 0xfd404b3d;
		constexpr static std::string_view SelfEventsOnly_type_name = "SelfEventsOnly";
		constexpr static rivet::rivet_type_id SelfEventsOnly_type_id = 0x64ce7324;
		constexpr static std::string_view HideEvent_type_name = "HideEvent";
		constexpr static rivet::rivet_type_id HideEvent_type_id = 0x5766372f;
		constexpr static std::string_view MaxHideCount_type_name = "MaxHideCount";
		constexpr static rivet::rivet_type_id MaxHideCount_type_id = 0x75766f76;
		constexpr static std::string_view UnhideEvent_type_name = "UnhideEvent";
		constexpr static rivet::rivet_type_id UnhideEvent_type_id = 0x959296c8;
		constexpr static std::string_view MaxUnhideCount_type_name = "MaxUnhideCount";
		constexpr static rivet::rivet_type_id MaxUnhideCount_type_id = 0x2c5342d; 

		explicit HideOnEventPrius() = default;
		explicit HideOnEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartHidden {};
		bool SelfEventsOnly {};
		std::shared_ptr<rivet::ddl::generated::EventBase> HideEvent {};
		int32_t MaxHideCount {};
		std::shared_ptr<rivet::ddl::generated::EventBase> UnhideEvent {};
		int32_t MaxUnhideCount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HideOnEventPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
