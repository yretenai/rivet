// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ChunkSpawnParams.hpp>

namespace rivet::ddl::generated {
	ChunkSpawnParams::ChunkSpawnParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PosMode = serialized->get_enum<rivet::ddl::generated::x1484c09f>(PosMode_type_id, rivet::ddl::generated::x1484c09f_values);
		ChunkType = serialized->get_enum<rivet::ddl::generated::ChunkType>(ChunkType_type_id, rivet::ddl::generated::ChunkType_values);
		LinearVelocityMin = serialized->get_float(LinearVelocityMin_type_id);
		LinearVelocityMax = serialized->get_float(LinearVelocityMax_type_id);
		ForceUpwardVelocity = serialized->get_bool(ForceUpwardVelocity_type_id);
		UpwardBias = serialized->get_float(UpwardBias_type_id);
		AngularVelocityMin = serialized->get_float(AngularVelocityMin_type_id);
		AngularVelocityMax = serialized->get_float(AngularVelocityMax_type_id);
		LifetimeMin = serialized->get_float(LifetimeMin_type_id);
		LifetimeMax = serialized->get_float(LifetimeMax_type_id);
		FastDebrisPercent = serialized->get_float(FastDebrisPercent_type_id);
		BiasVector = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(BiasVector_type_id);
		BiasVectorStrength = serialized->get_float(BiasVectorStrength_type_id);
		EnforceBiasVectorPlane = serialized->get_bool(EnforceBiasVectorPlane_type_id); 
	}

	[[nodiscard]] auto
	ChunkSpawnParams::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChunkSpawnParams::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkSpawnParams> {
		if (incoming_type_id == ChunkSpawnParams::type_id) {
			return std::make_shared<ChunkSpawnParams>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
