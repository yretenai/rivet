// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LoopSignalActionPrius.hpp>

namespace rivet::ddl::generated {
	LoopSignalActionPrius::LoopSignalActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		LoopDelay = serialized->get_float(LoopDelay_type_id);
		LoopCount = serialized->get_int32(LoopCount_type_id);
		DoFirstLoopOnStart = serialized->get_bool(DoFirstLoopOnStart_type_id);
		UseMinFrameDelay = serialized->get_bool(UseMinFrameDelay_type_id);
		ResetLoopCountOnRestart = serialized->get_bool(ResetLoopCountOnRestart_type_id);
		OutputLoopCountBeforeLoop = serialized->get_bool(OutputLoopCountBeforeLoop_type_id);
		PollVarsContinuously = serialized->get_bool(PollVarsContinuously_type_id); 
	}

	[[nodiscard]] auto
	LoopSignalActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LoopSignalActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoopSignalActionPrius> {
		if (incoming_type_id == LoopSignalActionPrius::type_id) {
			return std::make_shared<LoopSignalActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated