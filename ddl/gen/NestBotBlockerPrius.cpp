// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NestBotBlockerPrius.hpp>

namespace rivet::ddl::generated {
	NestBotBlockerPrius::NestBotBlockerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NestBotBasePrius(serialized) {

	}

	[[nodiscard]] auto
	NestBotBlockerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NestBotBlockerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NestBotBlockerPrius> {
		if (incoming_type_id == NestBotBlockerPrius::type_id) {
			return std::make_shared<NestBotBlockerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
