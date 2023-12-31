// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsExport.hpp> 

#include <rivet/ddl/generated/DevstatsExportManifest.hpp>

namespace rivet::ddl::generated {
	DevstatsExportManifest::DevstatsExportManifest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Service = serialized->get_string(Service_type_id);
		Files = serialized->unwrap_into_many<rivet::ddl::generated::DevstatsExport>(Files_type_id); 
	}

	[[nodiscard]] auto
	DevstatsExportManifest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsExportManifest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsExportManifest> {
		if (incoming_type_id == DevstatsExportManifest::type_id) {
			return std::make_shared<DevstatsExportManifest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
