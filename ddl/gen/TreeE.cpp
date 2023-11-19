// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TreeE.hpp>

namespace rivet::ddl::generated {
	TreeE::TreeE([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	TreeE::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TreeE::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TreeE> {
		if (incoming_type_id == TreeE::type_id) {
			return std::make_shared<TreeE>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated