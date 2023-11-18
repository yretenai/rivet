// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RenameTestObj.hpp> 

#include <rivet/ddl/generated/RenameTestData.hpp>

namespace rivet::ddl::generated {
	RenameTestData::RenameTestData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TestObjs = serialized->unwrap_into_many<rivet::ddl::generated::RenameTestObj>(TestObjs_type_id); 
	}

	[[nodiscard]] auto
	RenameTestData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenameTestData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenameTestData> {
		if (incoming_type_id == RenameTestData::type_id) {
			return std::make_shared<RenameTestData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
