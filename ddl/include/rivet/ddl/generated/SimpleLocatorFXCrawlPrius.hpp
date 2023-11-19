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

#include <rivet/ddl/generated/enums/x48037d3a.hpp> 

namespace rivet::ddl::generated {
	struct EventStyleSpecified;
	struct LocatorCrawlPoints;
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED SimpleLocatorFXCrawlPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimpleLocatorFXCrawlPrius";
		constexpr static rivet::rivet_type_id type_id = 0x76c5f3ad;

		constexpr static std::string_view CrawlFX_type_name = "CrawlFX";
		constexpr static rivet::rivet_type_id CrawlFX_type_id = 0xb0d6832d;
		constexpr static std::string_view TimeScale_type_name = "TimeScale";
		constexpr static rivet::rivet_type_id TimeScale_type_id = 0x5fe2ecba;
		constexpr static std::string_view CrawlPoints_type_name = "CrawlPoints";
		constexpr static rivet::rivet_type_id CrawlPoints_type_id = 0xed9e44e8;
		constexpr static std::string_view CancelEvents_type_name = "CancelEvents";
		constexpr static rivet::rivet_type_id CancelEvents_type_id = 0xedf9fbdc; 

		explicit SimpleLocatorFXCrawlPrius() = default;
		explicit SimpleLocatorFXCrawlPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> CrawlFX {};
		rivet::ddl::generated::x48037d3a TimeScale {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LocatorCrawlPoints>> CrawlPoints {};
		std::vector<std::shared_ptr<rivet::ddl::generated::EventStyleSpecified>> CancelEvents {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleLocatorFXCrawlPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on