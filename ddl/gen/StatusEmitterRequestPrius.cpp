// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BattleBrewEmitterBasePrius.hpp> 

#include <rivet/ddl/generated/StatusEmitterRequestPrius.hpp>

namespace rivet::ddl::generated {
	StatusEmitterRequestPrius::StatusEmitterRequestPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEmitterBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEmitterRequestPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEmitterRequestPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterRequestPrius> {
		if (incoming_type_id == StatusEmitterRequestPrius::type_id) {
			return std::make_shared<StatusEmitterRequestPrius>(serialized);
		}

		auto BattleBrewEmitterBasePrius_ptr = BattleBrewEmitterBasePrius::from_substruct(incoming_type_id, serialized);
		if (BattleBrewEmitterBasePrius_ptr != nullptr) {
			return BattleBrewEmitterBasePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
