// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EditorRenderSettings2.hpp>

namespace rivet::ddl::generated {
	EditorRenderSettings2::EditorRenderSettings2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DimUnselected = serialized->get_bool(DimUnselected_type_id, false);
		LgcToolMode = serialized->get_enum<rivet::ddl::generated::LgcToolModes>(LgcToolMode_type_id, rivet::ddl::generated::LgcToolModes_values, rivet::ddl::generated::LgcToolModes::LGC_2);
		HighQualityLgCapture = serialized->get_bool(HighQualityLgCapture_type_id, false);
		LgcBounceCount = serialized->get_int32(LgcBounceCount_type_id, 1);
		ShowSelectionAABB = serialized->get_bool(ShowSelectionAABB_type_id, false); 
	}

	[[nodiscard]] auto
	EditorRenderSettings2::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EditorRenderSettings2::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EditorRenderSettings2> {
		if (incoming_type_id == EditorRenderSettings2::type_id) {
			return std::make_shared<EditorRenderSettings2>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
