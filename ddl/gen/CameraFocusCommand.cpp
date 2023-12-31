// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraFocusCommand.hpp>

namespace rivet::ddl::generated {
	CameraFocusCommand::CameraFocusCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Ids = serialized->get_uint64s(Ids_type_id);
		UseClusters = serialized->get_bool(UseClusters_type_id);
		DistanceFactor = serialized->get_float(DistanceFactor_type_id); 
	}

	[[nodiscard]] auto
	CameraFocusCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraFocusCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFocusCommand> {
		if (incoming_type_id == CameraFocusCommand::type_id) {
			return std::make_shared<CameraFocusCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
