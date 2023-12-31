// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeOutputPort.hpp>

namespace rivet::ddl::generated {
	MaterialNodeOutputPort::MaterialNodeOutputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InternalName = serialized->get_string(InternalName_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		Minimums = serialized->get_string(Minimums_type_id);
		Maximums = serialized->get_string(Maximums_type_id);
		Values = serialized->get_string(Values_type_id);
		Type = serialized->get_string(Type_type_id);
		Description = serialized->get_string(Description_type_id);
		Documentation = serialized->get_string(Documentation_type_id); 
	}

	[[nodiscard]] auto
	MaterialNodeOutputPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeOutputPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeOutputPort> {
		if (incoming_type_id == MaterialNodeOutputPort::type_id) {
			return std::make_shared<MaterialNodeOutputPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
