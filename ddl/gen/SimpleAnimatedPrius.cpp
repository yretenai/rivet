// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleAnimatedPrius.hpp>

namespace rivet::ddl::generated {
	SimpleAnimatedPrius::SimpleAnimatedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimName = serialized->get_string(AnimName_type_id);
		StartOnRndFrame = serialized->get_bool(StartOnRndFrame_type_id);
		RndRateMin = serialized->get_float(RndRateMin_type_id);
		RndRateMax = serialized->get_float(RndRateMax_type_id); 
	}

	[[nodiscard]] auto
	SimpleAnimatedPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleAnimatedPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleAnimatedPrius> {
		if (incoming_type_id == SimpleAnimatedPrius::type_id) {
			return std::make_shared<SimpleAnimatedPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
