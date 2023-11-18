// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerformanceSelectionIndices.hpp>

namespace rivet::ddl::generated {
	PerformanceSelectionIndices::PerformanceSelectionIndices([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Index = serialized->get_uint32(Index_type_id);
		ParentIndex = serialized->get_uint32(ParentIndex_type_id); 
	}

	[[nodiscard]] auto
	PerformanceSelectionIndices::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerformanceSelectionIndices::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformanceSelectionIndices> {
		if (incoming_type_id == PerformanceSelectionIndices::type_id) {
			return std::make_shared<PerformanceSelectionIndices>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
