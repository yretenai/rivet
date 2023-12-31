// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemColorOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemColorOverride::SkinItemColorOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ColorChannels = serialized->get_enum<rivet::ddl::generated::x3126d105>(ColorChannels_type_id, rivet::ddl::generated::x3126d105_values);
		ColorConstantName = serialized->get_string(ColorConstantName_type_id);
		R = serialized->get_uint8(R_type_id);
		G = serialized->get_uint8(G_type_id);
		B = serialized->get_uint8(B_type_id);
		ColorConfig = serialized->get_string(ColorConfig_type_id);
		ColorConfigName = serialized->get_string(ColorConfigName_type_id); 
	}

	[[nodiscard]] auto
	SkinItemColorOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemColorOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemColorOverride> {
		if (incoming_type_id == SkinItemColorOverride::type_id) {
			return std::make_shared<SkinItemColorOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
