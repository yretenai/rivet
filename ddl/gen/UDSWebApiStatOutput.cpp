// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSWebApiStatOutput.hpp>

namespace rivet::ddl::generated {
	UDSWebApiStatOutput::UDSWebApiStatOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		statName = serialized->get_string(statName_type_id, {}); 
	}

	[[nodiscard]] auto
	UDSWebApiStatOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSWebApiStatOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiStatOutput> {
		if (incoming_type_id == UDSWebApiStatOutput::type_id) {
			return std::make_shared<UDSWebApiStatOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
