// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClassModifierDef.hpp>

namespace rivet::ddl::generated {
	ClassModifierDef::ClassModifierDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModClassA = serialized->get_float(ModClassA_type_id);
		ModClassB = serialized->get_float(ModClassB_type_id);
		ModClassC = serialized->get_float(ModClassC_type_id);
		ModClassD = serialized->get_float(ModClassD_type_id); 
	}

	[[nodiscard]] auto
	ClassModifierDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClassModifierDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClassModifierDef> {
		if (incoming_type_id == ClassModifierDef::type_id) {
			return std::make_shared<ClassModifierDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
