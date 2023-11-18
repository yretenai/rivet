// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChunkOnDamageValueData.hpp>

namespace rivet::ddl::generated {
	ChunkOnDamageValueData::ChunkOnDamageValueData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HealthThreshold = serialized->get_float(HealthThreshold_type_id);
		ConfigurationName = serialized->get_string(ConfigurationName_type_id);
		HideLookGroup = serialized->get_string(HideLookGroup_type_id); 
	}

	[[nodiscard]] auto
	ChunkOnDamageValueData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChunkOnDamageValueData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkOnDamageValueData> {
		if (incoming_type_id == ChunkOnDamageValueData::type_id) {
			return std::make_shared<ChunkOnDamageValueData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
