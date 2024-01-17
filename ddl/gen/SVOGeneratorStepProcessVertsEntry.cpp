// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SVOGeneratorStepProcessVertsEntry.hpp>

namespace rivet::ddl::generated {
	SVOGeneratorStepProcessVertsEntry::SVOGeneratorStepProcessVertsEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Verts = serialized->unwrap_into_many<rivet::ddl::generated::DDLVector3>(Verts_type_id);
		Id = serialized->get_uint64(Id_type_id, 0); 
	}

	[[nodiscard]] auto
	SVOGeneratorStepProcessVertsEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOGeneratorStepProcessVertsEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOGeneratorStepProcessVertsEntry> {
		if (incoming_type_id == SVOGeneratorStepProcessVertsEntry::type_id) {
			return std::make_shared<SVOGeneratorStepProcessVertsEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
