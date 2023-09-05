// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZoneList.hpp> 

#include <rivet/ddl/generated/AssetSwapPlatSpec.hpp>

namespace rivet::ddl::generated {
	AssetSwapPlatSpec::AssetSwapPlatSpec([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ZoneLists = serialized->unwrap_into_many<rivet::ddl::generated::ZoneList>(ZoneLists_type_id); 
	}

	auto
	AssetSwapPlatSpec::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AssetSwapPlatSpec::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetSwapPlatSpec::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetSwapPlatSpec> {
		if (incoming_type_id == AssetSwapPlatSpec::type_id) {
			return std::make_shared<AssetSwapPlatSpec>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
