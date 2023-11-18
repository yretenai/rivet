// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwarenessDBPrius.hpp>

namespace rivet::ddl::generated {
	AwarenessDBPrius::AwarenessDBPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	AwarenessDBPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwarenessDBPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwarenessDBPrius> {
		if (incoming_type_id == AwarenessDBPrius::type_id) {
			return std::make_shared<AwarenessDBPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
