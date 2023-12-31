// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RidableJumpData.hpp>
#include <rivet/ddl/generated/RidableGroundSearchData.hpp>
#include <rivet/ddl/generated/Seat.hpp> 

#include <rivet/ddl/generated/RidablePrius.hpp>

namespace rivet::ddl::generated {
	RidablePrius::RidablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseLeftSeats = serialized->get_bool(UseLeftSeats_type_id);
		UseRightSeats = serialized->get_bool(UseRightSeats_type_id);
		AutoDropoff = serialized->get_bool(AutoDropoff_type_id);
		MinTimeBetweenDropoffs = serialized->get_float(MinTimeBetweenDropoffs_type_id);
		MaxTimeBetweenDropoffs = serialized->get_float(MaxTimeBetweenDropoffs_type_id);
		BotAnimSet = serialized->get_string(BotAnimSet_type_id);
		Seats = serialized->unwrap_into_many<rivet::ddl::generated::Seat>(Seats_type_id);
		GroundSearchData = serialized->unwrap_into<rivet::ddl::generated::RidableGroundSearchData>(GroundSearchData_type_id);
		JumpData = serialized->unwrap_into<rivet::ddl::generated::RidableJumpData>(JumpData_type_id); 
	}

	[[nodiscard]] auto
	RidablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RidablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RidablePrius> {
		if (incoming_type_id == RidablePrius::type_id) {
			return std::make_shared<RidablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
