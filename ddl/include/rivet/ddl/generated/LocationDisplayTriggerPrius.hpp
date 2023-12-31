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
	struct RIVET_DDL_SHARED LocationDisplayTriggerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LocationDisplayTriggerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1db7b055;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view AllowShipTrigger_type_name = "AllowShipTrigger";
		constexpr static rivet::rivet_type_id AllowShipTrigger_type_id = 0xd56e89e1;
		constexpr static std::string_view AllowCineTrigger_type_name = "AllowCineTrigger";
		constexpr static rivet::rivet_type_id AllowCineTrigger_type_id = 0xc4607492;
		constexpr static std::string_view SaveGaveText_type_name = "SaveGaveText";
		constexpr static rivet::rivet_type_id SaveGaveText_type_id = 0xafbb9886;
		constexpr static std::string_view LocationTag_type_name = "LocationTag";
		constexpr static rivet::rivet_type_id LocationTag_type_id = 0xd6144406;
		constexpr static std::string_view TextDelay_type_name = "TextDelay";
		constexpr static rivet::rivet_type_id TextDelay_type_id = 0xabfd3ebd;
		constexpr static std::string_view TextDuration_type_name = "TextDuration";
		constexpr static rivet::rivet_type_id TextDuration_type_id = 0xec4e1454; 

		explicit LocationDisplayTriggerPrius() = default;
		explicit LocationDisplayTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		bool AllowShipTrigger {};
		bool AllowCineTrigger {};
		bool SaveGaveText {};
		std::string_view LocationTag {};
		float TextDelay {};
		float TextDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LocationDisplayTriggerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
