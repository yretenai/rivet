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

#include <rivet/ddl/generated/UIOptionTypeSettingColor.hpp>
#include <rivet/ddl/generated/enums/x33afe7f4.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIOptionTypeSettingColorCustom : UIOptionTypeSettingColor {
		constexpr const static std::string_view type_name = "UIOptionTypeSettingColorCustom";
		constexpr const static rivet::rivet_type_id type_id = 0x9b44e799;

		constexpr const static std::string_view CustomColorOptionID_type_name = "CustomColorOptionID";
		constexpr const static rivet::rivet_type_id CustomColorOptionID_type_id = 0x2e615811; 

		explicit UIOptionTypeSettingColorCustom() = default;
		explicit UIOptionTypeSettingColorCustom([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x33afe7f4 CustomColorOptionID {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeSettingColorCustom>;
	};
} // namespace rivet::ddl::generated

// clang-format on
