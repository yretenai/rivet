// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlockOverrideData.hpp>

namespace rivet::ddl::generated {
	FlockOverrideData::FlockOverrideData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Template = serialized->get_string(Template_type_id); 
	}

	[[nodiscard]] auto
	FlockOverrideData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlockOverrideData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlockOverrideData> {
		if (incoming_type_id == FlockOverrideData::type_id) {
			return std::make_shared<FlockOverrideData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
