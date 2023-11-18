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

#include <rivet/ddl/generated/enums/x29c933e2.hpp> 

namespace rivet::ddl::generated {
	struct WwiseTrigger; 

	struct RIVET_DDL_SHARED UI_Cinematic2AudioGameSyncActionDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_Cinematic2AudioGameSyncActionDef";
		constexpr static rivet::rivet_type_id type_id = 0x4a608864;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view DurationType_type_name = "DurationType";
		constexpr static rivet::rivet_type_id DurationType_type_id = 0x41e2529f;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view Trigger_type_name = "Trigger";
		constexpr static rivet::rivet_type_id Trigger_type_id = 0x1b816c65; 

		explicit UI_Cinematic2AudioGameSyncActionDef() = default;
		explicit UI_Cinematic2AudioGameSyncActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		float Time {};
		rivet::ddl::generated::x29c933e2 DurationType {};
		float Duration {};
		std::shared_ptr<rivet::ddl::generated::WwiseTrigger> Trigger {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_Cinematic2AudioGameSyncActionDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
