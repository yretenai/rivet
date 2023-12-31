// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZoneLoadStats.hpp>

namespace rivet::ddl::generated {
	ZoneLoadStats::ZoneLoadStats([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Time = serialized->get_floats(Time_type_id);
		LoadRequested = serialized->get_floats(LoadRequested_type_id);
		LoadFinished = serialized->get_floats(LoadFinished_type_id);
		Initialized = serialized->get_floats(Initialized_type_id);
		Instantiated = serialized->get_floats(Instantiated_type_id);
		InitOverhead = serialized->get_float(InitOverhead_type_id);
		ZoneIds = serialized->get_uint64s(ZoneIds_type_id); 
	}

	[[nodiscard]] auto
	ZoneLoadStats::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZoneLoadStats::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZoneLoadStats> {
		if (incoming_type_id == ZoneLoadStats::type_id) {
			return std::make_shared<ZoneLoadStats>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
