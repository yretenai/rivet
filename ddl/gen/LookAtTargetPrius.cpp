// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookAtTargetPrius.hpp>

namespace rivet::ddl::generated {
	LookAtTargetPrius::LookAtTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingAimAnglePrius(serialized) {

	}

	[[nodiscard]] auto
	LookAtTargetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookAtTargetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookAtTargetPrius> {
		if (incoming_type_id == LookAtTargetPrius::type_id) {
			return std::make_shared<LookAtTargetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated