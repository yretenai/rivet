// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LocalOffsetEmitterPrius.hpp>
#include <rivet/ddl/generated/TargetEmitterPrius.hpp>
#include <rivet/ddl/generated/BasicEmitterPrius.hpp>
#include <rivet/ddl/generated/BarrageEmitterPrius.hpp>
#include <rivet/ddl/generated/ReflectEmitterPrius.hpp> 

#include <rivet/ddl/generated/WeaponEmitterBasePrius.hpp>

namespace rivet::ddl::generated {
	WeaponEmitterBasePrius::WeaponEmitterBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LosLocator = serialized->get_string(LosLocator_type_id); 
	}

	[[nodiscard]] auto
	WeaponEmitterBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponEmitterBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponEmitterBasePrius> {
		if (incoming_type_id == WeaponEmitterBasePrius::type_id) {
			return std::make_shared<WeaponEmitterBasePrius>(serialized);
		}

		auto ReflectEmitterPrius_ptr = ReflectEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (ReflectEmitterPrius_ptr != nullptr) {
			return ReflectEmitterPrius_ptr;
		}

		auto BasicEmitterPrius_ptr = BasicEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (BasicEmitterPrius_ptr != nullptr) {
			return BasicEmitterPrius_ptr;
		}

		auto BarrageEmitterPrius_ptr = BarrageEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (BarrageEmitterPrius_ptr != nullptr) {
			return BarrageEmitterPrius_ptr;
		}

		auto TargetEmitterPrius_ptr = TargetEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (TargetEmitterPrius_ptr != nullptr) {
			return TargetEmitterPrius_ptr;
		}

		auto LocalOffsetEmitterPrius_ptr = LocalOffsetEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (LocalOffsetEmitterPrius_ptr != nullptr) {
			return LocalOffsetEmitterPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
