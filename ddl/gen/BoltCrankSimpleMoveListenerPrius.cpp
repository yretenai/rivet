// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BoltCrankSimpleMoveListenerPrius.hpp>

namespace rivet::ddl::generated {
	BoltCrankSimpleMoveListenerPrius::BoltCrankSimpleMoveListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Crank = serialized->get_uint64(Crank_type_id);
		StartVol = serialized->get_uint64(StartVol_type_id);
		EndVol = serialized->get_uint64(EndVol_type_id);
		DirectionVol = serialized->get_uint64(DirectionVol_type_id); 
	}

	[[nodiscard]] auto
	BoltCrankSimpleMoveListenerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BoltCrankSimpleMoveListenerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BoltCrankSimpleMoveListenerPrius> {
		if (incoming_type_id == BoltCrankSimpleMoveListenerPrius::type_id) {
			return std::make_shared<BoltCrankSimpleMoveListenerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
