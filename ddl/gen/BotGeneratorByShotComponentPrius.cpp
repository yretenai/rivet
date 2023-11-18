// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotGeneratorByShotComponentPrius.hpp>

namespace rivet::ddl::generated {
	BotGeneratorByShotComponentPrius::BotGeneratorByShotComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotGeneratorComponentPrius(serialized) {
		ShotConfig = serialized->get_uint64(ShotConfig_type_id);
		EmitLocatorHash = serialized->get_uint32(EmitLocatorHash_type_id); 
	}

	[[nodiscard]] auto
	BotGeneratorByShotComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotGeneratorByShotComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotGeneratorByShotComponentPrius> {
		if (incoming_type_id == BotGeneratorByShotComponentPrius::type_id) {
			return std::make_shared<BotGeneratorByShotComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
