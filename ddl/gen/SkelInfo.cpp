// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkelJointsNode.hpp>
#include <rivet/ddl/generated/SkelLocatorNode.hpp> 

#include <rivet/ddl/generated/SkelInfo.hpp>

namespace rivet::ddl::generated {
	SkelInfo::SkelInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Locators = serialized->unwrap_into_many<rivet::ddl::generated::SkelLocatorNode>(Locators_type_id);
		Joints = serialized->unwrap_into_many<rivet::ddl::generated::SkelJointsNode>(Joints_type_id); 
	}

	[[nodiscard]] auto
	SkelInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkelInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkelInfo> {
		if (incoming_type_id == SkelInfo::type_id) {
			return std::make_shared<SkelInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated