// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AnimLookAtPrius.hpp>

namespace rivet::ddl::generated {
	AnimLookAtPrius::AnimLookAtPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LookAtPrius(serialized) {
		HeadJointOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(HeadJointOffset_type_id); 
	}

	[[nodiscard]] auto
	AnimLookAtPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimLookAtPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimLookAtPrius> {
		if (incoming_type_id == AnimLookAtPrius::type_id) {
			return std::make_shared<AnimLookAtPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
