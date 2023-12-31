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

#include <rivet/ddl/generated/enums/ChunkType.hpp>
#include <rivet/ddl/generated/enums/x1484c09f.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ChunkSpawnParams : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChunkSpawnParams";
		constexpr static rivet::rivet_type_id type_id = 0xeb256d49;

		constexpr static std::string_view PosMode_type_name = "PosMode";
		constexpr static rivet::rivet_type_id PosMode_type_id = 0x21827c74;
		constexpr static std::string_view ChunkType_type_name = "ChunkType";
		constexpr static rivet::rivet_type_id ChunkType_type_id = 0x6df07d3c;
		constexpr static std::string_view LinearVelocityMin_type_name = "LinearVelocityMin";
		constexpr static rivet::rivet_type_id LinearVelocityMin_type_id = 0xc3c6f33a;
		constexpr static std::string_view LinearVelocityMax_type_name = "LinearVelocityMax";
		constexpr static rivet::rivet_type_id LinearVelocityMax_type_id = 0xffcbcc63;
		constexpr static std::string_view ForceUpwardVelocity_type_name = "ForceUpwardVelocity";
		constexpr static rivet::rivet_type_id ForceUpwardVelocity_type_id = 0x724241ea;
		constexpr static std::string_view UpwardBias_type_name = "UpwardBias";
		constexpr static rivet::rivet_type_id UpwardBias_type_id = 0xba8203a0;
		constexpr static std::string_view AngularVelocityMin_type_name = "AngularVelocityMin";
		constexpr static rivet::rivet_type_id AngularVelocityMin_type_id = 0x4cbe990d;
		constexpr static std::string_view AngularVelocityMax_type_name = "AngularVelocityMax";
		constexpr static rivet::rivet_type_id AngularVelocityMax_type_id = 0x70b3a654;
		constexpr static std::string_view LifetimeMin_type_name = "LifetimeMin";
		constexpr static rivet::rivet_type_id LifetimeMin_type_id = 0x1ae401c6;
		constexpr static std::string_view LifetimeMax_type_name = "LifetimeMax";
		constexpr static rivet::rivet_type_id LifetimeMax_type_id = 0x26e93e9f;
		constexpr static std::string_view FastDebrisPercent_type_name = "FastDebrisPercent";
		constexpr static rivet::rivet_type_id FastDebrisPercent_type_id = 0xf16bf9ce;
		constexpr static std::string_view BiasVector_type_name = "BiasVector";
		constexpr static rivet::rivet_type_id BiasVector_type_id = 0x71af53a0;
		constexpr static std::string_view BiasVectorStrength_type_name = "BiasVectorStrength";
		constexpr static rivet::rivet_type_id BiasVectorStrength_type_id = 0xde652205;
		constexpr static std::string_view EnforceBiasVectorPlane_type_name = "EnforceBiasVectorPlane";
		constexpr static rivet::rivet_type_id EnforceBiasVectorPlane_type_id = 0xc1683549; 

		explicit ChunkSpawnParams() = default;
		explicit ChunkSpawnParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x1484c09f PosMode {};
		rivet::ddl::generated::ChunkType ChunkType {};
		float LinearVelocityMin {};
		float LinearVelocityMax {};
		bool ForceUpwardVelocity {};
		float UpwardBias {};
		float AngularVelocityMin {};
		float AngularVelocityMax {};
		float LifetimeMin {};
		float LifetimeMax {};
		float FastDebrisPercent {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> BiasVector {};
		float BiasVectorStrength {};
		bool EnforceBiasVectorPlane {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkSpawnParams>;
	};
} // namespace rivet::ddl::generated

// clang-format on
