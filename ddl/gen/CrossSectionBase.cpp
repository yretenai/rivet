// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp>
#include <rivet/ddl/generated/CrossSectionChoice.hpp> 

#include <rivet/ddl/generated/CrossSectionBase.hpp>

namespace rivet::ddl::generated {
	CrossSectionBase::CrossSectionBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CrossSection = serialized->unwrap_into<rivet::ddl::generated::CrossSectionChoice>(CrossSection_type_id);
		Width = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Width_type_id);
		Height = serialized->get_float(Height_type_id);
		Scale = serialized->get_float(Scale_type_id);
		Taper = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Taper_type_id);
		Placement = serialized->get_enum<rivet::ddl::generated::xb8c27e2a>(Placement_type_id, rivet::ddl::generated::xb8c27e2a_values);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id);
		PathNoise = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(PathNoise_type_id);
		BankScale = serialized->get_float(BankScale_type_id);
		EndCap = serialized->get_enum<rivet::ddl::generated::x86f6b8ca>(EndCap_type_id, rivet::ddl::generated::x86f6b8ca_values);
		ReverseFaces = serialized->get_bool(ReverseFaces_type_id); 
	}

	[[nodiscard]] auto
	CrossSectionBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CrossSectionBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrossSectionBase> {
		if (incoming_type_id == CrossSectionBase::type_id) {
			return std::make_shared<CrossSectionBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated