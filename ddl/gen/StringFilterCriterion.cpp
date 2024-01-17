// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StringFilterCriterion.hpp>

namespace rivet::ddl::generated {
	StringFilterCriterion::StringFilterCriterion([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Test = serialized->get_enum<rivet::ddl::generated::x57689c9c>(Test_type_id, rivet::ddl::generated::x57689c9c_values, rivet::ddl::generated::x57689c9c::Contains);
		Argument = serialized->get_string(Argument_type_id, {}); 
	}

	[[nodiscard]] auto
	StringFilterCriterion::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StringFilterCriterion::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StringFilterCriterion> {
		if (incoming_type_id == StringFilterCriterion::type_id) {
			return std::make_shared<StringFilterCriterion>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
