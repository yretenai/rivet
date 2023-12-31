// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RequestProcessorStatus.hpp>

namespace rivet::ddl::generated {
	RequestProcessorStatus::RequestProcessorStatus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CountFileSessions = serialized->get_int32(CountFileSessions_type_id);
		CountLoadListSessions = serialized->get_int32(CountLoadListSessions_type_id); 
	}

	[[nodiscard]] auto
	RequestProcessorStatus::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RequestProcessorStatus::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RequestProcessorStatus> {
		if (incoming_type_id == RequestProcessorStatus::type_id) {
			return std::make_shared<RequestProcessorStatus>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
