// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemModelVariantOverride.hpp> 

#include <rivet/ddl/generated/SkinItemModelVariantOverrideListElement.hpp>

namespace rivet::ddl::generated {
	SkinItemModelVariantOverrideListElement::SkinItemModelVariantOverrideListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugName = serialized->get_string(DebugName_type_id);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		Available = serialized->get_enum<rivet::ddl::generated::x7ecfc969>(Available_type_id, rivet::ddl::generated::x7ecfc969_values);
		BodyType = serialized->get_enum<rivet::ddl::generated::x5d60d87e>(BodyType_type_id, rivet::ddl::generated::x5d60d87e_values);
		ModelVariantOverride = serialized->unwrap_into<rivet::ddl::generated::SkinItemModelVariantOverride>(ModelVariantOverride_type_id); 
	}

	auto
	SkinItemModelVariantOverrideListElement::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverrideListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverrideListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModelVariantOverrideListElement> {
		if (incoming_type_id == SkinItemModelVariantOverrideListElement::type_id) {
			return std::make_shared<SkinItemModelVariantOverrideListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
