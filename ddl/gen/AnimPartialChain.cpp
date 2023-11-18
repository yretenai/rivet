// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimPartialChain.hpp>

namespace rivet::ddl::generated {
	AnimPartialChain::AnimPartialChain([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PartialRootName = serialized->get_string(PartialRootName_type_id);
		PartialRamp = serialized->get_enum<rivet::ddl::generated::xcef7a1a6>(PartialRamp_type_id, rivet::ddl::generated::xcef7a1a6_values);
		IncludeChildren = serialized->get_bool(IncludeChildren_type_id); 
	}

	[[nodiscard]] auto
	AnimPartialChain::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimPartialChain::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimPartialChain> {
		if (incoming_type_id == AnimPartialChain::type_id) {
			return std::make_shared<AnimPartialChain>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
