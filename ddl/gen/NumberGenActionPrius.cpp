// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NumberGenActionPrius.hpp>

namespace rivet::ddl::generated {
	NumberGenActionPrius::NumberGenActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Type = serialized->get_enum<rivet::ddl::generated::x3c1de250>(Type_type_id, rivet::ddl::generated::x3c1de250_values);
		Min = serialized->get_float(Min_type_id);
		Max = serialized->get_float(Max_type_id);
		Speed = serialized->get_float(Speed_type_id); 
	}

	[[nodiscard]] auto
	NumberGenActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NumberGenActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NumberGenActionPrius> {
		if (incoming_type_id == NumberGenActionPrius::type_id) {
			return std::make_shared<NumberGenActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
