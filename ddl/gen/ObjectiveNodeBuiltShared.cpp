// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveNodeBuiltGame.hpp> 

#include <rivet/ddl/generated/ObjectiveNodeBuiltShared.hpp>

namespace rivet::ddl::generated {
	ObjectiveNodeBuiltShared::ObjectiveNodeBuiltShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectiveName = serialized->get_string(ObjectiveName_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveNodeBuiltShared::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveNodeBuiltShared::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveNodeBuiltShared> {
		if (incoming_type_id == ObjectiveNodeBuiltShared::type_id) {
			return std::make_shared<ObjectiveNodeBuiltShared>(serialized);
		}

		auto ObjectiveNodeBuiltGame_ptr = ObjectiveNodeBuiltGame::from_substruct(incoming_type_id, serialized);
		if (ObjectiveNodeBuiltGame_ptr != nullptr) {
			return ObjectiveNodeBuiltGame_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated