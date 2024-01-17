// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroMultiSpawnPointPrius.hpp>

namespace rivet::ddl::generated {
	HeroMultiSpawnPointPrius::HeroMultiSpawnPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HeroSingleSpawnPointPrius(serialized) {
		AdditionalLocationsGroup = serialized->get_uint64(AdditionalLocationsGroup_type_id, 0); 
	}

	[[nodiscard]] auto
	HeroMultiSpawnPointPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroMultiSpawnPointPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMultiSpawnPointPrius> {
		if (incoming_type_id == HeroMultiSpawnPointPrius::type_id) {
			return std::make_shared<HeroMultiSpawnPointPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
