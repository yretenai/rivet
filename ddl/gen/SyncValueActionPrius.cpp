// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncValueActionPrius.hpp>

namespace rivet::ddl::generated {
	SyncValueActionPrius::SyncValueActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Name = serialized->get_string(Name_type_id);
		ValueIn = serialized->get_float(ValueIn_type_id); 
	}

	[[nodiscard]] auto
	SyncValueActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncValueActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncValueActionPrius> {
		if (incoming_type_id == SyncValueActionPrius::type_id) {
			return std::make_shared<SyncValueActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated