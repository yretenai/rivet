// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestActorPhysicsInfo.hpp> 

#include <rivet/ddl/generated/StructuredLogStatementActorPhysics.hpp>

namespace rivet::ddl::generated {
	StructuredLogStatementActorPhysics::StructuredLogStatementActorPhysics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLogStatement(serialized) {
		Physics = serialized->unwrap_into<rivet::ddl::generated::RobotestActorPhysicsInfo>(Physics_type_id); 
	}

	[[nodiscard]] auto
	StructuredLogStatementActorPhysics::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogStatementActorPhysics::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogStatementActorPhysics> {
		if (incoming_type_id == StructuredLogStatementActorPhysics::type_id) {
			return std::make_shared<StructuredLogStatementActorPhysics>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
