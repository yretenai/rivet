// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugSignal.hpp>
#include <rivet/ddl/generated/InputPlugStringHash.hpp>
#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/CompareStringHashesNodeDef.hpp>

namespace rivet::ddl::generated {
	CompareStringHashesNodeDef::CompareStringHashesNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LogicNodeBaseDef(serialized) {
		Compare = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(Compare_type_id);
		A = serialized->unwrap_into<rivet::ddl::generated::InputPlugStringHash>(A_type_id);
		B = serialized->unwrap_into<rivet::ddl::generated::InputPlugStringHash>(B_type_id);
		Equal = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(Equal_type_id);
		NotEqual = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(NotEqual_type_id); 
	}

	[[nodiscard]] auto
	CompareStringHashesNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompareStringHashesNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompareStringHashesNodeDef> {
		if (incoming_type_id == CompareStringHashesNodeDef::type_id) {
			return std::make_shared<CompareStringHashesNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
