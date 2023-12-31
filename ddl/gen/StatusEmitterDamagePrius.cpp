// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEmitterDamagePrius.hpp>

namespace rivet::ddl::generated {
	StatusEmitterDamagePrius::StatusEmitterDamagePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEmitterBasePrius(serialized) {
		ProcPercent = serialized->get_float(ProcPercent_type_id); 
	}

	[[nodiscard]] auto
	StatusEmitterDamagePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEmitterDamagePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterDamagePrius> {
		if (incoming_type_id == StatusEmitterDamagePrius::type_id) {
			return std::make_shared<StatusEmitterDamagePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
