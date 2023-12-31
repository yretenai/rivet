// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RewardRenderModeData.hpp>

namespace rivet::ddl::generated {
	RewardRenderModeData::RewardRenderModeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Pack = serialized->get_enum<rivet::ddl::generated::x84053194>(Pack_type_id, rivet::ddl::generated::x84053194_values);
		EnableIn3DUI = serialized->get_bool(EnableIn3DUI_type_id); 
	}

	[[nodiscard]] auto
	RewardRenderModeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RewardRenderModeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardRenderModeData> {
		if (incoming_type_id == RewardRenderModeData::type_id) {
			return std::make_shared<RewardRenderModeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
