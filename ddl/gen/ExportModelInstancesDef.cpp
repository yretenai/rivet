// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ExportModelInstanceData.hpp> 

#include <rivet/ddl/generated/ExportModelInstancesDef.hpp>

namespace rivet::ddl::generated {
	ExportModelInstancesDef::ExportModelInstancesDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Instances = serialized->unwrap_into_many<rivet::ddl::generated::ExportModelInstanceData>(Instances_type_id); 
	}

	[[nodiscard]] auto
	ExportModelInstancesDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExportModelInstancesDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExportModelInstancesDef> {
		if (incoming_type_id == ExportModelInstancesDef::type_id) {
			return std::make_shared<ExportModelInstancesDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
