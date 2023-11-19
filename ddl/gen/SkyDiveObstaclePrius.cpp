// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkyDiveObstaclePrius.hpp>

namespace rivet::ddl::generated {
	SkyDiveObstaclePrius::SkyDiveObstaclePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageAmount = serialized->get_float(DamageAmount_type_id); 
	}

	[[nodiscard]] auto
	SkyDiveObstaclePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkyDiveObstaclePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkyDiveObstaclePrius> {
		if (incoming_type_id == SkyDiveObstaclePrius::type_id) {
			return std::make_shared<SkyDiveObstaclePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated