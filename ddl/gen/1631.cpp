// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ModelSplineMaterialExtraFoliage.hpp>

namespace rivet::ddl::generated {
	ModelSplineMaterialExtraFoliage::ModelSplineMaterialExtraFoliage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Transmittance = serialized->get_float(Transmittance_type_id);
		LightWrap = serialized->get_float(LightWrap_type_id);
		AverageColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AverageColor_type_id); 
	}

	auto
	ModelSplineMaterialExtraFoliage::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ModelSplineMaterialExtraFoliage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSplineMaterialExtraFoliage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSplineMaterialExtraFoliage> {
		if (incoming_type_id == ModelSplineMaterialExtraFoliage::type_id) {
			return std::make_shared<ModelSplineMaterialExtraFoliage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
