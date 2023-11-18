// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct CustomJointMapEntry; 

	struct RIVET_DDL_SHARED HeadManagerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeadManagerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x924d450c;

		constexpr static std::string_view HeadActor_type_name = "HeadActor";
		constexpr static rivet::rivet_type_id HeadActor_type_id = 0xe676823c;
		constexpr static std::string_view HeadModel_type_name = "HeadModel";
		constexpr static rivet::rivet_type_id HeadModel_type_id = 0x7596a61c;
		constexpr static std::string_view AutoMatchJoints_type_name = "AutoMatchJoints";
		constexpr static rivet::rivet_type_id AutoMatchJoints_type_id = 0x3aa872c6;
		constexpr static std::string_view UseModelVariant_type_name = "UseModelVariant";
		constexpr static rivet::rivet_type_id UseModelVariant_type_id = 0xe3ff1024;
		constexpr static std::string_view AllowUpdateAsync_type_name = "AllowUpdateAsync";
		constexpr static rivet::rivet_type_id AllowUpdateAsync_type_id = 0x28a48cad;
		constexpr static std::string_view AllowFastBSphere_type_name = "AllowFastBSphere";
		constexpr static rivet::rivet_type_id AllowFastBSphere_type_id = 0x33c7434a;
		constexpr static std::string_view DriveAnimMaterialComponent_type_name = "DriveAnimMaterialComponent";
		constexpr static rivet::rivet_type_id DriveAnimMaterialComponent_type_id = 0x62d47bb2;
		constexpr static std::string_view ModelVariant_type_name = "ModelVariant";
		constexpr static rivet::rivet_type_id ModelVariant_type_id = 0x27a47dad;
		constexpr static std::string_view VariantName_type_name = "VariantName";
		constexpr static rivet::rivet_type_id VariantName_type_id = 0x1320265a;
		constexpr static std::string_view CustomJointMap_type_name = "CustomJointMap";
		constexpr static rivet::rivet_type_id CustomJointMap_type_id = 0x38cdd168; 

		explicit HeadManagerPrius() = default;
		explicit HeadManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view HeadActor {};
		std::string_view HeadModel {};
		bool AutoMatchJoints {};
		bool UseModelVariant {};
		bool AllowUpdateAsync {};
		bool AllowFastBSphere {};
		bool DriveAnimMaterialComponent {};
		std::string_view ModelVariant {};
		std::string_view VariantName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CustomJointMapEntry>> CustomJointMap {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeadManagerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
