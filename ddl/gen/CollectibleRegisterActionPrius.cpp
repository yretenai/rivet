// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CollectibleTypeDenum.hpp> 

#include <rivet/ddl/generated/CollectibleRegisterActionPrius.hpp>

namespace rivet::ddl::generated {
	CollectibleRegisterActionPrius::CollectibleRegisterActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		CollectibleType = serialized->unwrap_into<rivet::ddl::generated::CollectibleTypeDenum>(CollectibleType_type_id); 
	}

	[[nodiscard]] auto
	CollectibleRegisterActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CollectibleRegisterActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleRegisterActionPrius> {
		if (incoming_type_id == CollectibleRegisterActionPrius::type_id) {
			return std::make_shared<CollectibleRegisterActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
