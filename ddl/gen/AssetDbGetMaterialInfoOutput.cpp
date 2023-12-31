// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetDbGetMaterialInfoOutput.hpp>

namespace rivet::ddl::generated {
	AssetDbGetMaterialInfoOutput::AssetDbGetMaterialInfoOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ErrorMessage = serialized->get_string(ErrorMessage_type_id);
		Success = serialized->get_uint8(Success_type_id);
		JsonText = serialized->get_string(JsonText_type_id);
		TimeStampLow = serialized->get_uint32(TimeStampLow_type_id);
		TimeStampHigh = serialized->get_uint32(TimeStampHigh_type_id); 
	}

	[[nodiscard]] auto
	AssetDbGetMaterialInfoOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetDbGetMaterialInfoOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetDbGetMaterialInfoOutput> {
		if (incoming_type_id == AssetDbGetMaterialInfoOutput::type_id) {
			return std::make_shared<AssetDbGetMaterialInfoOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
