// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionActorData.hpp>

namespace rivet::ddl::generated {
	DimensionActorData::DimensionActorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		ActorUID = serialized->get_uint64(ActorUID_type_id, 0ull); 
	}

	[[nodiscard]] auto
	DimensionActorData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionActorData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionActorData> {
		if (incoming_type_id == DimensionActorData::type_id) {
			return std::make_shared<DimensionActorData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
