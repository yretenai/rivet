// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LogInfo.hpp>

namespace rivet::ddl::generated {
	LogInfo::LogInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Indent = serialized->get_uint32(Indent_type_id, 0);
		Text = serialized->get_string(Text_type_id, {}); 
	}

	[[nodiscard]] auto
	LogInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LogInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogInfo> {
		if (incoming_type_id == LogInfo::type_id) {
			return std::make_shared<LogInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
