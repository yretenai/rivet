// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CustomRemapData.hpp> 

#include <rivet/ddl/generated/SaveControlRemapData.hpp>

namespace rivet::ddl::generated {
	SaveControlRemapData::SaveControlRemapData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CurrentPresetID = serialized->get_int32(CurrentPresetID_type_id);
		CurrentCustomRemapSlot = serialized->get_int32(CurrentCustomRemapSlot_type_id);
		CustomRemaps = serialized->unwrap_into_many<rivet::ddl::generated::CustomRemapData>(CustomRemaps_type_id); 
	}

	[[nodiscard]] auto
	SaveControlRemapData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SaveControlRemapData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SaveControlRemapData> {
		if (incoming_type_id == SaveControlRemapData::type_id) {
			return std::make_shared<SaveControlRemapData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated