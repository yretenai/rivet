// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2HideActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2HideActionDef::Cinematic2HideActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Time = serialized->get_float(Time_type_id, 0.000000);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000);
		BlendType = serialized->get_enum<rivet::ddl::generated::x2153dc33>(BlendType_type_id, rivet::ddl::generated::x2153dc33_values, rivet::ddl::generated::x2153dc33::None);
		BlendInSmoothingType = serialized->get_enum<rivet::ddl::generated::x53914cb6>(BlendInSmoothingType_type_id, rivet::ddl::generated::x53914cb6_values, rivet::ddl::generated::x53914cb6::Ease_In);
		BlendInDuration = serialized->get_float(BlendInDuration_type_id, 0.000000);
		BlendOutSmoothingType = serialized->get_enum<rivet::ddl::generated::x53914cb6>(BlendOutSmoothingType_type_id, rivet::ddl::generated::x53914cb6_values, rivet::ddl::generated::x53914cb6::Ease_Out);
		BlendOutDuration = serialized->get_float(BlendOutDuration_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	Cinematic2HideActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2HideActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2HideActionDef> {
		if (incoming_type_id == Cinematic2HideActionDef::type_id) {
			return std::make_shared<Cinematic2HideActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
