// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GPUPerformanceBudgetView.hpp> 

#include <rivet/ddl/generated/GPUPerformanceBudgets.hpp>

namespace rivet::ddl::generated {
	GPUPerformanceBudgets::GPUPerformanceBudgets([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Views = serialized->unwrap_into_many<rivet::ddl::generated::GPUPerformanceBudgetView>(Views_type_id); 
	}

	[[nodiscard]] auto
	GPUPerformanceBudgets::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GPUPerformanceBudgets::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GPUPerformanceBudgets> {
		if (incoming_type_id == GPUPerformanceBudgets::type_id) {
			return std::make_shared<GPUPerformanceBudgets>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated