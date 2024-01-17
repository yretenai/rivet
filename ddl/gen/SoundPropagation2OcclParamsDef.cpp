// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundPropagation2OcclParamsDef.hpp>

namespace rivet::ddl::generated {
	SoundPropagation2OcclParamsDef::SoundPropagation2OcclParamsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ApplyOcclusion = serialized->get_bool(ApplyOcclusion_type_id, true);
		DirectMaxAttenuationdB = serialized->get_float(DirectMaxAttenuationdB_type_id, -40.000000);
		FilterMaxAttenuationdB = serialized->get_float(FilterMaxAttenuationdB_type_id, -30.000000); 
	}

	[[nodiscard]] auto
	SoundPropagation2OcclParamsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundPropagation2OcclParamsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2OcclParamsDef> {
		if (incoming_type_id == SoundPropagation2OcclParamsDef::type_id) {
			return std::make_shared<SoundPropagation2OcclParamsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
