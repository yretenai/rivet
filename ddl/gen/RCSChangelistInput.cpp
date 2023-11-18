// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSChangelistInput.hpp>

namespace rivet::ddl::generated {
	RCSChangelistInput::RCSChangelistInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Description = serialized->get_string(Description_type_id); 
	}

	[[nodiscard]] auto
	RCSChangelistInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSChangelistInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSChangelistInput> {
		if (incoming_type_id == RCSChangelistInput::type_id) {
			return std::make_shared<RCSChangelistInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
