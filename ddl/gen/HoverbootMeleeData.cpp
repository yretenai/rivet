// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverbootMeleeData.hpp>

namespace rivet::ddl::generated {
	HoverbootMeleeData::HoverbootMeleeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Decel = serialized->get_float(Decel_type_id);
		MinAnimRate = serialized->get_float(MinAnimRate_type_id);
		MaxAnimRate = serialized->get_float(MaxAnimRate_type_id); 
	}

	[[nodiscard]] auto
	HoverbootMeleeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootMeleeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootMeleeData> {
		if (incoming_type_id == HoverbootMeleeData::type_id) {
			return std::make_shared<HoverbootMeleeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
