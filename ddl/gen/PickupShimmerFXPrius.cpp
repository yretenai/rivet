// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GamePickupShimmerFXPrius.hpp> 

#include <rivet/ddl/generated/PickupShimmerFXPrius.hpp>

namespace rivet::ddl::generated {
	PickupShimmerFXPrius::PickupShimmerFXPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	PickupShimmerFXPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupShimmerFXPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupShimmerFXPrius> {
		if (incoming_type_id == PickupShimmerFXPrius::type_id) {
			return std::make_shared<PickupShimmerFXPrius>(serialized);
		}

		auto GamePickupShimmerFXPrius_ptr = GamePickupShimmerFXPrius::from_substruct(incoming_type_id, serialized);
		if (GamePickupShimmerFXPrius_ptr != nullptr) {
			return GamePickupShimmerFXPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
