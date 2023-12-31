// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsLimits.hpp>

namespace rivet::ddl::generated {
	DevstatsLimits::DevstatsLimits([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CommandQueueSize = serialized->get_uint64(CommandQueueSize_type_id);
		MaxRequestSize = serialized->get_uint64(MaxRequestSize_type_id);
		BatchWaitSeconds = serialized->get_float(BatchWaitSeconds_type_id); 
	}

	[[nodiscard]] auto
	DevstatsLimits::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsLimits::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsLimits> {
		if (incoming_type_id == DevstatsLimits::type_id) {
			return std::make_shared<DevstatsLimits>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
