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

#include <rivet/ddl/generated/enums/xf4ca865e.hpp>
#include <rivet/ddl/generated/enums/x483aa079.hpp>
#include <rivet/ddl/generated/enums/x7b87880c.hpp>
#include <rivet/ddl/generated/IconMapBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED IconMapSteamBinding : IconMapBase {
		constexpr static std::string_view type_name = "IconMapSteamBinding";
		constexpr static rivet::rivet_type_id type_id = 0xf721b745;

		constexpr static std::string_view Button_type_name = "Button";
		constexpr static rivet::rivet_type_id Button_type_id = 0x47ee25a;
		constexpr static std::string_view ActionSet_type_name = "ActionSet";
		constexpr static rivet::rivet_type_id ActionSet_type_id = 0xa7d7c935;
		constexpr static std::string_view AnalogDirection_type_name = "AnalogDirection";
		constexpr static rivet::rivet_type_id AnalogDirection_type_id = 0x3c238fd3; 

		explicit IconMapSteamBinding() = default;
		explicit IconMapSteamBinding([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7b87880c Button {};
		rivet::ddl::generated::xf4ca865e ActionSet {};
		rivet::ddl::generated::x483aa079 AnalogDirection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapSteamBinding>;
	};
} // namespace rivet::ddl::generated

// clang-format on
