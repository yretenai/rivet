// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClosestPointOnNavDeferredActionPrius.hpp>

namespace rivet::ddl::generated {
	ClosestPointOnNavDeferredActionPrius::ClosestPointOnNavDeferredActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Nav);
		NavType = serialized->get_enum<rivet::ddl::generated::xdcbe36a2>(NavType_type_id, rivet::ddl::generated::xdcbe36a2_values, rivet::ddl::generated::xdcbe36a2::MeshStandard);
		IncludeFlags = serialized->get_bitset<rivet::ddl::generated::xd0e37317>(IncludeFlags_type_id, rivet::ddl::generated::xd0e37317_values, 1);
		ExcludeFlags = serialized->get_bitset<rivet::ddl::generated::xd0e37317>(ExcludeFlags_type_id, rivet::ddl::generated::xd0e37317_values, 0); 
	}

	[[nodiscard]] auto
	ClosestPointOnNavDeferredActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClosestPointOnNavDeferredActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClosestPointOnNavDeferredActionPrius> {
		if (incoming_type_id == ClosestPointOnNavDeferredActionPrius::type_id) {
			return std::make_shared<ClosestPointOnNavDeferredActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
