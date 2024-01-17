// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MayaFixupData.hpp>

namespace rivet::ddl::generated {
	MayaFixupData::MayaFixupData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Op = serialized->get_enum<rivet::ddl::generated::xed092e3a>(Op_type_id, rivet::ddl::generated::xed092e3a_values, rivet::ddl::generated::xed092e3a::kColladaSourcePath);
		ReplaceElementChars = serialized->get_string(ReplaceElementChars_type_id, {});
		AssetPath = serialized->get_string(AssetPath_type_id, {});
		OldMayaPath = serialized->get_string(OldMayaPath_type_id, {});
		NewMayaPath = serialized->get_string(NewMayaPath_type_id, {});
		ScriptCmd = serialized->get_string(ScriptCmd_type_id, {}); 
	}

	[[nodiscard]] auto
	MayaFixupData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MayaFixupData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MayaFixupData> {
		if (incoming_type_id == MayaFixupData::type_id) {
			return std::make_shared<MayaFixupData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
