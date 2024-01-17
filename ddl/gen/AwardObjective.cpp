// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwardObjective.hpp>

namespace rivet::ddl::generated {
	AwardObjective::AwardObjective([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionName = serialized->get_string(MissionName_type_id, {});
		ObjectiveName = serialized->get_string(ObjectiveName_type_id, {}); 
	}

	[[nodiscard]] auto
	AwardObjective::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardObjective::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardObjective> {
		if (incoming_type_id == AwardObjective::type_id) {
			return std::make_shared<AwardObjective>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
