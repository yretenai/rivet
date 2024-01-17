// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BobAndSpinPrius.hpp>

namespace rivet::ddl::generated {
	BobAndSpinPrius::BobAndSpinPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseBob = serialized->get_bool(UseBob_type_id, true);
		Frequency = serialized->get_float(Frequency_type_id, 1.000000);
		Amplitude = serialized->get_float(Amplitude_type_id, 0.250000);
		BumpHeightByAmp = serialized->get_bool(BumpHeightByAmp_type_id, false);
		RadomizeBob = serialized->get_bool(RadomizeBob_type_id, false);
		UseSpin = serialized->get_bool(UseSpin_type_id, true);
		Spin = serialized->get_float(Spin_type_id, 180.000000);
		RandomOrientation = serialized->get_bool(RandomOrientation_type_id, true);
		SpinAxis = serialized->get_enum<rivet::ddl::generated::xe09c5937>(SpinAxis_type_id, rivet::ddl::generated::xe09c5937_values, rivet::ddl::generated::xe09c5937::YAxisWorld);
		ApplyRand2ndRotAxis = serialized->get_bool(ApplyRand2ndRotAxis_type_id, false);
		RandRotAxisSpin = serialized->get_float(RandRotAxisSpin_type_id, 180.000000);
		FullAsync = serialized->get_bool(FullAsync_type_id, false);
		UseRealTime = serialized->get_bool(UseRealTime_type_id, false); 
	}

	[[nodiscard]] auto
	BobAndSpinPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BobAndSpinPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BobAndSpinPrius> {
		if (incoming_type_id == BobAndSpinPrius::type_id) {
			return std::make_shared<BobAndSpinPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
