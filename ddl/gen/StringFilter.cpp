// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StringFilterCriterion.hpp> 

#include <rivet/ddl/generated/StringFilter.hpp>

namespace rivet::ddl::generated {
	StringFilter::StringFilter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Criteria = serialized->unwrap_into_many<rivet::ddl::generated::StringFilterCriterion>(Criteria_type_id); 
	}

	[[nodiscard]] auto
	StringFilter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StringFilter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StringFilter> {
		if (incoming_type_id == StringFilter::type_id) {
			return std::make_shared<StringFilter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
