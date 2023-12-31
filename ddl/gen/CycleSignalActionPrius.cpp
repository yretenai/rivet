// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CycleSignalActionPrius.hpp>

namespace rivet::ddl::generated {
	CycleSignalActionPrius::CycleSignalActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		LoopType = serialized->get_enum<rivet::ddl::generated::x4d26e880>(LoopType_type_id, rivet::ddl::generated::x4d26e880_values);
		Order = serialized->get_enum<rivet::ddl::generated::x88e09fe6>(Order_type_id, rivet::ddl::generated::x88e09fe6_values);
		AllowRepeat = serialized->get_bool(AllowRepeat_type_id);
		ForceOutNewLoc = serialized->get_bool(ForceOutNewLoc_type_id); 
	}

	[[nodiscard]] auto
	CycleSignalActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CycleSignalActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CycleSignalActionPrius> {
		if (incoming_type_id == CycleSignalActionPrius::type_id) {
			return std::make_shared<CycleSignalActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
