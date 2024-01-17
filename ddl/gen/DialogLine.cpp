// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConversationCommunicatorBasePrius.hpp> 

#include <rivet/ddl/generated/DialogLine.hpp>

namespace rivet::ddl::generated {
	DialogLine::DialogLine([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocalizationTag = serialized->get_string(LocalizationTag_type_id, {});
		Speaker = serialized->get_enum<rivet::ddl::generated::Speakers>(Speaker_type_id, rivet::ddl::generated::Speakers_values, rivet::ddl::generated::Speakers::Speaker1);
		PreLineDelay = serialized->get_float(PreLineDelay_type_id, 0.000000);
		InterruptRestorePoint = serialized->get_bool(InterruptRestorePoint_type_id, false);
		InterruptLineTag = serialized->get_string(InterruptLineTag_type_id, {});
		ResumeLineTag = serialized->get_string(ResumeLineTag_type_id, {});
		CompleteOnInterrupt = serialized->get_bool(CompleteOnInterrupt_type_id, false);
		ConversationCommunicatorData = serialized->unwrap_into<rivet::ddl::generated::ConversationCommunicatorBasePrius>(ConversationCommunicatorData_type_id); 
	}

	[[nodiscard]] auto
	DialogLine::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogLine::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogLine> {
		if (incoming_type_id == DialogLine::type_id) {
			return std::make_shared<DialogLine>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
