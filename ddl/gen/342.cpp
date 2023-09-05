// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/StaticOrientation.hpp>

namespace rivet::ddl::generated {
	StaticOrientation::StaticOrientation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OrientationMode(serialized) {
		OneTimeRotation = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(OneTimeRotation_type_id); 
	}

	auto
	StaticOrientation::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StaticOrientation::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StaticOrientation::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StaticOrientation> {
		if (incoming_type_id == StaticOrientation::type_id) {
			return std::make_shared<StaticOrientation>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
