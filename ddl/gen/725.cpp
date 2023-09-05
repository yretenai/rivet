// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamagePrimFan.hpp>

namespace rivet::ddl::generated {
	DamagePrimFan::DamagePrimFan([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamagePrimBase(serialized) {
		FanSpacing = serialized->get_float(FanSpacing_type_id);
		MaxSubdivide = serialized->get_int32(MaxSubdivide_type_id);
		DamageRadius = serialized->get_float(DamageRadius_type_id); 
	}

	auto
	DamagePrimFan::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamagePrimFan::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamagePrimFan::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamagePrimFan> {
		if (incoming_type_id == DamagePrimFan::type_id) {
			return std::make_shared<DamagePrimFan>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
