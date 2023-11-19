// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UsableTriggerPrius.hpp>

namespace rivet::ddl::generated {
	UsableTriggerPrius::UsableTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TriggerGroup = serialized->get_uint64(TriggerGroup_type_id);
		Distance = serialized->get_float(Distance_type_id);
		RequireInFront = serialized->get_bool(RequireInFront_type_id);
		RequireFacing = serialized->get_bool(RequireFacing_type_id); 
	}

	[[nodiscard]] auto
	UsableTriggerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UsableTriggerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UsableTriggerPrius> {
		if (incoming_type_id == UsableTriggerPrius::type_id) {
			return std::make_shared<UsableTriggerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated