// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BarrageEmitterPrius.hpp>

namespace rivet::ddl::generated {
	BarrageEmitterPrius::BarrageEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id); 
	}

	auto
	BarrageEmitterPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BarrageEmitterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BarrageEmitterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BarrageEmitterPrius> {
		if (incoming_type_id == BarrageEmitterPrius::type_id) {
			return std::make_shared<BarrageEmitterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
