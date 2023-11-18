// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLDoubleVector3.hpp> 

#include <rivet/ddl/generated/DDLDoubleTransform.hpp>

namespace rivet::ddl::generated {
	DDLDoubleTransform::DDLDoubleTransform([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLDoubleVector3>(Position_type_id);
		EulerRotation = serialized->unwrap_into<rivet::ddl::generated::DDLDoubleVector3>(EulerRotation_type_id);
		Scale = serialized->unwrap_into<rivet::ddl::generated::DDLDoubleVector3>(Scale_type_id);
		Shear = serialized->unwrap_into<rivet::ddl::generated::DDLDoubleVector3>(Shear_type_id); 
	}

	[[nodiscard]] auto
	DDLDoubleTransform::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DDLDoubleTransform::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLDoubleTransform> {
		if (incoming_type_id == DDLDoubleTransform::type_id) {
			return std::make_shared<DDLDoubleTransform>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
