// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VelocityFromHeightAndSpeed.hpp>

namespace rivet::ddl::generated {
	VelocityFromHeightAndSpeed::VelocityFromHeightAndSpeed([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeVelocityMode(serialized) {
		Height = serialized->get_float(Height_type_id);
		Speed = serialized->get_float(Speed_type_id); 
	}

	auto
	VelocityFromHeightAndSpeed::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	VelocityFromHeightAndSpeed::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VelocityFromHeightAndSpeed::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VelocityFromHeightAndSpeed> {
		if (incoming_type_id == VelocityFromHeightAndSpeed::type_id) {
			return std::make_shared<VelocityFromHeightAndSpeed>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
