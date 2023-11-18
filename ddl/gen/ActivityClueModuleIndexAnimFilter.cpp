// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityClueModuleIndexAnimFilter.hpp>

namespace rivet::ddl::generated {
	ActivityClueModuleIndexAnimFilter::ActivityClueModuleIndexAnimFilter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimIndexStart = serialized->get_enum<rivet::ddl::generated::x85cb9e0e>(AnimIndexStart_type_id, rivet::ddl::generated::x85cb9e0e_values);
		AnimIndexMax = serialized->get_enum<rivet::ddl::generated::x85cb9e0e>(AnimIndexMax_type_id, rivet::ddl::generated::x85cb9e0e_values);
		ApplicableDrivers = serialized->get_strings(ApplicableDrivers_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueModuleIndexAnimFilter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueModuleIndexAnimFilter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueModuleIndexAnimFilter> {
		if (incoming_type_id == ActivityClueModuleIndexAnimFilter::type_id) {
			return std::make_shared<ActivityClueModuleIndexAnimFilter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
