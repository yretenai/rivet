// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PanCameraPrius.hpp>
#include <rivet/ddl/generated/FixedCameraPrius.hpp> 

#include <rivet/ddl/generated/PlacedCameraPrius.hpp>

namespace rivet::ddl::generated {
	PlacedCameraPrius::PlacedCameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {
		ActivationVolume = serialized->get_uint64(ActivationVolume_type_id); 
	}

	auto
	PlacedCameraPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PlacedCameraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlacedCameraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlacedCameraPrius> {
		if (incoming_type_id == PlacedCameraPrius::type_id) {
			return std::make_shared<PlacedCameraPrius>(serialized);
		}

		auto PanCameraPrius_ptr = PanCameraPrius::from_substruct(incoming_type_id, serialized);
		if (PanCameraPrius_ptr != nullptr) {
			return PanCameraPrius_ptr;
		}

		auto FixedCameraPrius_ptr = FixedCameraPrius::from_substruct(incoming_type_id, serialized);
		if (FixedCameraPrius_ptr != nullptr) {
			return FixedCameraPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
