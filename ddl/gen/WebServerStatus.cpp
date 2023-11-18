// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WebServerStatus.hpp>

namespace rivet::ddl::generated {
	WebServerStatus::WebServerStatus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ThreadCount = serialized->get_uint32(ThreadCount_type_id); 
	}

	[[nodiscard]] auto
	WebServerStatus::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WebServerStatus::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WebServerStatus> {
		if (incoming_type_id == WebServerStatus::type_id) {
			return std::make_shared<WebServerStatus>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
