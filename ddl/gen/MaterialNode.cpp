// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeOutputPort.hpp>
#include <rivet/ddl/generated/MaterialNodeInputPort.hpp> 

#include <rivet/ddl/generated/MaterialNode.hpp>

namespace rivet::ddl::generated {
	MaterialNode::MaterialNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Inputs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeInputPort>(Inputs_type_id);
		Outputs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeOutputPort>(Outputs_type_id);
		ShaderGBufferEntry = serialized->get_string(ShaderGBufferEntry_type_id);
		ShaderColorEntry = serialized->get_string(ShaderColorEntry_type_id);
		ShaderGlobalDecl = serialized->get_string(ShaderGlobalDecl_type_id);
		ForceVelocityPass = serialized->get_bool(ForceVelocityPass_type_id);
		ForceForwardPass = serialized->get_bool(ForceForwardPass_type_id);
		ForceHQFrameGrab = serialized->get_bool(ForceHQFrameGrab_type_id);
		TestingOnly = serialized->get_bool(TestingOnly_type_id);
		NoPreview = serialized->get_bool(NoPreview_type_id);
		CustomBRDF = serialized->get_string(CustomBRDF_type_id);
		ShaderLoD = serialized->get_uint32(ShaderLoD_type_id);
		Code = serialized->get_string(Code_type_id);
		Description = serialized->get_string(Description_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		Documentation = serialized->get_string(Documentation_type_id);
		TexturePriority = serialized->get_uint8(TexturePriority_type_id);
		Hidden = serialized->get_bool(Hidden_type_id); 
	}

	[[nodiscard]] auto
	MaterialNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNode> {
		if (incoming_type_id == MaterialNode::type_id) {
			return std::make_shared<MaterialNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
