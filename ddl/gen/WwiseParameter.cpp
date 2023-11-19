// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseParameter.hpp>

namespace rivet::ddl::generated {
	WwiseParameter::WwiseParameter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ParameterName = serialized->get_string(ParameterName_type_id);
		ParameterId = serialized->get_uint32(ParameterId_type_id);
		ParameterValue = serialized->get_float(ParameterValue_type_id); 
	}

	[[nodiscard]] auto
	WwiseParameter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WwiseParameter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseParameter> {
		if (incoming_type_id == WwiseParameter::type_id) {
			return std::make_shared<WwiseParameter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated