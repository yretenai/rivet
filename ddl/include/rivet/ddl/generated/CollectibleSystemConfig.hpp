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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct CollectibleTypeEntry;
	struct CollectibleSystemSettingsBase; 

	struct RIVET_DDL_SHARED CollectibleSystemConfig : ConfigBase {
		constexpr static std::string_view type_name = "CollectibleSystemConfig";
		constexpr static rivet::rivet_type_id type_id = 0x92797f80;

		constexpr static std::string_view SystemSettings_type_name = "SystemSettings";
		constexpr static rivet::rivet_type_id SystemSettings_type_id = 0xd650aed9;
		constexpr static std::string_view Types_type_name = "Types";
		constexpr static rivet::rivet_type_id Types_type_id = 0x406345f1; 

		explicit CollectibleSystemConfig() = default;
		explicit CollectibleSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::CollectibleSystemSettingsBase> SystemSettings {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CollectibleTypeEntry>> Types {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
