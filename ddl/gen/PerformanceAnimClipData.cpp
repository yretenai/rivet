// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerformanceAnimClipData.hpp>

namespace rivet::ddl::generated {
	PerformanceAnimClipData::PerformanceAnimClipData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimClipPath = serialized->get_string(AnimClipPath_type_id);
		DurationChecked = serialized->get_uint8(DurationChecked_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	PerformanceAnimClipData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerformanceAnimClipData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformanceAnimClipData> {
		if (incoming_type_id == PerformanceAnimClipData::type_id) {
			return std::make_shared<PerformanceAnimClipData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
