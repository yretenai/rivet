// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SVOGeneratorStepProcessVertsEntry.hpp> 

#include <rivet/ddl/generated/SVOGeneratorStepProcessVerts.hpp>

namespace rivet::ddl::generated {
	SVOGeneratorStepProcessVerts::SVOGeneratorStepProcessVerts([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Entries = serialized->unwrap_into_many<rivet::ddl::generated::SVOGeneratorStepProcessVertsEntry>(Entries_type_id); 
	}

	[[nodiscard]] auto
	SVOGeneratorStepProcessVerts::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOGeneratorStepProcessVerts::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOGeneratorStepProcessVerts> {
		if (incoming_type_id == SVOGeneratorStepProcessVerts::type_id) {
			return std::make_shared<SVOGeneratorStepProcessVerts>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
