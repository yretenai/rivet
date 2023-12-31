// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModAlignedOffsetPrius.hpp>

namespace rivet::ddl::generated {
	AimModAlignedOffsetPrius::AimModAlignedOffsetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		OffsetAmountForward = serialized->get_float(OffsetAmountForward_type_id);
		OffsetAmountLeft = serialized->get_float(OffsetAmountLeft_type_id);
		OffsetAmountUp = serialized->get_float(OffsetAmountUp_type_id);
		ClampToFrontOfShooter = serialized->get_bool(ClampToFrontOfShooter_type_id);
		ClampFrontOffset = serialized->get_float(ClampFrontOffset_type_id); 
	}

	[[nodiscard]] auto
	AimModAlignedOffsetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModAlignedOffsetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModAlignedOffsetPrius> {
		if (incoming_type_id == AimModAlignedOffsetPrius::type_id) {
			return std::make_shared<AimModAlignedOffsetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
