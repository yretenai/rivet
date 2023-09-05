// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CollectibleTypeEntry.hpp> 

#include <rivet/ddl/generated/CollectibleParentTypeInfo.hpp>

namespace rivet::ddl::generated {
	CollectibleParentTypeInfo::CollectibleParentTypeInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CollectibleTypeInfoBase(serialized) {
		Types = serialized->unwrap_into_many<rivet::ddl::generated::CollectibleTypeEntry>(Types_type_id); 
	}

	auto
	CollectibleParentTypeInfo::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CollectibleParentTypeInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CollectibleParentTypeInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleParentTypeInfo> {
		if (incoming_type_id == CollectibleParentTypeInfo::type_id) {
			return std::make_shared<CollectibleParentTypeInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
