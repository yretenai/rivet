// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CodePaths.hpp> 

#include <rivet/ddl/generated/CodeData.hpp>

namespace rivet::ddl::generated {
	CodeData::CodeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DefaultPublishedDirectory = serialized->get_string(DefaultPublishedDirectory_type_id);
		Paths = serialized->unwrap_into_many<rivet::ddl::generated::CodePaths>(Paths_type_id); 
	}

	[[nodiscard]] auto
	CodeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CodeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CodeData> {
		if (incoming_type_id == CodeData::type_id) {
			return std::make_shared<CodeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
