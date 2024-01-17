// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BounceCenterRightEvent.hpp>
#include <rivet/ddl/generated/BounceBackRightEvent.hpp>
#include <rivet/ddl/generated/BounceFrontMiddleEvent.hpp>
#include <rivet/ddl/generated/BounceCenterLeftEvent.hpp>
#include <rivet/ddl/generated/BounceCenterMiddleEvent.hpp>
#include <rivet/ddl/generated/BounceBackMiddleEvent.hpp>
#include <rivet/ddl/generated/BounceFrontRightEvent.hpp>
#include <rivet/ddl/generated/BounceFrontLeftEvent.hpp>
#include <rivet/ddl/generated/BounceBackLeftEvent.hpp> 

#include <rivet/ddl/generated/BounceEvent.hpp>

namespace rivet::ddl::generated {
	BounceEvent::BounceEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None);
		FallHeight = serialized->get_float(FallHeight_type_id, 0.000000);
		LaunchSpeed = serialized->get_float(LaunchSpeed_type_id, 0.000000);
		HasBonusFromButtonPress = serialized->get_bool(HasBonusFromButtonPress_type_id, false); 
	}

	[[nodiscard]] auto
	BounceEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BounceEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BounceEvent> {
		if (incoming_type_id == BounceEvent::type_id) {
			return std::make_shared<BounceEvent>(serialized);
		}

		auto BounceBackLeftEvent_ptr = BounceBackLeftEvent::from_substruct(incoming_type_id, serialized);
		if (BounceBackLeftEvent_ptr != nullptr) {
			return BounceBackLeftEvent_ptr;
		}

		auto BounceFrontRightEvent_ptr = BounceFrontRightEvent::from_substruct(incoming_type_id, serialized);
		if (BounceFrontRightEvent_ptr != nullptr) {
			return BounceFrontRightEvent_ptr;
		}

		auto BounceCenterLeftEvent_ptr = BounceCenterLeftEvent::from_substruct(incoming_type_id, serialized);
		if (BounceCenterLeftEvent_ptr != nullptr) {
			return BounceCenterLeftEvent_ptr;
		}

		auto BounceFrontMiddleEvent_ptr = BounceFrontMiddleEvent::from_substruct(incoming_type_id, serialized);
		if (BounceFrontMiddleEvent_ptr != nullptr) {
			return BounceFrontMiddleEvent_ptr;
		}

		auto BounceFrontLeftEvent_ptr = BounceFrontLeftEvent::from_substruct(incoming_type_id, serialized);
		if (BounceFrontLeftEvent_ptr != nullptr) {
			return BounceFrontLeftEvent_ptr;
		}

		auto BounceBackRightEvent_ptr = BounceBackRightEvent::from_substruct(incoming_type_id, serialized);
		if (BounceBackRightEvent_ptr != nullptr) {
			return BounceBackRightEvent_ptr;
		}

		auto BounceBackMiddleEvent_ptr = BounceBackMiddleEvent::from_substruct(incoming_type_id, serialized);
		if (BounceBackMiddleEvent_ptr != nullptr) {
			return BounceBackMiddleEvent_ptr;
		}

		auto BounceCenterMiddleEvent_ptr = BounceCenterMiddleEvent::from_substruct(incoming_type_id, serialized);
		if (BounceCenterMiddleEvent_ptr != nullptr) {
			return BounceCenterMiddleEvent_ptr;
		}

		auto BounceCenterRightEvent_ptr = BounceCenterRightEvent::from_substruct(incoming_type_id, serialized);
		if (BounceCenterRightEvent_ptr != nullptr) {
			return BounceCenterRightEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
