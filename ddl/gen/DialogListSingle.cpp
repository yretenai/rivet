// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogListSingle.hpp>

namespace rivet::ddl::generated {
	DialogListSingle::DialogListSingle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocTag = serialized->get_string(LocTag_type_id, {}); 
	}

	[[nodiscard]] auto
	DialogListSingle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogListSingle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogListSingle> {
		if (incoming_type_id == DialogListSingle::type_id) {
			return std::make_shared<DialogListSingle>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
