// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ColorGradeSolidOpDef.hpp>

namespace rivet::ddl::generated {
	ColorGradeSolidOpDef::ColorGradeSolidOpDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		Weight = serialized->get_float(Weight_type_id, 100.000000);
		Enabled = serialized->get_bool(Enabled_type_id, true);
		BlendType = serialized->get_enum<rivet::ddl::generated::x58442634>(BlendType_type_id, rivet::ddl::generated::x58442634_values, rivet::ddl::generated::x58442634::Multiply);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id); 
	}

	[[nodiscard]] auto
	ColorGradeSolidOpDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ColorGradeSolidOpDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeSolidOpDef> {
		if (incoming_type_id == ColorGradeSolidOpDef::type_id) {
			return std::make_shared<ColorGradeSolidOpDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
