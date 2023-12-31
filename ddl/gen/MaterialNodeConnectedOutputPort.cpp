// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeConnectedPort.hpp> 

#include <rivet/ddl/generated/MaterialNodeConnectedOutputPort.hpp>

namespace rivet::ddl::generated {
	MaterialNodeConnectedOutputPort::MaterialNodeConnectedOutputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_string(Id_type_id);
		Targets = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeConnectedPort>(Targets_type_id); 
	}

	[[nodiscard]] auto
	MaterialNodeConnectedOutputPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeConnectedOutputPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeConnectedOutputPort> {
		if (incoming_type_id == MaterialNodeConnectedOutputPort::type_id) {
			return std::make_shared<MaterialNodeConnectedOutputPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
