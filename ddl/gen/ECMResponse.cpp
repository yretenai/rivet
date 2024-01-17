// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMFieldMap.hpp> 

#include <rivet/ddl/generated/ECMResponse.hpp>

namespace rivet::ddl::generated {
	ECMResponse::ECMResponse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroupIndex = serialized->get_uint8(GroupIndex_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		Type = serialized->get_enum<rivet::ddl::generated::x7d682dac>(Type_type_id, rivet::ddl::generated::x7d682dac_values, rivet::ddl::generated::x7d682dac::VFX_KeyFrame_Modifier);
		FieldMap = serialized->unwrap_into_many<rivet::ddl::generated::ECMFieldMap>(FieldMap_type_id);
		IsValid = serialized->get_bool(IsValid_type_id, true); 
	}

	[[nodiscard]] auto
	ECMResponse::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ECMResponse::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ECMResponse> {
		if (incoming_type_id == ECMResponse::type_id) {
			return std::make_shared<ECMResponse>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
