// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwarenessPartialManagerPrius.hpp>

namespace rivet::ddl::generated {
	AwarenessPartialManagerPrius::AwarenessPartialManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OnPassivePartial = serialized->get_string(OnPassivePartial_type_id, {});
		OnEngagedPartial = serialized->get_string(OnEngagedPartial_type_id, {}); 
	}

	[[nodiscard]] auto
	AwarenessPartialManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwarenessPartialManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwarenessPartialManagerPrius> {
		if (incoming_type_id == AwarenessPartialManagerPrius::type_id) {
			return std::make_shared<AwarenessPartialManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
