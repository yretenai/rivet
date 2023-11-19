// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TagsTest.hpp>

namespace rivet::ddl::generated {
	TagsTest::TagsTest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Single = serialized->get_int32(Single_type_id);
		Multi = serialized->get_int32(Multi_type_id);
		SelectPlusA = serialized->get_int32(SelectPlusA_type_id);
		SelectPlusB = serialized->get_int32(SelectPlusB_type_id);
		PropertyDisplayNone = serialized->get_int32(PropertyDisplayNone_type_id);
		PropertyDisplayAssetOnly = serialized->get_int32(PropertyDisplayAssetOnly_type_id);
		PropertyDisplayInstanceOnly = serialized->get_int32(PropertyDisplayInstanceOnly_type_id); 
	}

	[[nodiscard]] auto
	TagsTest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TagsTest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TagsTest> {
		if (incoming_type_id == TagsTest::type_id) {
			return std::make_shared<TagsTest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated