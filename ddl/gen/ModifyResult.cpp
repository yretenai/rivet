// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModifyResult.hpp>

namespace rivet::ddl::generated {
	ModifyResult::ModifyResult([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Token = serialized->get_uint64(Token_type_id);
		Error = serialized->get_field(Error_type_id);
		LastChanged = serialized->get_string(LastChanged_type_id); 
	}

	[[nodiscard]] auto
	ModifyResult::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModifyResult::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModifyResult> {
		if (incoming_type_id == ModifyResult::type_id) {
			return std::make_shared<ModifyResult>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated