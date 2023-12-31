// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FirepointShootingData.hpp>

namespace rivet::ddl::generated {
	FirepointShootingData::FirepointShootingData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinRangedAttacksToReposition = serialized->get_int32(MinRangedAttacksToReposition_type_id);
		MaxRangedAttacksToReposition = serialized->get_int32(MaxRangedAttacksToReposition_type_id);
		MinRangedAttacksToReload = serialized->get_int32(MinRangedAttacksToReload_type_id);
		MaxRangedAttacksToReload = serialized->get_int32(MaxRangedAttacksToReload_type_id); 
	}

	[[nodiscard]] auto
	FirepointShootingData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FirepointShootingData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FirepointShootingData> {
		if (incoming_type_id == FirepointShootingData::type_id) {
			return std::make_shared<FirepointShootingData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
