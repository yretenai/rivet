// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LogQueryDisableLoggerOutput.hpp>

namespace rivet::ddl::generated {
	LogQueryDisableLoggerOutput::LogQueryDisableLoggerOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	LogQueryDisableLoggerOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LogQueryDisableLoggerOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogQueryDisableLoggerOutput> {
		if (incoming_type_id == LogQueryDisableLoggerOutput::type_id) {
			return std::make_shared<LogQueryDisableLoggerOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
