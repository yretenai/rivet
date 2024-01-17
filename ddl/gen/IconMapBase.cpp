// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapSteamBinding.hpp>
#include <rivet/ddl/generated/IconMapMultiChild.hpp>
#include <rivet/ddl/generated/IconMapHeroControl.hpp>
#include <rivet/ddl/generated/IconMapMkbBinding.hpp>
#include <rivet/ddl/generated/IconMapPadSpecific.hpp>
#include <rivet/ddl/generated/IconMapStickSwap.hpp>
#include <rivet/ddl/generated/IconMapAccessibilityControl.hpp>
#include <rivet/ddl/generated/IconMapSingle.hpp>
#include <rivet/ddl/generated/IconMapXOSwap.hpp>
#include <rivet/ddl/generated/IconMapMulti.hpp>
#include <rivet/ddl/generated/IconMapPadButton.hpp> 

#include <rivet/ddl/generated/IconMapBase.hpp>

namespace rivet::ddl::generated {
	IconMapBase::IconMapBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxHeight = serialized->get_int32(MaxHeight_type_id, 0); 
	}

	[[nodiscard]] auto
	IconMapBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapBase> {
		if (incoming_type_id == IconMapBase::type_id) {
			return std::make_shared<IconMapBase>(serialized);
		}

		auto IconMapPadButton_ptr = IconMapPadButton::from_substruct(incoming_type_id, serialized);
		if (IconMapPadButton_ptr != nullptr) {
			return IconMapPadButton_ptr;
		}

		auto IconMapXOSwap_ptr = IconMapXOSwap::from_substruct(incoming_type_id, serialized);
		if (IconMapXOSwap_ptr != nullptr) {
			return IconMapXOSwap_ptr;
		}

		auto IconMapMulti_ptr = IconMapMulti::from_substruct(incoming_type_id, serialized);
		if (IconMapMulti_ptr != nullptr) {
			return IconMapMulti_ptr;
		}

		auto IconMapSingle_ptr = IconMapSingle::from_substruct(incoming_type_id, serialized);
		if (IconMapSingle_ptr != nullptr) {
			return IconMapSingle_ptr;
		}

		auto IconMapAccessibilityControl_ptr = IconMapAccessibilityControl::from_substruct(incoming_type_id, serialized);
		if (IconMapAccessibilityControl_ptr != nullptr) {
			return IconMapAccessibilityControl_ptr;
		}

		auto IconMapStickSwap_ptr = IconMapStickSwap::from_substruct(incoming_type_id, serialized);
		if (IconMapStickSwap_ptr != nullptr) {
			return IconMapStickSwap_ptr;
		}

		auto IconMapPadSpecific_ptr = IconMapPadSpecific::from_substruct(incoming_type_id, serialized);
		if (IconMapPadSpecific_ptr != nullptr) {
			return IconMapPadSpecific_ptr;
		}

		auto IconMapMkbBinding_ptr = IconMapMkbBinding::from_substruct(incoming_type_id, serialized);
		if (IconMapMkbBinding_ptr != nullptr) {
			return IconMapMkbBinding_ptr;
		}

		auto IconMapMultiChild_ptr = IconMapMultiChild::from_substruct(incoming_type_id, serialized);
		if (IconMapMultiChild_ptr != nullptr) {
			return IconMapMultiChild_ptr;
		}

		auto IconMapHeroControl_ptr = IconMapHeroControl::from_substruct(incoming_type_id, serialized);
		if (IconMapHeroControl_ptr != nullptr) {
			return IconMapHeroControl_ptr;
		}

		auto IconMapSteamBinding_ptr = IconMapSteamBinding::from_substruct(incoming_type_id, serialized);
		if (IconMapSteamBinding_ptr != nullptr) {
			return IconMapSteamBinding_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
