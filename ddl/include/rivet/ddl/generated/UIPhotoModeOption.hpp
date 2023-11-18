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

#include <rivet/ddl/generated/enums/xc57b533a.hpp>
#include <rivet/ddl/generated/enums/xed640b4c.hpp>
#include <rivet/ddl/generated/enums/x4f56b709.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIPhotoModeOption : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIPhotoModeOption";
		constexpr static rivet::rivet_type_id type_id = 0x967007d0;

		constexpr static std::string_view ID_type_name = "ID";
		constexpr static rivet::rivet_type_id ID_type_id = 0xb13f6a45;
		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view ValueMin_type_name = "ValueMin";
		constexpr static rivet::rivet_type_id ValueMin_type_id = 0xfc5698d2;
		constexpr static std::string_view ValueMax_type_name = "ValueMax";
		constexpr static rivet::rivet_type_id ValueMax_type_id = 0xc05ba78b;
		constexpr static std::string_view Fidelity_type_name = "Fidelity";
		constexpr static rivet::rivet_type_id Fidelity_type_id = 0x142ba1c;
		constexpr static std::string_view FastFidelity_type_name = "FastFidelity";
		constexpr static rivet::rivet_type_id FastFidelity_type_id = 0x394868ee;
		constexpr static std::string_view SliderType_type_name = "SliderType";
		constexpr static rivet::rivet_type_id SliderType_type_id = 0xf94ba34f;
		constexpr static std::string_view ClampType_type_name = "ClampType";
		constexpr static rivet::rivet_type_id ClampType_type_id = 0xeb8f1f26;
		constexpr static std::string_view Settings_type_name = "Settings";
		constexpr static rivet::rivet_type_id Settings_type_id = 0x1f441db5; 

		explicit UIPhotoModeOption() = default;
		explicit UIPhotoModeOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x4f56b709 ID {};
		std::string_view Label {};
		float ValueMin {};
		float ValueMax {};
		int32_t Fidelity {};
		int32_t FastFidelity {};
		rivet::ddl::generated::xed640b4c SliderType {};
		rivet::ddl::generated::xc57b533a ClampType {};
		std::vector<std::string_view> Settings {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIPhotoModeOption>;
	};
} // namespace rivet::ddl::generated

// clang-format on
