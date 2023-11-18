// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectMinMax.hpp>

namespace rivet::ddl::generated {
	VisualEffectMinMax::VisualEffectMinMax([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Max = serialized->get_float(Max_type_id);
		Min = serialized->get_float(Min_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectMinMax::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectMinMax::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectMinMax> {
		if (incoming_type_id == VisualEffectMinMax::type_id) {
			return std::make_shared<VisualEffectMinMax>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
