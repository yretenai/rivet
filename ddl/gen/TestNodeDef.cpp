// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugInt.hpp>
#include <rivet/ddl/generated/InputPlugString.hpp>
#include <rivet/ddl/generated/InputPlugInt.hpp> 

#include <rivet/ddl/generated/TestNodeDef.hpp>

namespace rivet::ddl::generated {
	TestNodeDef::TestNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		In = serialized->unwrap_into<rivet::ddl::generated::InputPlugInt>(In_type_id);
		Name = serialized->unwrap_into<rivet::ddl::generated::InputPlugString>(Name_type_id);
		Out = serialized->unwrap_into<rivet::ddl::generated::OutputPlugInt>(Out_type_id);
		DebugName = serialized->get_string(DebugName_type_id); 
	}

	[[nodiscard]] auto
	TestNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestNodeDef> {
		if (incoming_type_id == TestNodeDef::type_id) {
			return std::make_shared<TestNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
