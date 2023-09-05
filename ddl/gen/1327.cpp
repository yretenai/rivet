// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EmergentVOManagerGamePrius.hpp> 

#include <rivet/ddl/generated/EmergentVOManagerBasePrius.hpp>

namespace rivet::ddl::generated {
	EmergentVOManagerBasePrius::EmergentVOManagerBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EmergentVOBasePrius(serialized) {
		Voice = serialized->get_enum<rivet::ddl::generated::x8d474ebb>(Voice_type_id, rivet::ddl::generated::x8d474ebb_values);
		EnableInMultiplayer = serialized->get_bool(EnableInMultiplayer_type_id); 
	}

	auto
	EmergentVOManagerBasePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	EmergentVOManagerBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EmergentVOManagerBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerBasePrius> {
		if (incoming_type_id == EmergentVOManagerBasePrius::type_id) {
			return std::make_shared<EmergentVOManagerBasePrius>(serialized);
		}

		auto EmergentVOManagerGamePrius_ptr = EmergentVOManagerGamePrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerGamePrius_ptr != nullptr) {
			return EmergentVOManagerGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
