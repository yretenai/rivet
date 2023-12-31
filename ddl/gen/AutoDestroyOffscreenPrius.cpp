// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AutoDestroyOffscreenPrius.hpp>

namespace rivet::ddl::generated {
	AutoDestroyOffscreenPrius::AutoDestroyOffscreenPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TimeOffscreen = serialized->get_float(TimeOffscreen_type_id);
		ResetTimerOnScreen = serialized->get_bool(ResetTimerOnScreen_type_id); 
	}

	[[nodiscard]] auto
	AutoDestroyOffscreenPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AutoDestroyOffscreenPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoDestroyOffscreenPrius> {
		if (incoming_type_id == AutoDestroyOffscreenPrius::type_id) {
			return std::make_shared<AutoDestroyOffscreenPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
