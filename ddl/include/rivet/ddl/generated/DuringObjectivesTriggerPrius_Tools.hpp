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

#include <rivet/ddl/generated/AbstractTriggerPrius_Tools.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DuringObjectivesTriggerPrius_Tools : AbstractTriggerPrius_Tools {
		constexpr static std::string_view type_name = "DuringObjectivesTriggerPrius_Tools";
		constexpr static rivet::rivet_type_id type_id = 0x7b49f348;

		constexpr static std::string_view StartMissionName_type_name = "StartMissionName";
		constexpr static rivet::rivet_type_id StartMissionName_type_id = 0xfe0f742a;
		constexpr static std::string_view StartObjectiveName_type_name = "StartObjectiveName";
		constexpr static rivet::rivet_type_id StartObjectiveName_type_id = 0xe2320ffa;
		constexpr static std::string_view EndMissionName_type_name = "EndMissionName";
		constexpr static rivet::rivet_type_id EndMissionName_type_id = 0x91d8893e;
		constexpr static std::string_view EndObjectiveName_type_name = "EndObjectiveName";
		constexpr static rivet::rivet_type_id EndObjectiveName_type_id = 0xf9039d9; 

		explicit DuringObjectivesTriggerPrius_Tools() = default;
		explicit DuringObjectivesTriggerPrius_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view StartMissionName {};
		std::string_view StartObjectiveName {};
		std::string_view EndMissionName {};
		std::string_view EndObjectiveName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DuringObjectivesTriggerPrius_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on
