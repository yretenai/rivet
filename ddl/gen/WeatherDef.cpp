// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ParticlesDef.hpp>
#include <rivet/ddl/generated/WindDef.hpp>
#include <rivet/ddl/generated/WetSurfacesDef.hpp> 

#include <rivet/ddl/generated/WeatherDef.hpp>

namespace rivet::ddl::generated {
	WeatherDef::WeatherDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WeatherConstant = serialized->get_float(WeatherConstant_type_id);
		WetSurfaces = serialized->unwrap_into<rivet::ddl::generated::WetSurfacesDef>(WetSurfaces_type_id);
		Particles = serialized->unwrap_into<rivet::ddl::generated::ParticlesDef>(Particles_type_id);
		Wind = serialized->unwrap_into<rivet::ddl::generated::WindDef>(Wind_type_id); 
	}

	[[nodiscard]] auto
	WeatherDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeatherDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeatherDef> {
		if (incoming_type_id == WeatherDef::type_id) {
			return std::make_shared<WeatherDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
