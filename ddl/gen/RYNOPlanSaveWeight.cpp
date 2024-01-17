// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RYNOPlanSaveWeight.hpp>

namespace rivet::ddl::generated {
	RYNOPlanSaveWeight::RYNOPlanSaveWeight([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveId = serialized->get_enum<rivet::ddl::generated::x81d3e717>(SaveId_type_id, rivet::ddl::generated::x81d3e717_values, rivet::ddl::generated::x81d3e717::Nefarious_City_01);
		Weight = serialized->get_float(Weight_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	RYNOPlanSaveWeight::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RYNOPlanSaveWeight::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPlanSaveWeight> {
		if (incoming_type_id == RYNOPlanSaveWeight::type_id) {
			return std::make_shared<RYNOPlanSaveWeight>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
