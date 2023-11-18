// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LaserAudioEmittersSpawnData.hpp>

namespace rivet::ddl::generated {
	LaserAudioEmittersSpawnData::LaserAudioEmittersSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		LaserAudioCurveAsset = serialized->get_uint64(LaserAudioCurveAsset_type_id);
		LaserAudioCurveEmitterAsset = serialized->get_uint64(LaserAudioCurveEmitterAsset_type_id);
		LaserAudioImpactEmitterAsset = serialized->get_uint64(LaserAudioImpactEmitterAsset_type_id);
		ParentActorHandleData = serialized->get_uint32(ParentActorHandleData_type_id); 
	}

	[[nodiscard]] auto
	LaserAudioEmittersSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LaserAudioEmittersSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserAudioEmittersSpawnData> {
		if (incoming_type_id == LaserAudioEmittersSpawnData::type_id) {
			return std::make_shared<LaserAudioEmittersSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
