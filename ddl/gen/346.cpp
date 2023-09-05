// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FalloffData.hpp>

namespace rivet::ddl::generated {
	FalloffData::FalloffData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FalloffStart = serialized->get_float(FalloffStart_type_id);
		FalloffEnd = serialized->get_float(FalloffEnd_type_id);
		FalloffCurve = serialized->get_float(FalloffCurve_type_id);
		FalloffFactor = serialized->get_float(FalloffFactor_type_id);
		ApplyToStatus = serialized->get_bool(ApplyToStatus_type_id); 
	}

	auto
	FalloffData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FalloffData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FalloffData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FalloffData> {
		if (incoming_type_id == FalloffData::type_id) {
			return std::make_shared<FalloffData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
