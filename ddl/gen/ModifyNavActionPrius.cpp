// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModifyNavActionPrius.hpp>

namespace rivet::ddl::generated {
	ModifyNavActionPrius::ModifyNavActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		MeshTemplate = serialized->get_uint32(MeshTemplate_type_id);
		PolyFlags = serialized->get_bitset<rivet::ddl::generated::xc204b456>(PolyFlags_type_id, rivet::ddl::generated::xc204b456_values); 
	}

	[[nodiscard]] auto
	ModifyNavActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModifyNavActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModifyNavActionPrius> {
		if (incoming_type_id == ModifyNavActionPrius::type_id) {
			return std::make_shared<ModifyNavActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
