// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetFileSessionLog.hpp>

namespace rivet::ddl::generated {
	TargetFileSessionLog::TargetFileSessionLog([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Messages = serialized->get_strings(Messages_type_id);
		Levels = serialized->get_int32s(Levels_type_id); 
	}

	[[nodiscard]] auto
	TargetFileSessionLog::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetFileSessionLog::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetFileSessionLog> {
		if (incoming_type_id == TargetFileSessionLog::type_id) {
			return std::make_shared<TargetFileSessionLog>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
