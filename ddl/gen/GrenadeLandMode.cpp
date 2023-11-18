// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Bounce.hpp>
#include <rivet/ddl/generated/LandOnGround.hpp> 

#include <rivet/ddl/generated/GrenadeLandMode.hpp>

namespace rivet::ddl::generated {
	GrenadeLandMode::GrenadeLandMode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	GrenadeLandMode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeLandMode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeLandMode> {
		if (incoming_type_id == GrenadeLandMode::type_id) {
			return std::make_shared<GrenadeLandMode>(serialized);
		}

		auto LandOnGround_ptr = LandOnGround::from_substruct(incoming_type_id, serialized);
		if (LandOnGround_ptr != nullptr) {
			return LandOnGround_ptr;
		}

		auto Bounce_ptr = Bounce::from_substruct(incoming_type_id, serialized);
		if (Bounce_ptr != nullptr) {
			return Bounce_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
