// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionProtoGrenadePrius.hpp>
#include <rivet/ddl/generated/ShotMotionMrFunGuyPrius.hpp>
#include <rivet/ddl/generated/ShotMotionTopiaryBlasterPrius.hpp>
#include <rivet/ddl/generated/GrenadeShotMotionGoonJetpackPrius.hpp>
#include <rivet/ddl/generated/ShotMotionBouncerPrius.hpp> 

#include <rivet/ddl/generated/GrenadeShotMotionGamePrius.hpp>

namespace rivet::ddl::generated {
	GrenadeShotMotionGamePrius::GrenadeShotMotionGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	GrenadeShotMotionGamePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeShotMotionGamePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeShotMotionGamePrius> {
		if (incoming_type_id == GrenadeShotMotionGamePrius::type_id) {
			return std::make_shared<GrenadeShotMotionGamePrius>(serialized);
		}

		auto ShotMotionBouncerPrius_ptr = ShotMotionBouncerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionBouncerPrius_ptr != nullptr) {
			return ShotMotionBouncerPrius_ptr;
		}

		auto GrenadeShotMotionGoonJetpackPrius_ptr = GrenadeShotMotionGoonJetpackPrius::from_substruct(incoming_type_id, serialized);
		if (GrenadeShotMotionGoonJetpackPrius_ptr != nullptr) {
			return GrenadeShotMotionGoonJetpackPrius_ptr;
		}

		auto ShotMotionTopiaryBlasterPrius_ptr = ShotMotionTopiaryBlasterPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionTopiaryBlasterPrius_ptr != nullptr) {
			return ShotMotionTopiaryBlasterPrius_ptr;
		}

		auto ShotMotionMrFunGuyPrius_ptr = ShotMotionMrFunGuyPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionMrFunGuyPrius_ptr != nullptr) {
			return ShotMotionMrFunGuyPrius_ptr;
		}

		auto ShotMotionProtoGrenadePrius_ptr = ShotMotionProtoGrenadePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionProtoGrenadePrius_ptr != nullptr) {
			return ShotMotionProtoGrenadePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
