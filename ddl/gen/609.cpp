// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShardDetonationData.hpp>

namespace rivet::ddl::generated {
	ShardDetonationData::ShardDetonationData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamagePercent = serialized->get_float(DamagePercent_type_id); 
	}

	auto
	ShardDetonationData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShardDetonationData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShardDetonationData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShardDetonationData> {
		if (incoming_type_id == ShardDetonationData::type_id) {
			return std::make_shared<ShardDetonationData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
