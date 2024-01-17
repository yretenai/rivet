// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2VfxSubActionDef.hpp>
#include <rivet/ddl/generated/DDLTransform.hpp> 

#include <rivet/ddl/generated/Cinematic2VfxActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2VfxActionDef::Cinematic2VfxActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Time = serialized->get_float(Time_type_id, 0.000000);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000);
		VfxPath = serialized->get_string(VfxPath_type_id, {});
		OffsetTransform = serialized->unwrap_into<rivet::ddl::generated::DDLTransform>(OffsetTransform_type_id);
		AttachToJoint = serialized->get_bool(AttachToJoint_type_id, false);
		LocatorName = serialized->get_string(LocatorName_type_id, {});
		JointName = serialized->get_string(JointName_type_id, {});
		SecondaryActorId = serialized->get_uint64(SecondaryActorId_type_id, 0);
		SecondaryActorLocatorName = serialized->get_string(SecondaryActorLocatorName_type_id, {});
		KillImmediate = serialized->get_bool(KillImmediate_type_id, false);
		PreserveOnJump = serialized->get_bool(PreserveOnJump_type_id, false);
		InstanceCountMax = serialized->get_int32(InstanceCountMax_type_id, 0);
		SubActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2VfxSubActionDef>(SubActions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2VfxActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2VfxActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2VfxActionDef> {
		if (incoming_type_id == Cinematic2VfxActionDef::type_id) {
			return std::make_shared<Cinematic2VfxActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
