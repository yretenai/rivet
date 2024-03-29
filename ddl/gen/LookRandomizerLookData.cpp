// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookRandomizerLookData.hpp>

namespace rivet::ddl::generated {
	LookRandomizerLookData::LookRandomizerLookData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Look = serialized->get_string(Look_type_id, {});
		Weight = serialized->get_float(Weight_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	LookRandomizerLookData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookRandomizerLookData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookRandomizerLookData> {
		if (incoming_type_id == LookRandomizerLookData::type_id) {
			return std::make_shared<LookRandomizerLookData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
