// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemDecal.hpp> 

#include <rivet/ddl/generated/SkinItemDecalListElement.hpp>

namespace rivet::ddl::generated {
	SkinItemDecalListElement::SkinItemDecalListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugName = serialized->get_string(DebugName_type_id);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		Available = serialized->get_enum<rivet::ddl::generated::x7ecfc969>(Available_type_id, rivet::ddl::generated::x7ecfc969_values);
		Decal = serialized->unwrap_into<rivet::ddl::generated::SkinItemDecal>(Decal_type_id); 
	}

	[[nodiscard]] auto
	SkinItemDecalListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemDecalListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemDecalListElement> {
		if (incoming_type_id == SkinItemDecalListElement::type_id) {
			return std::make_shared<SkinItemDecalListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
