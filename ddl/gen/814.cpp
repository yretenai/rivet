// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionOrderListBase.hpp> 

#include <rivet/ddl/generated/MissionOrderListIndirect.hpp>

namespace rivet::ddl::generated {
	MissionOrderListIndirect::MissionOrderListIndirect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionOrderList = serialized->unwrap_into<rivet::ddl::generated::MissionOrderListBase>(MissionOrderList_type_id); 
	}

	auto
	MissionOrderListIndirect::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	MissionOrderListIndirect::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionOrderListIndirect::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionOrderListIndirect> {
		if (incoming_type_id == MissionOrderListIndirect::type_id) {
			return std::make_shared<MissionOrderListIndirect>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
