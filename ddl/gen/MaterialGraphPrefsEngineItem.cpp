// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialGraphPrefsEngineItem.hpp>

namespace rivet::ddl::generated {
	MaterialGraphPrefsEngineItem::MaterialGraphPrefsEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id, {});
		AlphaSim = serialized->get_double(AlphaSim_type_id, 1.000000);
		AlphaSort = serialized->get_bool(AlphaSort_type_id, false);
		AnimateLod = serialized->get_bool(AnimateLod_type_id, false);
		ColorPicker = serialized->get_bool(ColorPicker_type_id, false);
		DoubleSided = serialized->get_bool(DoubleSided_type_id, true);
		PreviewSrgb = serialized->get_bool(PreviewSrgb_type_id, true); 
	}

	[[nodiscard]] auto
	MaterialGraphPrefsEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialGraphPrefsEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialGraphPrefsEngineItem> {
		if (incoming_type_id == MaterialGraphPrefsEngineItem::type_id) {
			return std::make_shared<MaterialGraphPrefsEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
