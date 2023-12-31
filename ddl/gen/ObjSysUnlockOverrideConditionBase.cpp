// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjSysUnlockOverrideConditionGraph.hpp> 

#include <rivet/ddl/generated/ObjSysUnlockOverrideConditionBase.hpp>

namespace rivet::ddl::generated {
	ObjSysUnlockOverrideConditionBase::ObjSysUnlockOverrideConditionBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ObjSysUnlockOverrideConditionBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjSysUnlockOverrideConditionBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysUnlockOverrideConditionBase> {
		if (incoming_type_id == ObjSysUnlockOverrideConditionBase::type_id) {
			return std::make_shared<ObjSysUnlockOverrideConditionBase>(serialized);
		}

		auto ObjSysUnlockOverrideConditionGraph_ptr = ObjSysUnlockOverrideConditionGraph::from_substruct(incoming_type_id, serialized);
		if (ObjSysUnlockOverrideConditionGraph_ptr != nullptr) {
			return ObjSysUnlockOverrideConditionGraph_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
