// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PostOffsetsPrius.hpp>

namespace rivet::ddl::generated {
	PostOffsetsPrius::PostOffsetsPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CenterLocatorHash = serialized->get_uint32(CenterLocatorHash_type_id); 
	}

	[[nodiscard]] auto
	PostOffsetsPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PostOffsetsPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PostOffsetsPrius> {
		if (incoming_type_id == PostOffsetsPrius::type_id) {
			return std::make_shared<PostOffsetsPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
