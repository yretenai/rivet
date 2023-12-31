// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/ClampFloatNodeDef.hpp>

namespace rivet::ddl::generated {
	ClampFloatNodeDef::ClampFloatNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		Float = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(Float_type_id);
		Min = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(Min_type_id);
		Max = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(Max_type_id);
		Clamped = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Clamped_type_id); 
	}

	[[nodiscard]] auto
	ClampFloatNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClampFloatNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClampFloatNodeDef> {
		if (incoming_type_id == ClampFloatNodeDef::type_id) {
			return std::make_shared<ClampFloatNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
