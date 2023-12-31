// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiAttachEffectsPrius.hpp>

namespace rivet::ddl::generated {
	MultiAttachEffectsPrius::MultiAttachEffectsPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocatorNameTemplate = serialized->get_string(LocatorNameTemplate_type_id);
		FirstLocatorNumber = serialized->get_uint32(FirstLocatorNumber_type_id);
		LastLocatorNumber = serialized->get_uint32(LastLocatorNumber_type_id); 
	}

	[[nodiscard]] auto
	MultiAttachEffectsPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiAttachEffectsPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiAttachEffectsPrius> {
		if (incoming_type_id == MultiAttachEffectsPrius::type_id) {
			return std::make_shared<MultiAttachEffectsPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
