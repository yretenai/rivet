// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TelekinesisData.hpp>

namespace rivet::ddl::generated {
	TelekinesisData::TelekinesisData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IntroAnim = serialized->get_string(IntroAnim_type_id);
		HoldLoopAnim = serialized->get_string(HoldLoopAnim_type_id);
		ThrowAnim = serialized->get_string(ThrowAnim_type_id);
		ThrowWithOutroAnim = serialized->get_string(ThrowWithOutroAnim_type_id);
		HoldLocator = serialized->get_string(HoldLocator_type_id);
		NumTelekinesisObjectsWanted = serialized->get_int32(NumTelekinesisObjectsWanted_type_id);
		TimeToGatherAndOrbit = serialized->get_float(TimeToGatherAndOrbit_type_id);
		TimeToFirstObjectThrow = serialized->get_float(TimeToFirstObjectThrow_type_id);
		TimeBetweenThrows = serialized->get_float(TimeBetweenThrows_type_id);
		StunOnAllOrbitDestroyed = serialized->get_bool(StunOnAllOrbitDestroyed_type_id);
		ShotConfig = serialized->get_string(ShotConfig_type_id);
		Conduit = serialized->get_string(Conduit_type_id);
		PortalInShot = serialized->get_bool(PortalInShot_type_id);
		PortalActorAsset = serialized->get_string(PortalActorAsset_type_id);
		PortalSpawnedShotActor = serialized->get_string(PortalSpawnedShotActor_type_id); 
	}

	auto
	TelekinesisData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TelekinesisData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TelekinesisData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TelekinesisData> {
		if (incoming_type_id == TelekinesisData::type_id) {
			return std::make_shared<TelekinesisData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
