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

#include <rivet/ddl/generated/enums/xfea7566a.hpp>
#include <rivet/ddl/generated/enums/AssetExtensions.hpp>
#include <rivet/ddl/generated/enums/xea0685c5.hpp> 

namespace rivet::ddl::generated {
	struct ChangeBatch; 

	struct RIVET_DDL_SHARED ChangeLogDocumentBase : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChangeLogDocumentBase";
		constexpr static rivet::rivet_type_id type_id = 0x9b4e818d;

		constexpr static std::string_view _id_type_name = "_id";
		constexpr static rivet::rivet_type_id _id_type_id = 0x7459aa19;
		constexpr static std::string_view SessionId_type_name = "SessionId";
		constexpr static rivet::rivet_type_id SessionId_type_id = 0xbbad2afa;
		constexpr static std::string_view Action_type_name = "Action";
		constexpr static rivet::rivet_type_id Action_type_id = 0x79b4c2f5;
		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view AssetType_type_name = "AssetType";
		constexpr static rivet::rivet_type_id AssetType_type_id = 0x8970bd6d;
		constexpr static std::string_view IsAssetWritable_type_name = "IsAssetWritable";
		constexpr static rivet::rivet_type_id IsAssetWritable_type_id = 0x83107859;
		constexpr static std::string_view SourceType_type_name = "SourceType";
		constexpr static rivet::rivet_type_id SourceType_type_id = 0xeb45ba95;
		constexpr static std::string_view IsBinaryAsset_type_name = "IsBinaryAsset";
		constexpr static rivet::rivet_type_id IsBinaryAsset_type_id = 0x931f4d6c;
		constexpr static std::string_view ClientData_type_name = "ClientData";
		constexpr static rivet::rivet_type_id ClientData_type_id = 0xbc38883a;
		constexpr static std::string_view Batch_type_name = "Batch";
		constexpr static rivet::rivet_type_id Batch_type_id = 0xe1589e15;
		constexpr static std::string_view Replayable_type_name = "Replayable";
		constexpr static rivet::rivet_type_id Replayable_type_id = 0x37817015;
		constexpr static std::string_view Source_type_name = "Source";
		constexpr static rivet::rivet_type_id Source_type_id = 0x61f23114; 

		explicit ChangeLogDocumentBase() = default;
		explicit ChangeLogDocumentBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int64_t _id {};
		uint64_t SessionId {};
		rivet::ddl::generated::xea0685c5 Action {};
		uint64_t AssetId {};
		rivet::ddl::generated::AssetExtensions AssetType {};
		bool IsAssetWritable {};
		rivet::ddl::generated::xfea7566a SourceType {};
		bool IsBinaryAsset {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> ClientData {};
		std::shared_ptr<rivet::ddl::generated::ChangeBatch> Batch {};
		bool Replayable {};
		std::string_view Source {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeLogDocumentBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
