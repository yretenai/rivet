// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeshNormalDef.hpp>

namespace rivet::ddl::generated {
	MeshNormalDef::MeshNormalDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Normal = serialized->get_floats(Normal_type_id); 
	}

	[[nodiscard]] auto
	MeshNormalDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeshNormalDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeshNormalDef> {
		if (incoming_type_id == MeshNormalDef::type_id) {
			return std::make_shared<MeshNormalDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
