// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugInt.hpp> 

#include <rivet/ddl/generated/TestTriggerNodeDef.hpp>

namespace rivet::ddl::generated {
	TestTriggerNodeDef::TestTriggerNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		DebugName = serialized->get_string(DebugName_type_id, {});
		Out = serialized->unwrap_into<rivet::ddl::generated::OutputPlugInt>(Out_type_id); 
	}

	[[nodiscard]] auto
	TestTriggerNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestTriggerNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestTriggerNodeDef> {
		if (incoming_type_id == TestTriggerNodeDef::type_id) {
			return std::make_shared<TestTriggerNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
