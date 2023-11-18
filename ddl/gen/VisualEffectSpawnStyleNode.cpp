// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectTransform.hpp>
#include <rivet/ddl/generated/SpawnDirections.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectSpawnStyleNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectSpawnStyleNode::VisualEffectSpawnStyleNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		DirectionStyle = serialized->get_enum<rivet::ddl::generated::x3df0267a>(DirectionStyle_type_id, rivet::ddl::generated::x3df0267a_values);
		PositionStyle = serialized->get_enum<rivet::ddl::generated::xcdf4306c>(PositionStyle_type_id, rivet::ddl::generated::xcdf4306c_values);
		ShapeStyle = serialized->get_enum<rivet::ddl::generated::x81b59607>(ShapeStyle_type_id, rivet::ddl::generated::x81b59607_values);
		ShapeModel = serialized->get_string(ShapeModel_type_id);
		Length = serialized->get_float(Length_type_id);
		Radius = serialized->get_float(Radius_type_id);
		BoxWidth = serialized->get_float(BoxWidth_type_id);
		BoxHeight = serialized->get_float(BoxHeight_type_id);
		BoxDepth = serialized->get_float(BoxDepth_type_id);
		OriginOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(OriginOffset_type_id);
		MaxAngle = serialized->get_float(MaxAngle_type_id);
		MinAngle = serialized->get_float(MinAngle_type_id);
		MaxSweep = serialized->get_float(MaxSweep_type_id);
		MinSweep = serialized->get_float(MinSweep_type_id);
		SphericalPitch = serialized->get_float(SphericalPitch_type_id);
		DirectionSpread = serialized->get_float(DirectionSpread_type_id);
		SpawnDirections = serialized->unwrap_into<rivet::ddl::generated::SpawnDirections>(SpawnDirections_type_id);
		InputPort_UDTransform = serialized->unwrap_into<rivet::ddl::generated::VisualEffectTransform>(InputPort_UDTransform_type_id);
		UDSpace = serialized->get_enum<rivet::ddl::generated::x45f5c485>(UDSpace_type_id, rivet::ddl::generated::x45f5c485_values); 
	}

	[[nodiscard]] auto
	VisualEffectSpawnStyleNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectSpawnStyleNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectSpawnStyleNode> {
		if (incoming_type_id == VisualEffectSpawnStyleNode::type_id) {
			return std::make_shared<VisualEffectSpawnStyleNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
