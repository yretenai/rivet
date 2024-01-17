// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector4.hpp> 

#include <rivet/ddl/generated/StructuredLogMatrix.hpp>

namespace rivet::ddl::generated {
	StructuredLogMatrix::StructuredLogMatrix([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TestName = serialized->get_string(TestName_type_id, {});
		VariableName = serialized->get_string(VariableName_type_id, {});
		X = serialized->unwrap_into<rivet::ddl::generated::DDLVector4>(X_type_id);
		Y = serialized->unwrap_into<rivet::ddl::generated::DDLVector4>(Y_type_id);
		Z = serialized->unwrap_into<rivet::ddl::generated::DDLVector4>(Z_type_id);
		W = serialized->unwrap_into<rivet::ddl::generated::DDLVector4>(W_type_id); 
	}

	[[nodiscard]] auto
	StructuredLogMatrix::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogMatrix::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogMatrix> {
		if (incoming_type_id == StructuredLogMatrix::type_id) {
			return std::make_shared<StructuredLogMatrix>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
