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

#include <rivet/ddl/generated/enums/ManipulatorSpace.hpp>
#include <rivet/ddl/generated/enums/ManipulatorType.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct DDLMatrix4; 

	struct RIVET_DDL_SHARED ManipulatorEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ManipulatorEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x3da3cc31;

		constexpr static std::string_view WorldMatrix_type_name = "WorldMatrix";
		constexpr static rivet::rivet_type_id WorldMatrix_type_id = 0x791b2bb1;
		constexpr static std::string_view AimPosition_type_name = "AimPosition";
		constexpr static rivet::rivet_type_id AimPosition_type_id = 0x2da7b94c;
		constexpr static std::string_view WorldMatrixDragBegin_type_name = "WorldMatrixDragBegin";
		constexpr static rivet::rivet_type_id WorldMatrixDragBegin_type_id = 0x9aaacfba;
		constexpr static std::string_view ManipulatorType_type_name = "ManipulatorType";
		constexpr static rivet::rivet_type_id ManipulatorType_type_id = 0x1d5f1904;
		constexpr static std::string_view ManipulatorSpace_type_name = "ManipulatorSpace";
		constexpr static rivet::rivet_type_id ManipulatorSpace_type_id = 0xbe3ef38c;
		constexpr static std::string_view UseLastSelectedNode_type_name = "UseLastSelectedNode";
		constexpr static rivet::rivet_type_id UseLastSelectedNode_type_id = 0xf0c6c559;
		constexpr static std::string_view MoveSelectedNodes_type_name = "MoveSelectedNodes";
		constexpr static rivet::rivet_type_id MoveSelectedNodes_type_id = 0xe907f4c;
		constexpr static std::string_view UseWorldSpace_type_name = "UseWorldSpace";
		constexpr static rivet::rivet_type_id UseWorldSpace_type_id = 0x220435a9; 

		explicit ManipulatorEngineItem() = default;
		explicit ManipulatorEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLMatrix4> WorldMatrix {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> AimPosition {};
		std::shared_ptr<rivet::ddl::generated::DDLMatrix4> WorldMatrixDragBegin {};
		rivet::ddl::generated::ManipulatorType ManipulatorType {};
		rivet::ddl::generated::ManipulatorSpace ManipulatorSpace {};
		bool UseLastSelectedNode {};
		bool MoveSelectedNodes {};
		bool UseWorldSpace {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ManipulatorEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on