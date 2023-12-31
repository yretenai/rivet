// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnHitEnvironmentNodeDef.hpp>

namespace rivet::ddl::generated {
	OnHitEnvironmentNodeDef::OnHitEnvironmentNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OnHitAnythingNodeDef(serialized) {

	}

	[[nodiscard]] auto
	OnHitEnvironmentNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnHitEnvironmentNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnHitEnvironmentNodeDef> {
		if (incoming_type_id == OnHitEnvironmentNodeDef::type_id) {
			return std::make_shared<OnHitEnvironmentNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
