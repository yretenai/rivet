// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimatedBouncyPrius.hpp>

namespace rivet::ddl::generated {
	AnimatedBouncyPrius::AnimatedBouncyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TrampolinePrius(serialized) {

	}

	[[nodiscard]] auto
	AnimatedBouncyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimatedBouncyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimatedBouncyPrius> {
		if (incoming_type_id == AnimatedBouncyPrius::type_id) {
			return std::make_shared<AnimatedBouncyPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated