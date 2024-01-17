// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BoltShowerPrius.hpp>

namespace rivet::ddl::generated {
	BoltShowerPrius::BoltShowerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Duration = serialized->get_float(Duration_type_id, 5.000000);
		SpawnCount = serialized->get_uint32(SpawnCount_type_id, 250); 
	}

	[[nodiscard]] auto
	BoltShowerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BoltShowerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BoltShowerPrius> {
		if (incoming_type_id == BoltShowerPrius::type_id) {
			return std::make_shared<BoltShowerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
