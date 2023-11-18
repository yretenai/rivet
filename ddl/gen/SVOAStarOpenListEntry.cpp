// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SVOAStarOpenListEntry.hpp>

namespace rivet::ddl::generated {
	SVOAStarOpenListEntry::SVOAStarOpenListEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FValue = serialized->get_float(FValue_type_id);
		Handle = serialized->get_uint64(Handle_type_id); 
	}

	[[nodiscard]] auto
	SVOAStarOpenListEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOAStarOpenListEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOAStarOpenListEntry> {
		if (incoming_type_id == SVOAStarOpenListEntry::type_id) {
			return std::make_shared<SVOAStarOpenListEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
