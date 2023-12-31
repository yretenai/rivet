// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SessionWindowSize.hpp>

namespace rivet::ddl::generated {
	SessionWindowSize::SessionWindowSize([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Width = serialized->get_int32(Width_type_id);
		Height = serialized->get_int32(Height_type_id); 
	}

	[[nodiscard]] auto
	SessionWindowSize::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SessionWindowSize::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionWindowSize> {
		if (incoming_type_id == SessionWindowSize::type_id) {
			return std::make_shared<SessionWindowSize>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
