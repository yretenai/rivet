// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CinematicAttachActionEngineItem.hpp>

namespace rivet::ddl::generated {
	CinematicAttachActionEngineItem::CinematicAttachActionEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Parent = serialized->get_uint64(Parent_type_id, 0); 
	}

	[[nodiscard]] auto
	CinematicAttachActionEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicAttachActionEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicAttachActionEngineItem> {
		if (incoming_type_id == CinematicAttachActionEngineItem::type_id) {
			return std::make_shared<CinematicAttachActionEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
