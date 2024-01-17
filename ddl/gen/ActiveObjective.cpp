// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActiveObjective.hpp>

namespace rivet::ddl::generated {
	ActiveObjective::ActiveObjective([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionHash = serialized->get_uint32(MissionHash_type_id, 0);
		ObjectiveHash = serialized->get_uint32(ObjectiveHash_type_id, 0); 
	}

	[[nodiscard]] auto
	ActiveObjective::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActiveObjective::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActiveObjective> {
		if (incoming_type_id == ActiveObjective::type_id) {
			return std::make_shared<ActiveObjective>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
