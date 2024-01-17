// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSlingshotConfig.hpp>
#include <rivet/ddl/generated/HeroTetherConfig.hpp> 

#include <rivet/ddl/generated/HeroHookshotConfig.hpp>

namespace rivet::ddl::generated {
	HeroHookshotConfig::HeroHookshotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IdealCableLength = serialized->get_float(IdealCableLength_type_id, 3.000000);
		Accel = serialized->get_float(Accel_type_id, 40.000000);
		Decel = serialized->get_float(Decel_type_id, 60.000000);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id, 20.000000);
		AnimMaxTargetSpeed = serialized->get_float(AnimMaxTargetSpeed_type_id, 20.000000); 
	}

	[[nodiscard]] auto
	HeroHookshotConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroHookshotConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroHookshotConfig> {
		if (incoming_type_id == HeroHookshotConfig::type_id) {
			return std::make_shared<HeroHookshotConfig>(serialized);
		}

		auto HeroTetherConfig_ptr = HeroTetherConfig::from_substruct(incoming_type_id, serialized);
		if (HeroTetherConfig_ptr != nullptr) {
			return HeroTetherConfig_ptr;
		}

		auto HeroSlingshotConfig_ptr = HeroSlingshotConfig::from_substruct(incoming_type_id, serialized);
		if (HeroSlingshotConfig_ptr != nullptr) {
			return HeroSlingshotConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
