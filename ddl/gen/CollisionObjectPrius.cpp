// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CollisionObjectPrius.hpp>

namespace rivet::ddl::generated {
	CollisionObjectPrius::CollisionObjectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	CollisionObjectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CollisionObjectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollisionObjectPrius> {
		if (incoming_type_id == CollisionObjectPrius::type_id) {
			return std::make_shared<CollisionObjectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
