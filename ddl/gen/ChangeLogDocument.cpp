// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChangeBatch.hpp> 

#include <rivet/ddl/generated/ChangeLogDocument.hpp>

namespace rivet::ddl::generated {
	ChangeLogDocument::ChangeLogDocument([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		_id = serialized->get_int64(_id_type_id);
		SessionId = serialized->get_uint64(SessionId_type_id);
		Action = serialized->get_enum<rivet::ddl::generated::xea0685c5>(Action_type_id, rivet::ddl::generated::xea0685c5_values);
		AssetId = serialized->get_uint64(AssetId_type_id);
		AssetType = serialized->get_enum<rivet::ddl::generated::AssetExtensions>(AssetType_type_id, rivet::ddl::generated::AssetExtensions_values);
		IsAssetWritable = serialized->get_bool(IsAssetWritable_type_id);
		SourceType = serialized->get_enum<rivet::ddl::generated::xfea7566a>(SourceType_type_id, rivet::ddl::generated::xfea7566a_values);
		IsBinaryAsset = serialized->get_bool(IsBinaryAsset_type_id);
		ClientData = serialized->get_field(ClientData_type_id);
		Batch = serialized->unwrap_into<rivet::ddl::generated::ChangeBatch>(Batch_type_id);
		Replayable = serialized->get_bool(Replayable_type_id);
		Source = serialized->get_string(Source_type_id);
		PreviousChange = serialized->get_int64(PreviousChange_type_id);
		NextChange = serialized->get_int64(NextChange_type_id);
		CollectionName = serialized->get_string(CollectionName_type_id);
		SetJson = serialized->get_field(SetJson_type_id);
		UnsetJson = serialized->get_field(UnsetJson_type_id);
		PreviousJson = serialized->get_field(PreviousJson_type_id); 
	}

	[[nodiscard]] auto
	ChangeLogDocument::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChangeLogDocument::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeLogDocument> {
		if (incoming_type_id == ChangeLogDocument::type_id) {
			return std::make_shared<ChangeLogDocument>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
