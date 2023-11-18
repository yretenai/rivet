// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/EllipseCrossSection.hpp>

namespace rivet::ddl::generated {
	EllipseCrossSection::EllipseCrossSection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CrossSectionChoice(serialized) {
		Dimensons = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Dimensons_type_id); 
	}

	[[nodiscard]] auto
	EllipseCrossSection::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EllipseCrossSection::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EllipseCrossSection> {
		if (incoming_type_id == EllipseCrossSection::type_id) {
			return std::make_shared<EllipseCrossSection>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
