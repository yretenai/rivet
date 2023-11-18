// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveGraphBuiltShared.hpp> 

#include <rivet/ddl/generated/ObjectiveGraphBuiltTableEntry.hpp>

namespace rivet::ddl::generated {
	ObjectiveGraphBuiltTableEntry::ObjectiveGraphBuiltTableEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectiveGraphData = serialized->unwrap_into<rivet::ddl::generated::ObjectiveGraphBuiltShared>(ObjectiveGraphData_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveGraphBuiltTableEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveGraphBuiltTableEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveGraphBuiltTableEntry> {
		if (incoming_type_id == ObjectiveGraphBuiltTableEntry::type_id) {
			return std::make_shared<ObjectiveGraphBuiltTableEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
