// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimSkeletonInfo.hpp>

namespace rivet::ddl::generated {
	AnimSkeletonInfo::AnimSkeletonInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MayaNameSpace = serialized->get_string(MayaNameSpace_type_id, {});
		BodySkeleton = serialized->get_string(BodySkeleton_type_id, {});
		HeadSkeleton = serialized->get_string(HeadSkeleton_type_id, {}); 
	}

	[[nodiscard]] auto
	AnimSkeletonInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimSkeletonInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSkeletonInfo> {
		if (incoming_type_id == AnimSkeletonInfo::type_id) {
			return std::make_shared<AnimSkeletonInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
