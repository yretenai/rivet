// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleMoverActionPrius.hpp>

namespace rivet::ddl::generated {
	SimpleMoverActionPrius::SimpleMoverActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Flags = serialized->get_bitset<rivet::ddl::generated::xf37a71ae>(Flags_type_id, rivet::ddl::generated::xf37a71ae_values);
		Duration = serialized->get_float(Duration_type_id);
		MaxTimes = serialized->get_int32(MaxTimes_type_id);
		UseOverrideMotionType = serialized->get_bool(UseOverrideMotionType_type_id);
		OverrideMotionType = serialized->get_enum<rivet::ddl::generated::MotionTypes>(OverrideMotionType_type_id, rivet::ddl::generated::MotionTypes_values); 
	}

	[[nodiscard]] auto
	SimpleMoverActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleMoverActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleMoverActionPrius> {
		if (incoming_type_id == SimpleMoverActionPrius::type_id) {
			return std::make_shared<SimpleMoverActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
