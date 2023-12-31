// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/DebugLabelPrius.hpp>

namespace rivet::ddl::generated {
	DebugLabelPrius::DebugLabelPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		Enabled = serialized->get_bool(Enabled_type_id); 
	}

	[[nodiscard]] auto
	DebugLabelPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugLabelPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugLabelPrius> {
		if (incoming_type_id == DebugLabelPrius::type_id) {
			return std::make_shared<DebugLabelPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
