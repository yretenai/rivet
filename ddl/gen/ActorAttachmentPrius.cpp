// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveAttachmentItem.hpp>
#include <rivet/ddl/generated/JointAttachmentItem.hpp> 

#include <rivet/ddl/generated/ActorAttachmentPrius.hpp>

namespace rivet::ddl::generated {
	ActorAttachmentPrius::ActorAttachmentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AttachedList = serialized->get_uint64s(AttachedList_type_id);
		JointAttachList = serialized->unwrap_into_many<rivet::ddl::generated::JointAttachmentItem>(JointAttachList_type_id);
		CurveAttachList = serialized->unwrap_into_many<rivet::ddl::generated::CurveAttachmentItem>(CurveAttachList_type_id);
		DestroyAttachmentsOnDestroy = serialized->get_bool(DestroyAttachmentsOnDestroy_type_id); 
	}

	[[nodiscard]] auto
	ActorAttachmentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorAttachmentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorAttachmentPrius> {
		if (incoming_type_id == ActorAttachmentPrius::type_id) {
			return std::make_shared<ActorAttachmentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated