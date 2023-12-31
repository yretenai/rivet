// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PreviewMaterialMapping.hpp>

namespace rivet::ddl::generated {
	PreviewMaterialMapping::PreviewMaterialMapping([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Applied = serialized->get_bool(Applied_type_id);
		Name = serialized->get_string(Name_type_id); 
	}

	[[nodiscard]] auto
	PreviewMaterialMapping::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PreviewMaterialMapping::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PreviewMaterialMapping> {
		if (incoming_type_id == PreviewMaterialMapping::type_id) {
			return std::make_shared<PreviewMaterialMapping>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
