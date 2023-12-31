// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ComboDisplayDataStringOnly.hpp>

namespace rivet::ddl::generated {
	ComboDisplayDataStringOnly::ComboDisplayDataStringOnly([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComboDisplayDataBase(serialized) {

	}

	[[nodiscard]] auto
	ComboDisplayDataStringOnly::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ComboDisplayDataStringOnly::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComboDisplayDataStringOnly> {
		if (incoming_type_id == ComboDisplayDataStringOnly::type_id) {
			return std::make_shared<ComboDisplayDataStringOnly>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
