// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogRuleContainer.hpp> 

#include <rivet/ddl/generated/DialogRuleArray.hpp>

namespace rivet::ddl::generated {
	DialogRuleArray::DialogRuleArray([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Rules = serialized->unwrap_into_many<rivet::ddl::generated::DialogRuleContainer>(Rules_type_id); 
	}

	auto
	DialogRuleArray::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DialogRuleArray::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogRuleArray::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogRuleArray> {
		if (incoming_type_id == DialogRuleArray::type_id) {
			return std::make_shared<DialogRuleArray>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
