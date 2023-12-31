// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialVaultTags.hpp>

namespace rivet::ddl::generated {
	MaterialVaultTags::MaterialVaultTags([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Slot = serialized->get_enum<rivet::ddl::generated::x34e3b2d5>(Slot_type_id, rivet::ddl::generated::x34e3b2d5_values); 
	}

	[[nodiscard]] auto
	MaterialVaultTags::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialVaultTags::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialVaultTags> {
		if (incoming_type_id == MaterialVaultTags::type_id) {
			return std::make_shared<MaterialVaultTags>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
