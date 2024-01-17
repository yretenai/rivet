// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModForwardPrius.hpp>

namespace rivet::ddl::generated {
	AimModForwardPrius::AimModForwardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		ReferenceLocator = serialized->get_string(ReferenceLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	AimModForwardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModForwardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModForwardPrius> {
		if (incoming_type_id == AimModForwardPrius::type_id) {
			return std::make_shared<AimModForwardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
