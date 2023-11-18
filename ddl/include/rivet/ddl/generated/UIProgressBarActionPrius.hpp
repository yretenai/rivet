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

#include <rivet/ddl/generated/enums/x8a20ee54.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIProgressBarActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIProgressBarActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x6b06581a;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view BarType_type_name = "BarType";
		constexpr static rivet::rivet_type_id BarType_type_id = 0xcdbda9d1;
		constexpr static std::string_view IsFriend_type_name = "IsFriend";
		constexpr static rivet::rivet_type_id IsFriend_type_id = 0x6e871bcb;
		constexpr static std::string_view Text_type_name = "Text";
		constexpr static rivet::rivet_type_id Text_type_id = 0xb1b6777;
		constexpr static std::string_view StartPercent_type_name = "StartPercent";
		constexpr static rivet::rivet_type_id StartPercent_type_id = 0x5e79f136;
		constexpr static std::string_view EndPercent_type_name = "EndPercent";
		constexpr static rivet::rivet_type_id EndPercent_type_id = 0xfc156bd7; 

		explicit UIProgressBarActionPrius() = default;
		explicit UIProgressBarActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x8a20ee54 BarType {};
		bool IsFriend {};
		std::string_view Text {};
		float StartPercent {};
		float EndPercent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIProgressBarActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
