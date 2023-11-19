// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugActor.hpp>
#include <rivet/ddl/generated/InputPlugActor.hpp> 

#include <rivet/ddl/generated/OutputNodeActorDef.hpp>

namespace rivet::ddl::generated {
	OutputNodeActorDef::OutputNodeActorDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OutputNodeBaseDef(serialized) {
		Input = serialized->unwrap_into<rivet::ddl::generated::InputPlugActor>(Input_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugActor>(Output_type_id); 
	}

	[[nodiscard]] auto
	OutputNodeActorDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OutputNodeActorDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OutputNodeActorDef> {
		if (incoming_type_id == OutputNodeActorDef::type_id) {
			return std::make_shared<OutputNodeActorDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated