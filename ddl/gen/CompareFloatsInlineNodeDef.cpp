// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugBoolean.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/CompareFloatsInlineNodeDef.hpp>

namespace rivet::ddl::generated {
	CompareFloatsInlineNodeDef::CompareFloatsInlineNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		A = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(A_type_id);
		B = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(B_type_id);
		LessThan = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(LessThan_type_id);
		EqualTo = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(EqualTo_type_id);
		GreaterThan = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(GreaterThan_type_id); 
	}

	[[nodiscard]] auto
	CompareFloatsInlineNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompareFloatsInlineNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompareFloatsInlineNodeDef> {
		if (incoming_type_id == CompareFloatsInlineNodeDef::type_id) {
			return std::make_shared<CompareFloatsInlineNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
