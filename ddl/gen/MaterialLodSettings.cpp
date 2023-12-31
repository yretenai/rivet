// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialLodSettings.hpp>

namespace rivet::ddl::generated {
	MaterialLodSettings::MaterialLodSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TessellationDist = serialized->get_float(TessellationDist_type_id);
		DisplacementDist = serialized->get_float(DisplacementDist_type_id);
		DefaultDist = serialized->get_float(DefaultDist_type_id); 
	}

	[[nodiscard]] auto
	MaterialLodSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialLodSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialLodSettings> {
		if (incoming_type_id == MaterialLodSettings::type_id) {
			return std::make_shared<MaterialLodSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
