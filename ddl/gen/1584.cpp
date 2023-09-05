// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeamOutConfig.hpp>
#include <rivet/ddl/generated/BeamInConfig.hpp> 

#include <rivet/ddl/generated/IncinerateConfig.hpp>

namespace rivet::ddl::generated {
	IncinerateConfig::IncinerateConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		PreMaterialGraph = serialized->get_string(PreMaterialGraph_type_id);
		PostMaterialGraph = serialized->get_string(PostMaterialGraph_type_id);
		DefaultDuration = serialized->get_float(DefaultDuration_type_id);
		DefaultDelay = serialized->get_float(DefaultDelay_type_id);
		UseJointCrawl = serialized->get_bool(UseJointCrawl_type_id); 
	}

	auto
	IncinerateConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	IncinerateConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IncinerateConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IncinerateConfig> {
		if (incoming_type_id == IncinerateConfig::type_id) {
			return std::make_shared<IncinerateConfig>(serialized);
		}

		auto BeamOutConfig_ptr = BeamOutConfig::from_substruct(incoming_type_id, serialized);
		if (BeamOutConfig_ptr != nullptr) {
			return BeamOutConfig_ptr;
		}

		auto BeamInConfig_ptr = BeamInConfig::from_substruct(incoming_type_id, serialized);
		if (BeamInConfig_ptr != nullptr) {
			return BeamInConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
