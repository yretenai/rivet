// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModifyNavPrius.hpp>

namespace rivet::ddl::generated {
	ModifyNavPrius::ModifyNavPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TriFlags = serialized->get_bitset<rivet::ddl::generated::xc204b456>(TriFlags_type_id, rivet::ddl::generated::xc204b456_values); 
	}

	[[nodiscard]] auto
	ModifyNavPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModifyNavPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModifyNavPrius> {
		if (incoming_type_id == ModifyNavPrius::type_id) {
			return std::make_shared<ModifyNavPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
