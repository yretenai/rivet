// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AccessibilityHighlightMaterialConstant.hpp>
#include <rivet/ddl/generated/CrateAccessibilityHighlightComponentPrius.hpp>
#include <rivet/ddl/generated/GameAccessibilityHighlightComponentPrius.hpp>
#include <rivet/ddl/generated/TitleScreenAccessibilityHighlightComponentPrius.hpp> 

#include <rivet/ddl/generated/AccessibilityHighlightComponentPrius.hpp>

namespace rivet::ddl::generated {
	AccessibilityHighlightComponentPrius::AccessibilityHighlightComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf2109875>(Type_type_id, rivet::ddl::generated::xf2109875_values);
		RemoveHighlightOnDeath = serialized->get_bool(RemoveHighlightOnDeath_type_id);
		DisableHighlights = serialized->get_bool(DisableHighlights_type_id);
		ToggleHair = serialized->get_bool(ToggleHair_type_id);
		SkipLookToggleOnOrbis = serialized->get_bool(SkipLookToggleOnOrbis_type_id);
		ForceKeepOnNPCBot = serialized->get_bool(ForceKeepOnNPCBot_type_id);
		LookEnableList = serialized->get_strings(LookEnableList_type_id);
		LookDisableList = serialized->get_strings(LookDisableList_type_id);
		SkipMaterialList = serialized->get_strings(SkipMaterialList_type_id);
		MaterialConstantList = serialized->unwrap_into_many<rivet::ddl::generated::AccessibilityHighlightMaterialConstant>(MaterialConstantList_type_id); 
	}

	auto
	AccessibilityHighlightComponentPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AccessibilityHighlightComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityHighlightComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityHighlightComponentPrius> {
		if (incoming_type_id == AccessibilityHighlightComponentPrius::type_id) {
			return std::make_shared<AccessibilityHighlightComponentPrius>(serialized);
		}

		auto CrateAccessibilityHighlightComponentPrius_ptr = CrateAccessibilityHighlightComponentPrius::from_substruct(incoming_type_id, serialized);
		if (CrateAccessibilityHighlightComponentPrius_ptr != nullptr) {
			return CrateAccessibilityHighlightComponentPrius_ptr;
		}

		auto TitleScreenAccessibilityHighlightComponentPrius_ptr = TitleScreenAccessibilityHighlightComponentPrius::from_substruct(incoming_type_id, serialized);
		if (TitleScreenAccessibilityHighlightComponentPrius_ptr != nullptr) {
			return TitleScreenAccessibilityHighlightComponentPrius_ptr;
		}

		auto GameAccessibilityHighlightComponentPrius_ptr = GameAccessibilityHighlightComponentPrius::from_substruct(incoming_type_id, serialized);
		if (GameAccessibilityHighlightComponentPrius_ptr != nullptr) {
			return GameAccessibilityHighlightComponentPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
