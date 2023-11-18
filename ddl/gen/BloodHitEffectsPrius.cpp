// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BloodHitEffectsPrius.hpp>

namespace rivet::ddl::generated {
	BloodHitEffectsPrius::BloodHitEffectsPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UsableJoints = serialized->get_strings(UsableJoints_type_id); 
	}

	[[nodiscard]] auto
	BloodHitEffectsPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BloodHitEffectsPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BloodHitEffectsPrius> {
		if (incoming_type_id == BloodHitEffectsPrius::type_id) {
			return std::make_shared<BloodHitEffectsPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
