// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SVOGeneratorStepSplitElement.hpp>

namespace rivet::ddl::generated {
	SVOGeneratorStepSplitElement::SVOGeneratorStepSplitElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Center = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Center_type_id);
		Radii = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Radii_type_id);
		Intersecting = serialized->get_bool(Intersecting_type_id, false); 
	}

	[[nodiscard]] auto
	SVOGeneratorStepSplitElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOGeneratorStepSplitElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOGeneratorStepSplitElement> {
		if (incoming_type_id == SVOGeneratorStepSplitElement::type_id) {
			return std::make_shared<SVOGeneratorStepSplitElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
