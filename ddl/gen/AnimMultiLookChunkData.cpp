// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimChunkDirection.hpp>
#include <rivet/ddl/generated/AnimChunkRange.hpp>
#include <rivet/ddl/generated/LookChunkData.hpp> 

#include <rivet/ddl/generated/AnimMultiLookChunkData.hpp>

namespace rivet::ddl::generated {
	AnimMultiLookChunkData::AnimMultiLookChunkData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimChunkData(serialized) {
		Looks = serialized->unwrap_into_many<rivet::ddl::generated::LookChunkData>(Looks_type_id);
		HideSourceLook = serialized->get_bool(HideSourceLook_type_id);
		Lifetime = serialized->get_float(Lifetime_type_id);
		MinSpeed = serialized->get_float(MinSpeed_type_id);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id);
		ConduitAsset = serialized->get_string(ConduitAsset_type_id);
		RotationalSpeedX = serialized->unwrap_into<rivet::ddl::generated::AnimChunkRange>(RotationalSpeedX_type_id);
		RotationalSpeedY = serialized->unwrap_into<rivet::ddl::generated::AnimChunkRange>(RotationalSpeedY_type_id);
		RotationalSpeedZ = serialized->unwrap_into<rivet::ddl::generated::AnimChunkRange>(RotationalSpeedZ_type_id);
		Direction = serialized->unwrap_into<rivet::ddl::generated::AnimChunkDirection>(Direction_type_id); 
	}

	[[nodiscard]] auto
	AnimMultiLookChunkData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimMultiLookChunkData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimMultiLookChunkData> {
		if (incoming_type_id == AnimMultiLookChunkData::type_id) {
			return std::make_shared<AnimMultiLookChunkData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
