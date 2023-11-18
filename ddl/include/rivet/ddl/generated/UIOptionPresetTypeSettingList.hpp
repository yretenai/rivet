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

#include <rivet/ddl/generated/UIOptionPresetTypeBase.hpp> 

namespace rivet::ddl::generated {
	struct UIOptionListOptionData; 

	struct RIVET_DDL_SHARED UIOptionPresetTypeSettingList : UIOptionPresetTypeBase {
		constexpr static std::string_view type_name = "UIOptionPresetTypeSettingList";
		constexpr static rivet::rivet_type_id type_id = 0x870718b9;

		constexpr static std::string_view ListOptions_type_name = "ListOptions";
		constexpr static rivet::rivet_type_id ListOptions_type_id = 0xf2b7b76d; 

		explicit UIOptionPresetTypeSettingList() = default;
		explicit UIOptionPresetTypeSettingList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UIOptionListOptionData>> ListOptions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionPresetTypeSettingList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
