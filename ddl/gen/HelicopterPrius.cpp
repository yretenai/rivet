// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HelicopterData.hpp> 

#include <rivet/ddl/generated/HelicopterPrius.hpp>

namespace rivet::ddl::generated {
	HelicopterPrius::HelicopterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		HelicopterData = serialized->unwrap_into<rivet::ddl::generated::HelicopterData>(HelicopterData_type_id); 
	}

	[[nodiscard]] auto
	HelicopterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HelicopterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HelicopterPrius> {
		if (incoming_type_id == HelicopterPrius::type_id) {
			return std::make_shared<HelicopterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
