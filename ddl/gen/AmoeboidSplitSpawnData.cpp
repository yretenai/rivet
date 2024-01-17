// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmoeboidSplitSpawnData.hpp>

namespace rivet::ddl::generated {
	AmoeboidSplitSpawnData::AmoeboidSplitSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		SystemIndex = serialized->get_uint8(SystemIndex_type_id, 0);
		CombineHostHandle = serialized->get_uint32(CombineHostHandle_type_id, 0);
		CombineSpawnAssetId = serialized->get_uint64(CombineSpawnAssetId_type_id, 0);
		IsCombine = serialized->get_bool(IsCombine_type_id, false); 
	}

	[[nodiscard]] auto
	AmoeboidSplitSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmoeboidSplitSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmoeboidSplitSpawnData> {
		if (incoming_type_id == AmoeboidSplitSpawnData::type_id) {
			return std::make_shared<AmoeboidSplitSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
