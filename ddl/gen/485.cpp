// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NoAccuracyModifierPrius.hpp>

namespace rivet::ddl::generated {
	NoAccuracyModifierPrius::NoAccuracyModifierPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponAccuracyBasePrius(serialized) {

	}

	auto
	NoAccuracyModifierPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	NoAccuracyModifierPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NoAccuracyModifierPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NoAccuracyModifierPrius> {
		if (incoming_type_id == NoAccuracyModifierPrius::type_id) {
			return std::make_shared<NoAccuracyModifierPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
