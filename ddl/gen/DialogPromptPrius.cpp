// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogPromptEntry.hpp>
#include <rivet/ddl/generated/GenericOfferPrius.hpp> 

#include <rivet/ddl/generated/DialogPromptPrius.hpp>

namespace rivet::ddl::generated {
	DialogPromptPrius::DialogPromptPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TalkOffer = serialized->unwrap_into<rivet::ddl::generated::GenericOfferPrius>(TalkOffer_type_id);
		TalkOfferText = serialized->get_string(TalkOfferText_type_id, {});
		Lines = serialized->unwrap_into_many<rivet::ddl::generated::DialogPromptEntry>(Lines_type_id);
		LastLineCount = serialized->get_int32(LastLineCount_type_id, 1); 
	}

	[[nodiscard]] auto
	DialogPromptPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogPromptPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogPromptPrius> {
		if (incoming_type_id == DialogPromptPrius::type_id) {
			return std::make_shared<DialogPromptPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
