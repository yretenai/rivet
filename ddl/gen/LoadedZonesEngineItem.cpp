// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LoadedZonesEngineItem.hpp>

namespace rivet::ddl::generated {
	LoadedZonesEngineItem::LoadedZonesEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ZoneList = serialized->get_strings(ZoneList_type_id); 
	}

	[[nodiscard]] auto
	LoadedZonesEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoadedZonesEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadedZonesEngineItem> {
		if (incoming_type_id == LoadedZonesEngineItem::type_id) {
			return std::make_shared<LoadedZonesEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
