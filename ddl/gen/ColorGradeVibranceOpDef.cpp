// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ColorGradeVibranceOpDef.hpp>

namespace rivet::ddl::generated {
	ColorGradeVibranceOpDef::ColorGradeVibranceOpDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Name = serialized->get_string(Name_type_id);
		Weight = serialized->get_float(Weight_type_id);
		Enabled = serialized->get_bool(Enabled_type_id);
		Vibrance = serialized->get_float(Vibrance_type_id); 
	}

	[[nodiscard]] auto
	ColorGradeVibranceOpDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ColorGradeVibranceOpDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeVibranceOpDef> {
		if (incoming_type_id == ColorGradeVibranceOpDef::type_id) {
			return std::make_shared<ColorGradeVibranceOpDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
