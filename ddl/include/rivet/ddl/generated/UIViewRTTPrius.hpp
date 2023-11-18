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
	struct UIViewBaseData; 

	struct RIVET_DDL_SHARED UIViewRTTPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIViewRTTPrius";
		constexpr static rivet::rivet_type_id type_id = 0xfe0571c9;

		constexpr static std::string_view ViewType_type_name = "ViewType";
		constexpr static rivet::rivet_type_id ViewType_type_id = 0xf5517605;
		constexpr static std::string_view AutoLoadViewOnActivate_type_name = "AutoLoadViewOnActivate";
		constexpr static rivet::rivet_type_id AutoLoadViewOnActivate_type_id = 0x763dd64f;
		constexpr static std::string_view Material_type_name = "Material";
		constexpr static rivet::rivet_type_id Material_type_id = 0x86bfc8e5;
		constexpr static std::string_view TextureToReplace_type_name = "TextureToReplace";
		constexpr static rivet::rivet_type_id TextureToReplace_type_id = 0x2176bd2a;
		constexpr static std::string_view MaintainAspectRatio_type_name = "MaintainAspectRatio";
		constexpr static rivet::rivet_type_id MaintainAspectRatio_type_id = 0x7452b832;
		constexpr static std::string_view MaterialScaleVar_type_name = "MaterialScaleVar";
		constexpr static rivet::rivet_type_id MaterialScaleVar_type_id = 0xb941e550;
		constexpr static std::string_view MaterialOffsetXVar_type_name = "MaterialOffsetXVar";
		constexpr static rivet::rivet_type_id MaterialOffsetXVar_type_id = 0x4d065c70;
		constexpr static std::string_view MaterialOffsetYVar_type_name = "MaterialOffsetYVar";
		constexpr static rivet::rivet_type_id MaterialOffsetYVar_type_id = 0xf5ba3b15;
		constexpr static std::string_view Apply3DUIElementFlag_type_name = "Apply3DUIElementFlag";
		constexpr static rivet::rivet_type_id Apply3DUIElementFlag_type_id = 0x8db4fb59;
		constexpr static std::string_view DrawInDebugCam_type_name = "DrawInDebugCam";
		constexpr static rivet::rivet_type_id DrawInDebugCam_type_id = 0xc545854e; 

		explicit UIViewRTTPrius() = default;
		explicit UIViewRTTPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::UIViewBaseData> ViewType {};
		bool AutoLoadViewOnActivate {};
		std::string_view Material {};
		std::string_view TextureToReplace {};
		bool MaintainAspectRatio {};
		std::string_view MaterialScaleVar {};
		std::string_view MaterialOffsetXVar {};
		std::string_view MaterialOffsetYVar {};
		bool Apply3DUIElementFlag {};
		bool DrawInDebugCam {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIViewRTTPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
