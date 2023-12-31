// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModelVariantSingle.hpp> 

#include <rivet/ddl/generated/ModelVariantDef.hpp>

namespace rivet::ddl::generated {
	ModelVariantDef::ModelVariantDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EditorModel = serialized->get_string(EditorModel_type_id);
		Variants = serialized->unwrap_into_many<rivet::ddl::generated::ModelVariantSingle>(Variants_type_id); 
	}

	[[nodiscard]] auto
	ModelVariantDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelVariantDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelVariantDef> {
		if (incoming_type_id == ModelVariantDef::type_id) {
			return std::make_shared<ModelVariantDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
