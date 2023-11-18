// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhysicsComponentPrius.hpp> 

#include <rivet/ddl/generated/PhysicsComponentPriuses.hpp>

namespace rivet::ddl::generated {
	PhysicsComponentPriuses::PhysicsComponentPriuses([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Priuses = serialized->unwrap_into_many<rivet::ddl::generated::PhysicsComponentPrius>(Priuses_type_id); 
	}

	[[nodiscard]] auto
	PhysicsComponentPriuses::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsComponentPriuses::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsComponentPriuses> {
		if (incoming_type_id == PhysicsComponentPriuses::type_id) {
			return std::make_shared<PhysicsComponentPriuses>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
