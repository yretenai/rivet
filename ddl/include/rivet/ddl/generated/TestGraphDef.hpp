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

#include <rivet/ddl/generated/GameplayNodeGraphBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputNodeStringDef;
	struct OutputNodeIntDef;
	struct InputNodeStringDef;
	struct InputNodeIntDef;
	struct TestMakeStringNodeDef;
	struct TestTriggerNodeDef;
	struct TestNodeDef; 

	struct RIVET_DDL_SHARED TestGraphDef : GameplayNodeGraphBaseDef {
		constexpr static std::string_view type_name = "TestGraphDef";
		constexpr static rivet::rivet_type_id type_id = 0x592a45e5;

		constexpr static std::string_view TestNodes_type_name = "TestNodes";
		constexpr static rivet::rivet_type_id TestNodes_type_id = 0x65def20;
		constexpr static std::string_view TriggerNodes_type_name = "TriggerNodes";
		constexpr static rivet::rivet_type_id TriggerNodes_type_id = 0x733dd74e;
		constexpr static std::string_view MakeStringNodes_type_name = "MakeStringNodes";
		constexpr static rivet::rivet_type_id MakeStringNodes_type_id = 0xf9b8ef84;
		constexpr static std::string_view InputIntNodes_type_name = "InputIntNodes";
		constexpr static rivet::rivet_type_id InputIntNodes_type_id = 0x5c33390d;
		constexpr static std::string_view InputStringNodes_type_name = "InputStringNodes";
		constexpr static rivet::rivet_type_id InputStringNodes_type_id = 0x5795b3b8;
		constexpr static std::string_view OutputIntNodes_type_name = "OutputIntNodes";
		constexpr static rivet::rivet_type_id OutputIntNodes_type_id = 0xfd06341a;
		constexpr static std::string_view OutputStringNodes_type_name = "OutputStringNodes";
		constexpr static rivet::rivet_type_id OutputStringNodes_type_id = 0xade1bc82; 

		explicit TestGraphDef() = default;
		explicit TestGraphDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TestNodeDef>> TestNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TestTriggerNodeDef>> TriggerNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TestMakeStringNodeDef>> MakeStringNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::InputNodeIntDef>> InputIntNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::InputNodeStringDef>> InputStringNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::OutputNodeIntDef>> OutputIntNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::OutputNodeStringDef>> OutputStringNodes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestGraphDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
