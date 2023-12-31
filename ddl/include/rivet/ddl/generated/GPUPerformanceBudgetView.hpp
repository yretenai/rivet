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
	struct RIVET_DDL_SHARED GPUPerformanceBudgetView : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GPUPerformanceBudgetView";
		constexpr static rivet::rivet_type_id type_id = 0x1112265c;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view All_type_name = "All";
		constexpr static rivet::rivet_type_id All_type_id = 0x114d5814;
		constexpr static std::string_view Unknown_type_name = "Unknown";
		constexpr static rivet::rivet_type_id Unknown_type_id = 0xacccc4ff;
		constexpr static std::string_view Animation_type_name = "Animation";
		constexpr static rivet::rivet_type_id Animation_type_id = 0xfaf1bd0;
		constexpr static std::string_view Audio_type_name = "Audio";
		constexpr static rivet::rivet_type_id Audio_type_id = 0x12efa54;
		constexpr static std::string_view Character_type_name = "Character";
		constexpr static rivet::rivet_type_id Character_type_id = 0x11872f38;
		constexpr static std::string_view Core_type_name = "Core";
		constexpr static rivet::rivet_type_id Core_type_id = 0x5b1d45ff;
		constexpr static std::string_view Creative_type_name = "Creative";
		constexpr static rivet::rivet_type_id Creative_type_id = 0xa13d4894;
		constexpr static std::string_view Design_type_name = "Design";
		constexpr static rivet::rivet_type_id Design_type_id = 0xf3371457;
		constexpr static std::string_view Environment_type_name = "Environment";
		constexpr static rivet::rivet_type_id Environment_type_id = 0xcbfa8ff9;
		constexpr static std::string_view FX_type_name = "FX";
		constexpr static rivet::rivet_type_id FX_type_id = 0x22a62ac5;
		constexpr static std::string_view Gameplay_type_name = "Gameplay";
		constexpr static rivet::rivet_type_id Gameplay_type_id = 0xf2b969f5;
		constexpr static std::string_view Lighting_type_name = "Lighting";
		constexpr static rivet::rivet_type_id Lighting_type_id = 0x3109a803;
		constexpr static std::string_view Rigging_type_name = "Rigging";
		constexpr static rivet::rivet_type_id Rigging_type_id = 0x2ac7054c;
		constexpr static std::string_view UIArt_type_name = "UIArt";
		constexpr static rivet::rivet_type_id UIArt_type_id = 0x33660a72;
		constexpr static std::string_view Shared_type_name = "Shared";
		constexpr static rivet::rivet_type_id Shared_type_id = 0x2df4badc;
		constexpr static std::string_view Trash_type_name = "Trash";
		constexpr static rivet::rivet_type_id Trash_type_id = 0x1c7b778c;
		constexpr static std::string_view Unowned_type_name = "Unowned";
		constexpr static rivet::rivet_type_id Unowned_type_id = 0xedbe89d0;
		constexpr static std::string_view Starvation_type_name = "Starvation";
		constexpr static rivet::rivet_type_id Starvation_type_id = 0x7d26b758; 

		explicit GPUPerformanceBudgetView() = default;
		explicit GPUPerformanceBudgetView([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		float All {};
		float Unknown {};
		float Animation {};
		float Audio {};
		float Character {};
		float Core {};
		float Creative {};
		float Design {};
		float Environment {};
		float FX {};
		float Gameplay {};
		float Lighting {};
		float Rigging {};
		float UIArt {};
		float Shared {};
		float Trash {};
		float Unowned {};
		float Starvation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GPUPerformanceBudgetView>;
	};
} // namespace rivet::ddl::generated

// clang-format on
