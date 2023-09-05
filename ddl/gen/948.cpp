// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemConstantOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemConstantOverride::SkinItemConstantOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ConstantName = serialized->get_string(ConstantName_type_id);
		ConstantValue = serialized->get_float(ConstantValue_type_id); 
	}

	auto
	SkinItemConstantOverride::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemConstantOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemConstantOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemConstantOverride> {
		if (incoming_type_id == SkinItemConstantOverride::type_id) {
			return std::make_shared<SkinItemConstantOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
