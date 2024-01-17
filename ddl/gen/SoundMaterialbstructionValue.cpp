// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundMaterialbstructionValue.hpp>

namespace rivet::ddl::generated {
	SoundMaterialbstructionValue::SoundMaterialbstructionValue([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None);
		Opacity = serialized->get_float(Opacity_type_id, 1.000000);
		LowPass = serialized->get_float(LowPass_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	SoundMaterialbstructionValue::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundMaterialbstructionValue::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundMaterialbstructionValue> {
		if (incoming_type_id == SoundMaterialbstructionValue::type_id) {
			return std::make_shared<SoundMaterialbstructionValue>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
