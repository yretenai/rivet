// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionOrderDataBase.hpp> 

#include <rivet/ddl/generated/MissionOrderDataIndirect.hpp>

namespace rivet::ddl::generated {
	MissionOrderDataIndirect::MissionOrderDataIndirect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionOrderData = serialized->unwrap_into<rivet::ddl::generated::MissionOrderDataBase>(MissionOrderData_type_id); 
	}

	[[nodiscard]] auto
	MissionOrderDataIndirect::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionOrderDataIndirect::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionOrderDataIndirect> {
		if (incoming_type_id == MissionOrderDataIndirect::type_id) {
			return std::make_shared<MissionOrderDataIndirect>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
