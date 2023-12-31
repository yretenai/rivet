// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RequiredChestKey.hpp>

namespace rivet::ddl::generated {
	RequiredChestKey::RequiredChestKey([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ItemConfig = serialized->get_string(ItemConfig_type_id);
		RemoveWhenUnlocked = serialized->get_bool(RemoveWhenUnlocked_type_id);
		NumRequired = serialized->get_uint16(NumRequired_type_id); 
	}

	[[nodiscard]] auto
	RequiredChestKey::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RequiredChestKey::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RequiredChestKey> {
		if (incoming_type_id == RequiredChestKey::type_id) {
			return std::make_shared<RequiredChestKey>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
