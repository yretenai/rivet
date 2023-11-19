// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EyeBeamFiringPattern.hpp>

namespace rivet::ddl::generated {
	EyeBeamFiringPattern::EyeBeamFiringPattern([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinShotCount = serialized->get_uint8(MinShotCount_type_id);
		MaxShotCount = serialized->get_uint8(MaxShotCount_type_id);
		MinShotDelay = serialized->get_float(MinShotDelay_type_id);
		MaxShotDelay = serialized->get_float(MaxShotDelay_type_id); 
	}

	[[nodiscard]] auto
	EyeBeamFiringPattern::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EyeBeamFiringPattern::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EyeBeamFiringPattern> {
		if (incoming_type_id == EyeBeamFiringPattern::type_id) {
			return std::make_shared<EyeBeamFiringPattern>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated