// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageEmitterVelocityPrius.hpp>

namespace rivet::ddl::generated {
	DamageEmitterVelocityPrius::DamageEmitterVelocityPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageEmitterPrius(serialized) {

	}

	[[nodiscard]] auto
	DamageEmitterVelocityPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageEmitterVelocityPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageEmitterVelocityPrius> {
		if (incoming_type_id == DamageEmitterVelocityPrius::type_id) {
			return std::make_shared<DamageEmitterVelocityPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
