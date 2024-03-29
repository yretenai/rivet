// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLStructInst.hpp> 

#include <rivet/ddl/generated/RegionNamedLink.hpp>

namespace rivet::ddl::generated {
	RegionNamedLink::RegionNamedLink([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Order = serialized->get_float(Order_type_id, 0.000000f);
		Name = serialized->get_string(Name_type_id, {});
		Link = serialized->get_string(Link_type_id, {});
		GameData = serialized->unwrap_into_many<rivet::ddl::generated::DDLStructInst>(GameData_type_id); 
	}

	[[nodiscard]] auto
	RegionNamedLink::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionNamedLink::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionNamedLink> {
		if (incoming_type_id == RegionNamedLink::type_id) {
			return std::make_shared<RegionNamedLink>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
