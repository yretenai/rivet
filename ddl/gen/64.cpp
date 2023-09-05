// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectPixelizedPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectPixelizedPrius::StatusEffectPixelizedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {

	}

	auto
	StatusEffectPixelizedPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StatusEffectPixelizedPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectPixelizedPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectPixelizedPrius> {
		if (incoming_type_id == StatusEffectPixelizedPrius::type_id) {
			return std::make_shared<StatusEffectPixelizedPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
