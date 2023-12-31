// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugSignal.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/CompareFloatsNodeDef.hpp>

namespace rivet::ddl::generated {
	CompareFloatsNodeDef::CompareFloatsNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		Compare = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(Compare_type_id);
		A = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(A_type_id);
		B = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(B_type_id);
		LessThan = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(LessThan_type_id);
		EqualTo = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(EqualTo_type_id);
		GreaterThan = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(GreaterThan_type_id); 
	}

	[[nodiscard]] auto
	CompareFloatsNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompareFloatsNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompareFloatsNodeDef> {
		if (incoming_type_id == CompareFloatsNodeDef::type_id) {
			return std::make_shared<CompareFloatsNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
