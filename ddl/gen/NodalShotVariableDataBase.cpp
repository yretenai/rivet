// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodalShotActorHandleData.hpp>
#include <rivet/ddl/generated/NodalShotUIntData.hpp> 

#include <rivet/ddl/generated/NodalShotVariableDataBase.hpp>

namespace rivet::ddl::generated {
	NodalShotVariableDataBase::NodalShotVariableDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	NodalShotVariableDataBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodalShotVariableDataBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodalShotVariableDataBase> {
		if (incoming_type_id == NodalShotVariableDataBase::type_id) {
			return std::make_shared<NodalShotVariableDataBase>(serialized);
		}

		auto NodalShotUIntData_ptr = NodalShotUIntData::from_substruct(incoming_type_id, serialized);
		if (NodalShotUIntData_ptr != nullptr) {
			return NodalShotUIntData_ptr;
		}

		auto NodalShotActorHandleData_ptr = NodalShotActorHandleData::from_substruct(incoming_type_id, serialized);
		if (NodalShotActorHandleData_ptr != nullptr) {
			return NodalShotActorHandleData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
