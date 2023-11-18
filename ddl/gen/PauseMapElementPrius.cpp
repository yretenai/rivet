// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PauseMapElementPrius.hpp>

namespace rivet::ddl::generated {
	PauseMapElementPrius::PauseMapElementPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf0177ef8>(Type_type_id, rivet::ddl::generated::xf0177ef8_values);
		Hide = serialized->get_bool(Hide_type_id);
		ShowRotation = serialized->get_bool(ShowRotation_type_id);
		AlwaysVisible = serialized->get_bool(AlwaysVisible_type_id);
		OverridePosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(OverridePosition_type_id); 
	}

	[[nodiscard]] auto
	PauseMapElementPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PauseMapElementPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseMapElementPrius> {
		if (incoming_type_id == PauseMapElementPrius::type_id) {
			return std::make_shared<PauseMapElementPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
