// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupBobData.hpp>

namespace rivet::ddl::generated {
	PickupBobData::PickupBobData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Frequency = serialized->get_float(Frequency_type_id);
		Amplitude = serialized->get_float(Amplitude_type_id);
		Spin = serialized->get_float(Spin_type_id);
		BumpHeightByAmp = serialized->get_bool(BumpHeightByAmp_type_id);
		AllowLOD = serialized->get_bool(AllowLOD_type_id);
		SpinAxis = serialized->get_enum<rivet::ddl::generated::xe09c5937>(SpinAxis_type_id, rivet::ddl::generated::xe09c5937_values); 
	}

	[[nodiscard]] auto
	PickupBobData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupBobData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupBobData> {
		if (incoming_type_id == PickupBobData::type_id) {
			return std::make_shared<PickupBobData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
