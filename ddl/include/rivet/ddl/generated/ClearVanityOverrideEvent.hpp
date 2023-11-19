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
	struct RIVET_DDL_SHARED ClearVanityOverrideEvent : EventBase {
		constexpr static std::string_view type_name = "ClearVanityOverrideEvent";
		constexpr static rivet::rivet_type_id type_id = 0x79a11348;

		constexpr static std::string_view ClearHelmet_type_name = "ClearHelmet";
		constexpr static rivet::rivet_type_id ClearHelmet_type_id = 0x59301b0f;
		constexpr static std::string_view ClearHead_type_name = "ClearHead";
		constexpr static rivet::rivet_type_id ClearHead_type_id = 0x39ef099b;
		constexpr static std::string_view ClearTorso_type_name = "ClearTorso";
		constexpr static rivet::rivet_type_id ClearTorso_type_id = 0x6ba7da54;
		constexpr static std::string_view ClearLeftGlove_type_name = "ClearLeftGlove";
		constexpr static rivet::rivet_type_id ClearLeftGlove_type_id = 0x706c25ed;
		constexpr static std::string_view ClearRightGlove_type_name = "ClearRightGlove";
		constexpr static rivet::rivet_type_id ClearRightGlove_type_id = 0x4c6cec9;
		constexpr static std::string_view ClearLegs_type_name = "ClearLegs";
		constexpr static rivet::rivet_type_id ClearLegs_type_id = 0x6304bc8d;
		constexpr static std::string_view ClearBoots_type_name = "ClearBoots";
		constexpr static rivet::rivet_type_id ClearBoots_type_id = 0xcbb942dd; 

		explicit ClearVanityOverrideEvent() = default;
		explicit ClearVanityOverrideEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ClearHelmet {};
		bool ClearHead {};
		bool ClearTorso {};
		bool ClearLeftGlove {};
		bool ClearRightGlove {};
		bool ClearLegs {};
		bool ClearBoots {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClearVanityOverrideEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on