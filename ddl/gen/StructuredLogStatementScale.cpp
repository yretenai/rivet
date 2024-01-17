// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/StructuredLogStatementScale.hpp>

namespace rivet::ddl::generated {
	StructuredLogStatementScale::StructuredLogStatementScale([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TestName = serialized->get_string(TestName_type_id, {});
		VariableName = serialized->get_string(VariableName_type_id, {});
		Scale = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Scale_type_id); 
	}

	[[nodiscard]] auto
	StructuredLogStatementScale::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogStatementScale::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogStatementScale> {
		if (incoming_type_id == StructuredLogStatementScale::type_id) {
			return std::make_shared<StructuredLogStatementScale>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
