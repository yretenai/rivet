// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotBasePrius.hpp> 

#include <rivet/ddl/generated/HurdleShotPrius.hpp>

namespace rivet::ddl::generated {
	HurdleShotPrius::HurdleShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GroundWaveShotPrius(serialized) {
		DamageFromBeginning = serialized->get_bool(DamageFromBeginning_type_id);
		DisableGroundCrawlMotion = serialized->get_bool(DisableGroundCrawlMotion_type_id);
		NumShotsInHurdle = serialized->get_uint32(NumShotsInHurdle_type_id);
		SecondaryShotSpawnEmit = serialized->get_string(SecondaryShotSpawnEmit_type_id);
		SecondaryShotPrius = serialized->unwrap_into<rivet::ddl::generated::ShotBasePrius>(SecondaryShotPrius_type_id); 
	}

	auto
	HurdleShotPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HurdleShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HurdleShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HurdleShotPrius> {
		if (incoming_type_id == HurdleShotPrius::type_id) {
			return std::make_shared<HurdleShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
