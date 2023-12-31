// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogGroup.hpp> 

#include <rivet/ddl/generated/DialogSet.hpp>

namespace rivet::ddl::generated {
	DialogSet::DialogSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Group = serialized->unwrap_into<rivet::ddl::generated::DialogGroup>(Group_type_id);
		LoopType = serialized->get_enum<rivet::ddl::generated::x39725a2d>(LoopType_type_id, rivet::ddl::generated::x39725a2d_values); 
	}

	[[nodiscard]] auto
	DialogSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogSet> {
		if (incoming_type_id == DialogSet::type_id) {
			return std::make_shared<DialogSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
