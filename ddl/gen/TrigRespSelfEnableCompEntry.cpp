// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TrigRespSelfEnableCompEntry.hpp>

namespace rivet::ddl::generated {
	TrigRespSelfEnableCompEntry::TrigRespSelfEnableCompEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableOnTrigger = serialized->get_bool(EnableOnTrigger_type_id);
		RespondToUnTrigger = serialized->get_bool(RespondToUnTrigger_type_id);
		ComponentName = serialized->get_string(ComponentName_type_id); 
	}

	[[nodiscard]] auto
	TrigRespSelfEnableCompEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrigRespSelfEnableCompEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrigRespSelfEnableCompEntry> {
		if (incoming_type_id == TrigRespSelfEnableCompEntry::type_id) {
			return std::make_shared<TrigRespSelfEnableCompEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
