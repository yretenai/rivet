// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ColorGradeOpBaseDef.hpp>

namespace rivet::ddl::generated {
	ColorGradeOpBaseDef::ColorGradeOpBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		Weight = serialized->get_float(Weight_type_id, 100.000000);
		Enabled = serialized->get_bool(Enabled_type_id, true); 
	}

	[[nodiscard]] auto
	ColorGradeOpBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ColorGradeOpBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeOpBaseDef> {
		if (incoming_type_id == ColorGradeOpBaseDef::type_id) {
			return std::make_shared<ColorGradeOpBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
