// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/MinFloatNodeDef.hpp>

namespace rivet::ddl::generated {
	MinFloatNodeDef::MinFloatNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		A = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(A_type_id);
		B = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(B_type_id);
		Min = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Min_type_id); 
	}

	[[nodiscard]] auto
	MinFloatNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MinFloatNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MinFloatNodeDef> {
		if (incoming_type_id == MinFloatNodeDef::type_id) {
			return std::make_shared<MinFloatNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
