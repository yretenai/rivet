// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SignalInputNodeDef.hpp>
#include <rivet/ddl/generated/InputNodeBooleanDef.hpp>
#include <rivet/ddl/generated/InputNodeActorDef.hpp>
#include <rivet/ddl/generated/InputNodeUIntDef.hpp>
#include <rivet/ddl/generated/InputNodeStringDef.hpp>
#include <rivet/ddl/generated/InputNodeStringHashDef.hpp>
#include <rivet/ddl/generated/InputNodeFloatDef.hpp>
#include <rivet/ddl/generated/InputNodeVec3Def.hpp>
#include <rivet/ddl/generated/EventInitializationInputNodeDef.hpp>
#include <rivet/ddl/generated/InputNodeIntDef.hpp>
#include <rivet/ddl/generated/InputNodeWeaponMacroTypeState.hpp>
#include <rivet/ddl/generated/InputNodeSignalDef.hpp>
#include <rivet/ddl/generated/OutputNodeBaseDef.hpp> 

#include <rivet/ddl/generated/InputNodeBaseDef.hpp>

namespace rivet::ddl::generated {
	InputNodeBaseDef::InputNodeBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		OldName = serialized->get_string(OldName_type_id, {}); 
	}

	[[nodiscard]] auto
	InputNodeBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputNodeBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputNodeBaseDef> {
		if (incoming_type_id == InputNodeBaseDef::type_id) {
			return std::make_shared<InputNodeBaseDef>(serialized);
		}

		auto OutputNodeBaseDef_ptr = OutputNodeBaseDef::from_substruct(incoming_type_id, serialized);
		if (OutputNodeBaseDef_ptr != nullptr) {
			return OutputNodeBaseDef_ptr;
		}

		auto InputNodeIntDef_ptr = InputNodeIntDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeIntDef_ptr != nullptr) {
			return InputNodeIntDef_ptr;
		}

		auto InputNodeSignalDef_ptr = InputNodeSignalDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeSignalDef_ptr != nullptr) {
			return InputNodeSignalDef_ptr;
		}

		auto EventInitializationInputNodeDef_ptr = EventInitializationInputNodeDef::from_substruct(incoming_type_id, serialized);
		if (EventInitializationInputNodeDef_ptr != nullptr) {
			return EventInitializationInputNodeDef_ptr;
		}

		auto InputNodeFloatDef_ptr = InputNodeFloatDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeFloatDef_ptr != nullptr) {
			return InputNodeFloatDef_ptr;
		}

		auto InputNodeVec3Def_ptr = InputNodeVec3Def::from_substruct(incoming_type_id, serialized);
		if (InputNodeVec3Def_ptr != nullptr) {
			return InputNodeVec3Def_ptr;
		}

		auto InputNodeStringDef_ptr = InputNodeStringDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeStringDef_ptr != nullptr) {
			return InputNodeStringDef_ptr;
		}

		auto InputNodeStringHashDef_ptr = InputNodeStringHashDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeStringHashDef_ptr != nullptr) {
			return InputNodeStringHashDef_ptr;
		}

		auto InputNodeUIntDef_ptr = InputNodeUIntDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeUIntDef_ptr != nullptr) {
			return InputNodeUIntDef_ptr;
		}

		auto InputNodeActorDef_ptr = InputNodeActorDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeActorDef_ptr != nullptr) {
			return InputNodeActorDef_ptr;
		}

		auto InputNodeBooleanDef_ptr = InputNodeBooleanDef::from_substruct(incoming_type_id, serialized);
		if (InputNodeBooleanDef_ptr != nullptr) {
			return InputNodeBooleanDef_ptr;
		}

		auto InputNodeWeaponMacroTypeState_ptr = InputNodeWeaponMacroTypeState::from_substruct(incoming_type_id, serialized);
		if (InputNodeWeaponMacroTypeState_ptr != nullptr) {
			return InputNodeWeaponMacroTypeState_ptr;
		}

		auto SignalInputNodeDef_ptr = SignalInputNodeDef::from_substruct(incoming_type_id, serialized);
		if (SignalInputNodeDef_ptr != nullptr) {
			return SignalInputNodeDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
