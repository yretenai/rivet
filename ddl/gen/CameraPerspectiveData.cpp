// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraPerspectiveData.hpp>

namespace rivet::ddl::generated {
	CameraPerspectiveData::CameraPerspectiveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Aspect = serialized->get_float(Aspect_type_id, 1.333000);
		Near = serialized->get_float(Near_type_id, 1.000000);
		Gar = serialized->get_float(Gar_type_id, 100.000000);
		Fov = serialized->get_float(Fov_type_id, 60.000000); 
	}

	[[nodiscard]] auto
	CameraPerspectiveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraPerspectiveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraPerspectiveData> {
		if (incoming_type_id == CameraPerspectiveData::type_id) {
			return std::make_shared<CameraPerspectiveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
