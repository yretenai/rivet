// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ErrorComponentPrius.hpp>

namespace rivet::ddl::generated {
	ErrorComponentPrius::ErrorComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ErrorText = serialized->get_strings(ErrorText_type_id); 
	}

	[[nodiscard]] auto
	ErrorComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ErrorComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ErrorComponentPrius> {
		if (incoming_type_id == ErrorComponentPrius::type_id) {
			return std::make_shared<ErrorComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
