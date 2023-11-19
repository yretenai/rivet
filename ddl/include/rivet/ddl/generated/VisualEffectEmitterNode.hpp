// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/enums/EmitterType.hpp>
#include <rivet/ddl/generated/enums/x8db2fd48.hpp> 

namespace rivet::ddl::generated {
	struct VisualEffectPerfAttrOverride;
	struct VisualEffectParticleRender;
	struct VisualEffectEmission;
	struct SeparateSpaces;
	struct VisualEffectNodeConnectedOutputPort;
	struct VisualEffectParticleMotion;
	struct VisualEffectNodeConnectedInputPort; 

	struct RIVET_DDL_SHARED VisualEffectEmitterNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectEmitterNode";
		constexpr static rivet::rivet_type_id type_id = 0x1b98f123;

		constexpr static std::string_view NodeId_type_name = "NodeId";
		constexpr static rivet::rivet_type_id NodeId_type_id = 0x371a59e0;
		constexpr static std::string_view XPos_type_name = "XPos";
		constexpr static rivet::rivet_type_id XPos_type_id = 0xf88aee81;
		constexpr static std::string_view YPos_type_name = "YPos";
		constexpr static rivet::rivet_type_id YPos_type_id = 0x403689e4;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view ConnectedInputs_type_name = "ConnectedInputs";
		constexpr static rivet::rivet_type_id ConnectedInputs_type_id = 0x8ca57bf5;
		constexpr static std::string_view ConnectedOutputs_type_name = "ConnectedOutputs";
		constexpr static rivet::rivet_type_id ConnectedOutputs_type_id = 0x824bee0e;
		constexpr static std::string_view Collapsed_type_name = "Collapsed";
		constexpr static rivet::rivet_type_id Collapsed_type_id = 0xf07e7faf;
		constexpr static std::string_view ActivationChance_type_name = "ActivationChance";
		constexpr static rivet::rivet_type_id ActivationChance_type_id = 0x6240a1e;
		constexpr static std::string_view RandomizeInstance_type_name = "RandomizeInstance";
		constexpr static rivet::rivet_type_id RandomizeInstance_type_id = 0x49dc16;
		constexpr static std::string_view DrawSpawnStyle_type_name = "DrawSpawnStyle";
		constexpr static rivet::rivet_type_id DrawSpawnStyle_type_id = 0x397a98ce;
		constexpr static std::string_view DynamicScaling_type_name = "DynamicScaling";
		constexpr static rivet::rivet_type_id DynamicScaling_type_id = 0xd726cd51;
		constexpr static std::string_view ParticleSpace_type_name = "ParticleSpace";
		constexpr static rivet::rivet_type_id ParticleSpace_type_id = 0xf4f807d8;
		constexpr static std::string_view EmitterType_type_name = "EmitterType";
		constexpr static rivet::rivet_type_id EmitterType_type_id = 0xf5bf036d;
		constexpr static std::string_view MaxActiveParticles_type_name = "MaxActiveParticles";
		constexpr static rivet::rivet_type_id MaxActiveParticles_type_id = 0x4eff65df;
		constexpr static std::string_view MaxParticles_type_name = "MaxParticles";
		constexpr static rivet::rivet_type_id MaxParticles_type_id = 0xd2cfb0ea;
		constexpr static std::string_view InheritScreenColor_type_name = "InheritScreenColor";
		constexpr static rivet::rivet_type_id InheritScreenColor_type_id = 0x63893772;
		constexpr static std::string_view OnDeathSpawnCount_type_name = "OnDeathSpawnCount";
		constexpr static rivet::rivet_type_id OnDeathSpawnCount_type_id = 0x5d61b8b4;
		constexpr static std::string_view EmitterSpaces_type_name = "EmitterSpaces";
		constexpr static rivet::rivet_type_id EmitterSpaces_type_id = 0x64e1100a;
		constexpr static std::string_view Emission_type_name = "Emission";
		constexpr static rivet::rivet_type_id Emission_type_id = 0xa23e184;
		constexpr static std::string_view ParticleRender_type_name = "ParticleRender";
		constexpr static rivet::rivet_type_id ParticleRender_type_id = 0x8877f75;
		constexpr static std::string_view ParticleMotion_type_name = "ParticleMotion";
		constexpr static rivet::rivet_type_id ParticleMotion_type_id = 0x692547f7;
		constexpr static std::string_view InputPort_PerfAttrOverrides_type_name = "InputPort_PerfAttrOverrides";
		constexpr static rivet::rivet_type_id InputPort_PerfAttrOverrides_type_id = 0xd24cc1ba; 

		explicit VisualEffectEmitterNode() = default;
		explicit VisualEffectEmitterNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t NodeId {};
		int32_t XPos {};
		int32_t YPos {};
		std::string_view DisplayName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>> ConnectedInputs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>> ConnectedOutputs {};
		bool Collapsed {};
		float ActivationChance {};
		bool RandomizeInstance {};
		bool DrawSpawnStyle {};
		bool DynamicScaling {};
		rivet::ddl::generated::x8db2fd48 ParticleSpace {};
		rivet::ddl::generated::EmitterType EmitterType {};
		uint32_t MaxActiveParticles {};
		uint32_t MaxParticles {};
		bool InheritScreenColor {};
		uint32_t OnDeathSpawnCount {};
		std::shared_ptr<rivet::ddl::generated::SeparateSpaces> EmitterSpaces {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectEmission> Emission {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectParticleRender> ParticleRender {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectParticleMotion> ParticleMotion {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectPerfAttrOverride> InputPort_PerfAttrOverrides {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectEmitterNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on