// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingStimulusListenerAddOnPrius.hpp> 

#include <rivet/ddl/generated/TargetingStimulusListenerAddOnEntry.hpp>

namespace rivet::ddl::generated {
	TargetingStimulusListenerAddOnEntry::TargetingStimulusListenerAddOnEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AddOn = serialized->unwrap_into<rivet::ddl::generated::TargetingStimulusListenerAddOnPrius>(AddOn_type_id); 
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingStimulusListenerAddOnEntry> {
		if (incoming_type_id == TargetingStimulusListenerAddOnEntry::type_id) {
			return std::make_shared<TargetingStimulusListenerAddOnEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
