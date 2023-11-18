// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/MaxFloatNodeDef.hpp>

namespace rivet::ddl::generated {
	MaxFloatNodeDef::MaxFloatNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		A = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(A_type_id);
		B = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(B_type_id);
		Max = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Max_type_id); 
	}

	[[nodiscard]] auto
	MaxFloatNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaxFloatNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaxFloatNodeDef> {
		if (incoming_type_id == MaxFloatNodeDef::type_id) {
			return std::make_shared<MaxFloatNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
