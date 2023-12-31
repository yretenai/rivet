// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TreeJ.hpp>

namespace rivet::ddl::generated {
	TreeJ::TreeJ([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	TreeJ::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TreeJ::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TreeJ> {
		if (incoming_type_id == TreeJ::type_id) {
			return std::make_shared<TreeJ>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
