// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector4.hpp>

namespace rivet::ddl::generated {
	DDLVector4::DDLVector4([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		X = serialized->get_float(X_type_id);
		Y = serialized->get_float(Y_type_id);
		Z = serialized->get_float(Z_type_id);
		W = serialized->get_float(W_type_id); 
	}

	[[nodiscard]] auto
	DDLVector4::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DDLVector4::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLVector4> {
		if (incoming_type_id == DDLVector4::type_id) {
			return std::make_shared<DDLVector4>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
