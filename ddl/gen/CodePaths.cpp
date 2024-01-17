// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CodePaths.hpp>

namespace rivet::ddl::generated {
	CodePaths::CodePaths([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CodePath = serialized->get_string(CodePath_type_id, {});
		PublishedDirectory = serialized->get_string(PublishedDirectory_type_id, {}); 
	}

	[[nodiscard]] auto
	CodePaths::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CodePaths::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CodePaths> {
		if (incoming_type_id == CodePaths::type_id) {
			return std::make_shared<CodePaths>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
