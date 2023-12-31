// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookRandomizerLookData.hpp> 

#include <rivet/ddl/generated/LookRandomizerPrius.hpp>

namespace rivet::ddl::generated {
	LookRandomizerPrius::LookRandomizerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookData = serialized->unwrap_into_many<rivet::ddl::generated::LookRandomizerLookData>(LookData_type_id);
		MinLooks = serialized->get_int32(MinLooks_type_id);
		MaxLooks = serialized->get_int32(MaxLooks_type_id); 
	}

	[[nodiscard]] auto
	LookRandomizerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookRandomizerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookRandomizerPrius> {
		if (incoming_type_id == LookRandomizerPrius::type_id) {
			return std::make_shared<LookRandomizerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
