// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2VfxSubActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2VfxSubActionDef::Cinematic2VfxSubActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Time = serialized->get_float(Time_type_id, 0.000000);
		Type = serialized->get_enum<rivet::ddl::generated::x46082128>(Type_type_id, rivet::ddl::generated::x46082128_values, rivet::ddl::generated::x46082128::StartVfx); 
	}

	[[nodiscard]] auto
	Cinematic2VfxSubActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2VfxSubActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2VfxSubActionDef> {
		if (incoming_type_id == Cinematic2VfxSubActionDef::type_id) {
			return std::make_shared<Cinematic2VfxSubActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
