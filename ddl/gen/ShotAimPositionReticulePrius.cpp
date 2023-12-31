// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotAimPositionReticulePrius.hpp>

namespace rivet::ddl::generated {
	ShotAimPositionReticulePrius::ShotAimPositionReticulePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ReticuleActor = serialized->get_string(ReticuleActor_type_id); 
	}

	[[nodiscard]] auto
	ShotAimPositionReticulePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotAimPositionReticulePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotAimPositionReticulePrius> {
		if (incoming_type_id == ShotAimPositionReticulePrius::type_id) {
			return std::make_shared<ShotAimPositionReticulePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
