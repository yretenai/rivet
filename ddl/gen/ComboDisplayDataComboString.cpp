// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ComboDisplayDataComboString.hpp>

namespace rivet::ddl::generated {
	ComboDisplayDataComboString::ComboDisplayDataComboString([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComboDisplayDataBase(serialized) {

	}

	[[nodiscard]] auto
	ComboDisplayDataComboString::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ComboDisplayDataComboString::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComboDisplayDataComboString> {
		if (incoming_type_id == ComboDisplayDataComboString::type_id) {
			return std::make_shared<ComboDisplayDataComboString>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated