// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConversationCommunicatorHUDPrius.hpp>
#include <rivet/ddl/generated/ConversationCommunicatorNonePrius.hpp> 

#include <rivet/ddl/generated/ConversationCommunicatorBasePrius.hpp>

namespace rivet::ddl::generated {
	ConversationCommunicatorBasePrius::ConversationCommunicatorBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ConversationCommunicatorBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConversationCommunicatorBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConversationCommunicatorBasePrius> {
		if (incoming_type_id == ConversationCommunicatorBasePrius::type_id) {
			return std::make_shared<ConversationCommunicatorBasePrius>(serialized);
		}

		auto ConversationCommunicatorNonePrius_ptr = ConversationCommunicatorNonePrius::from_substruct(incoming_type_id, serialized);
		if (ConversationCommunicatorNonePrius_ptr != nullptr) {
			return ConversationCommunicatorNonePrius_ptr;
		}

		auto ConversationCommunicatorHUDPrius_ptr = ConversationCommunicatorHUDPrius::from_substruct(incoming_type_id, serialized);
		if (ConversationCommunicatorHUDPrius_ptr != nullptr) {
			return ConversationCommunicatorHUDPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated