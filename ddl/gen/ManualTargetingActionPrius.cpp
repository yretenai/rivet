// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ManualTargetingActionPrius.hpp>

namespace rivet::ddl::generated {
	ManualTargetingActionPrius::ManualTargetingActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Enemy_Bot);
		Aggro = serialized->get_float(Aggro_type_id, 100.000000); 
	}

	[[nodiscard]] auto
	ManualTargetingActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ManualTargetingActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ManualTargetingActionPrius> {
		if (incoming_type_id == ManualTargetingActionPrius::type_id) {
			return std::make_shared<ManualTargetingActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
