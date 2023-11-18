// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageStateConfigDataHeartChamber.hpp>

namespace rivet::ddl::generated {
	DamageStateConfigDataHeartChamber::DamageStateConfigDataHeartChamber([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ChamberConfig = serialized->get_string(ChamberConfig_type_id);
		NodeAConfig = serialized->get_string(NodeAConfig_type_id);
		NodeBConfig = serialized->get_string(NodeBConfig_type_id); 
	}

	[[nodiscard]] auto
	DamageStateConfigDataHeartChamber::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStateConfigDataHeartChamber::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateConfigDataHeartChamber> {
		if (incoming_type_id == DamageStateConfigDataHeartChamber::type_id) {
			return std::make_shared<DamageStateConfigDataHeartChamber>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
