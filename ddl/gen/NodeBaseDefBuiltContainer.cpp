// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeBaseDefBuiltContainer.hpp>

namespace rivet::ddl::generated {
	NodeBaseDefBuiltContainer::NodeBaseDefBuiltContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BuiltNodeDataBufferNameHash = serialized->get_uint32(BuiltNodeDataBufferNameHash_type_id, 0);
		FieldNameHash = serialized->get_uint32(FieldNameHash_type_id, 0); 
	}

	[[nodiscard]] auto
	NodeBaseDefBuiltContainer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeBaseDefBuiltContainer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeBaseDefBuiltContainer> {
		if (incoming_type_id == NodeBaseDefBuiltContainer::type_id) {
			return std::make_shared<NodeBaseDefBuiltContainer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
