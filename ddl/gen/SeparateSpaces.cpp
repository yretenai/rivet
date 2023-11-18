// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SeparateSpaces.hpp>

namespace rivet::ddl::generated {
	SeparateSpaces::SeparateSpaces([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Direction = serialized->get_enum<rivet::ddl::generated::xfe5100b1>(Direction_type_id, rivet::ddl::generated::xfe5100b1_values);
		Position = serialized->get_enum<rivet::ddl::generated::xfe5100b1>(Position_type_id, rivet::ddl::generated::xfe5100b1_values); 
	}

	[[nodiscard]] auto
	SeparateSpaces::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SeparateSpaces::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SeparateSpaces> {
		if (incoming_type_id == SeparateSpaces::type_id) {
			return std::make_shared<SeparateSpaces>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
