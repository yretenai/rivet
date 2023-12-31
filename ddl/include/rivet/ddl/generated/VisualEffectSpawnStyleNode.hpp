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

#include <rivet/ddl/generated/enums/x45f5c485.hpp>
#include <rivet/ddl/generated/enums/x81b59607.hpp>
#include <rivet/ddl/generated/enums/xcdf4306c.hpp>
#include <rivet/ddl/generated/enums/x3df0267a.hpp> 

namespace rivet::ddl::generated {
	struct VisualEffectTransform;
	struct SpawnDirections;
	struct DDLVector3;
	struct VisualEffectNodeConnectedOutputPort;
	struct VisualEffectNodeConnectedInputPort; 

	struct RIVET_DDL_SHARED VisualEffectSpawnStyleNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectSpawnStyleNode";
		constexpr static rivet::rivet_type_id type_id = 0x4ec46cc3;

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
		constexpr static std::string_view DirectionStyle_type_name = "DirectionStyle";
		constexpr static rivet::rivet_type_id DirectionStyle_type_id = 0x5563d999;
		constexpr static std::string_view PositionStyle_type_name = "PositionStyle";
		constexpr static rivet::rivet_type_id PositionStyle_type_id = 0x83b82bbe;
		constexpr static std::string_view ShapeStyle_type_name = "ShapeStyle";
		constexpr static rivet::rivet_type_id ShapeStyle_type_id = 0x5e37a5fc;
		constexpr static std::string_view ShapeModel_type_name = "ShapeModel";
		constexpr static rivet::rivet_type_id ShapeModel_type_id = 0xba1f6f4f;
		constexpr static std::string_view Length_type_name = "Length";
		constexpr static rivet::rivet_type_id Length_type_id = 0x3f05d0d5;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view BoxWidth_type_name = "BoxWidth";
		constexpr static rivet::rivet_type_id BoxWidth_type_id = 0x1c9beb49;
		constexpr static std::string_view BoxHeight_type_name = "BoxHeight";
		constexpr static rivet::rivet_type_id BoxHeight_type_id = 0x830e4f41;
		constexpr static std::string_view BoxDepth_type_name = "BoxDepth";
		constexpr static rivet::rivet_type_id BoxDepth_type_id = 0x6a22b20f;
		constexpr static std::string_view OriginOffset_type_name = "OriginOffset";
		constexpr static rivet::rivet_type_id OriginOffset_type_id = 0xaa6ac71e;
		constexpr static std::string_view MaxAngle_type_name = "MaxAngle";
		constexpr static rivet::rivet_type_id MaxAngle_type_id = 0x191f829e;
		constexpr static std::string_view MinAngle_type_name = "MinAngle";
		constexpr static rivet::rivet_type_id MinAngle_type_id = 0xff7f2d7f;
		constexpr static std::string_view MaxSweep_type_name = "MaxSweep";
		constexpr static rivet::rivet_type_id MaxSweep_type_id = 0x91b5d5a5;
		constexpr static std::string_view MinSweep_type_name = "MinSweep";
		constexpr static rivet::rivet_type_id MinSweep_type_id = 0x77d57a44;
		constexpr static std::string_view SphericalPitch_type_name = "SphericalPitch";
		constexpr static rivet::rivet_type_id SphericalPitch_type_id = 0x8e576947;
		constexpr static std::string_view DirectionSpread_type_name = "DirectionSpread";
		constexpr static rivet::rivet_type_id DirectionSpread_type_id = 0x8a653232;
		constexpr static std::string_view SpawnDirections_type_name = "SpawnDirections";
		constexpr static rivet::rivet_type_id SpawnDirections_type_id = 0x4dec0a2e;
		constexpr static std::string_view InputPort_UDTransform_type_name = "InputPort_UDTransform";
		constexpr static rivet::rivet_type_id InputPort_UDTransform_type_id = 0x1986ab08;
		constexpr static std::string_view UDSpace_type_name = "UDSpace";
		constexpr static rivet::rivet_type_id UDSpace_type_id = 0x988e1293; 

		explicit VisualEffectSpawnStyleNode() = default;
		explicit VisualEffectSpawnStyleNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t NodeId {};
		int32_t XPos {};
		int32_t YPos {};
		std::string_view DisplayName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>> ConnectedInputs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>> ConnectedOutputs {};
		rivet::ddl::generated::x3df0267a DirectionStyle {};
		rivet::ddl::generated::xcdf4306c PositionStyle {};
		rivet::ddl::generated::x81b59607 ShapeStyle {};
		std::string_view ShapeModel {};
		float Length {};
		float Radius {};
		float BoxWidth {};
		float BoxHeight {};
		float BoxDepth {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> OriginOffset {};
		float MaxAngle {};
		float MinAngle {};
		float MaxSweep {};
		float MinSweep {};
		float SphericalPitch {};
		float DirectionSpread {};
		std::shared_ptr<rivet::ddl::generated::SpawnDirections> SpawnDirections {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectTransform> InputPort_UDTransform {};
		rivet::ddl::generated::x45f5c485 UDSpace {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectSpawnStyleNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on
