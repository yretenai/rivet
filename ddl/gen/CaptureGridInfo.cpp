// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CaptureGridInfo.hpp>

namespace rivet::ddl::generated {
	CaptureGridInfo::CaptureGridInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LightbinFullPath = serialized->get_string(LightbinFullPath_type_id);
		GBufferPath = serialized->get_string(GBufferPath_type_id);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id); 
	}

	[[nodiscard]] auto
	CaptureGridInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CaptureGridInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CaptureGridInfo> {
		if (incoming_type_id == CaptureGridInfo::type_id) {
			return std::make_shared<CaptureGridInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated