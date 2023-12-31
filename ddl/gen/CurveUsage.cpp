// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveUsage.hpp>

namespace rivet::ddl::generated {
	CurveUsage::CurveUsage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Houdini = serialized->get_bool(Houdini_type_id);
		TerrainRoad = serialized->get_bool(TerrainRoad_type_id); 
	}

	[[nodiscard]] auto
	CurveUsage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveUsage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveUsage> {
		if (incoming_type_id == CurveUsage::type_id) {
			return std::make_shared<CurveUsage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
