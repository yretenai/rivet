// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldSpawnData.hpp>

namespace rivet::ddl::generated {
	MagShieldSpawnData::MagShieldSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AttachableShotSpawnData(serialized) {
		ReturnShots = serialized->get_bool(ReturnShots_type_id); 
	}

	[[nodiscard]] auto
	MagShieldSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldSpawnData> {
		if (incoming_type_id == MagShieldSpawnData::type_id) {
			return std::make_shared<MagShieldSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
