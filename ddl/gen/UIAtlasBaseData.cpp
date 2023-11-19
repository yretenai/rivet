// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DrawTextViewData.hpp> 

#include <rivet/ddl/generated/UIAtlasBaseData.hpp>

namespace rivet::ddl::generated {
	UIAtlasBaseData::UIAtlasBaseData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIViewBaseData(serialized) {

	}

	[[nodiscard]] auto
	UIAtlasBaseData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIAtlasBaseData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIAtlasBaseData> {
		if (incoming_type_id == UIAtlasBaseData::type_id) {
			return std::make_shared<UIAtlasBaseData>(serialized);
		}

		auto DrawTextViewData_ptr = DrawTextViewData::from_substruct(incoming_type_id, serialized);
		if (DrawTextViewData_ptr != nullptr) {
			return DrawTextViewData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated