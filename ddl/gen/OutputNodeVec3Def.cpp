// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugVec3.hpp>
#include <rivet/ddl/generated/InputPlugVec3.hpp> 

#include <rivet/ddl/generated/OutputNodeVec3Def.hpp>

namespace rivet::ddl::generated {
	OutputNodeVec3Def::OutputNodeVec3Def([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OutputNodeBaseDef(serialized) {
		Input = serialized->unwrap_into<rivet::ddl::generated::InputPlugVec3>(Input_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugVec3>(Output_type_id); 
	}

	[[nodiscard]] auto
	OutputNodeVec3Def::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OutputNodeVec3Def::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OutputNodeVec3Def> {
		if (incoming_type_id == OutputNodeVec3Def::type_id) {
			return std::make_shared<OutputNodeVec3Def>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
