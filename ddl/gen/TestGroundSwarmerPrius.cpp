// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestGroundSwarmerData.hpp> 

#include <rivet/ddl/generated/TestGroundSwarmerPrius.hpp>

namespace rivet::ddl::generated {
	TestGroundSwarmerPrius::TestGroundSwarmerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		TestGroundSwarmerData = serialized->unwrap_into<rivet::ddl::generated::TestGroundSwarmerData>(TestGroundSwarmerData_type_id); 
	}

	[[nodiscard]] auto
	TestGroundSwarmerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestGroundSwarmerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestGroundSwarmerPrius> {
		if (incoming_type_id == TestGroundSwarmerPrius::type_id) {
			return std::make_shared<TestGroundSwarmerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
