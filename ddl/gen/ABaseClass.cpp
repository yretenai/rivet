// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ABaseClass.hpp>

namespace rivet::ddl::generated {
	ABaseClass::ABaseClass([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BaseField = serialized->get_int32(BaseField_type_id); 
	}

	[[nodiscard]] auto
	ABaseClass::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ABaseClass::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ABaseClass> {
		if (incoming_type_id == ABaseClass::type_id) {
			return std::make_shared<ABaseClass>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
