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

#include <rivet/ddl/generated/enums/x387422ea.hpp>
#include <rivet/ddl/generated/enums/x8a806a76.hpp>
#include <rivet/ddl/generated/enums/BoltReplacementType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GoldBoltSaveData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GoldBoltSaveData";
		constexpr static rivet::rivet_type_id type_id = 0x387bf6b7;

		constexpr static std::string_view CollectedBoltHashes_type_name = "CollectedBoltHashes";
		constexpr static rivet::rivet_type_id CollectedBoltHashes_type_id = 0x6856baf9;
		constexpr static std::string_view InfiniteHealthEnabled_type_name = "InfiniteHealthEnabled";
		constexpr static rivet::rivet_type_id InfiniteHealthEnabled_type_id = 0x2d728e1d;
		constexpr static std::string_view InfiniteAmmoEnabled_type_name = "InfiniteAmmoEnabled";
		constexpr static rivet::rivet_type_id InfiniteAmmoEnabled_type_id = 0xe4dd68c7;
		constexpr static std::string_view RPGEnabled_type_name = "RPGEnabled";
		constexpr static rivet::rivet_type_id RPGEnabled_type_id = 0x9922b40e;
		constexpr static std::string_view ConfettiHeadshotEnabled_type_name = "ConfettiHeadshotEnabled";
		constexpr static rivet::rivet_type_id ConfettiHeadshotEnabled_type_id = 0x2679b542;
		constexpr static std::string_view MirrorModeEnabled_type_name = "MirrorModeEnabled";
		constexpr static rivet::rivet_type_id MirrorModeEnabled_type_id = 0xe71c87ef;
		constexpr static std::string_view GoldWeaponsEnabled_type_name = "GoldWeaponsEnabled";
		constexpr static rivet::rivet_type_id GoldWeaponsEnabled_type_id = 0xaa810c1a;
		constexpr static std::string_view HomeRunHitterEnabled_type_name = "HomeRunHitterEnabled";
		constexpr static rivet::rivet_type_id HomeRunHitterEnabled_type_id = 0x54917e9;
		constexpr static std::string_view BoltReplacementType_type_name = "BoltReplacementType";
		constexpr static rivet::rivet_type_id BoltReplacementType_type_id = 0xb840480;
		constexpr static std::string_view RenderModeIndex_type_name = "RenderModeIndex";
		constexpr static rivet::rivet_type_id RenderModeIndex_type_id = 0xf8a4a815;
		constexpr static std::string_view RenderModeNameHash_type_name = "RenderModeNameHash";
		constexpr static rivet::rivet_type_id RenderModeNameHash_type_id = 0x884f82a2;
		constexpr static std::string_view HeadSizeIndex_type_name = "HeadSizeIndex";
		constexpr static rivet::rivet_type_id HeadSizeIndex_type_id = 0x8e903379;
		constexpr static std::string_view WrenchModelSwapIndex_type_name = "WrenchModelSwapIndex";
		constexpr static rivet::rivet_type_id WrenchModelSwapIndex_type_id = 0xf488307a;
		constexpr static std::string_view HammerModelSwapIndex_type_name = "HammerModelSwapIndex";
		constexpr static rivet::rivet_type_id HammerModelSwapIndex_type_id = 0xecf228e8;
		constexpr static std::string_view ShipSkin_type_name = "ShipSkin";
		constexpr static rivet::rivet_type_id ShipSkin_type_id = 0x50835089;
		constexpr static std::string_view WrenchSkin_type_name = "WrenchSkin";
		constexpr static rivet::rivet_type_id WrenchSkin_type_id = 0x15d383de;
		constexpr static std::string_view HammerSkin_type_name = "HammerSkin";
		constexpr static rivet::rivet_type_id HammerSkin_type_id = 0x483f4a19; 

		explicit GoldBoltSaveData() = default;
		explicit GoldBoltSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint32_t> CollectedBoltHashes {};
		bool InfiniteHealthEnabled {};
		bool InfiniteAmmoEnabled {};
		bool RPGEnabled {};
		bool ConfettiHeadshotEnabled {};
		bool MirrorModeEnabled {};
		bool GoldWeaponsEnabled {};
		bool HomeRunHitterEnabled {};
		rivet::ddl::generated::BoltReplacementType BoltReplacementType {};
		uint32_t RenderModeIndex {};
		uint32_t RenderModeNameHash {};
		int32_t HeadSizeIndex {};
		int32_t WrenchModelSwapIndex {};
		int32_t HammerModelSwapIndex {};
		rivet::ddl::generated::x8a806a76 ShipSkin {};
		rivet::ddl::generated::x387422ea WrenchSkin {};
		rivet::ddl::generated::x387422ea HammerSkin {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GoldBoltSaveData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
