// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EnvelopeFloatDef.hpp> 

#include <rivet/ddl/generated/ModelSplineEnvelopeFloatDef.hpp>

namespace rivet::ddl::generated {
	ModelSplineEnvelopeFloatDef::ModelSplineEnvelopeFloatDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BaseValue = serialized->get_float(BaseValue_type_id);
		Envelope = serialized->unwrap_into<rivet::ddl::generated::EnvelopeFloatDef>(Envelope_type_id); 
	}

	[[nodiscard]] auto
	ModelSplineEnvelopeFloatDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSplineEnvelopeFloatDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSplineEnvelopeFloatDef> {
		if (incoming_type_id == ModelSplineEnvelopeFloatDef::type_id) {
			return std::make_shared<ModelSplineEnvelopeFloatDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
