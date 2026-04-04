// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;
using Rivet.DDL;
using Rivet.DDL.Types;
using Rivet.IO;

namespace Rivet.Data;

public class SaveData {
	public SaveData(IRentedArray<byte> buffer) {
		var dat = new DAT1(buffer);

		// 0x28338a -- a single number?
		// 0xd0a9df -- big chunk of data that contains "INVT" atoms?
		// 0x04c9f803 -- empty?
		// 0x1cea6ceb -- int unknown; DevstatsSegmentSystemSaveData segmentSave;
		// 0x21a6159f -- long unknown; ObjectiveSystemSaveBlock objectiveSave;
		// 0x56b5c745 -- int unknown; uint hash; int unknown;
		// 0x8c2d0f2d -- Save Image?
		// 0xbc60b495 -- long playtime?
		// 0xc34cac48 -- ??

		if (dat.Sections.ContainsKey(0x2ee91673)) {
			Preferences = GamePrefSaveCombined.Create(DDLSerializer.Deserialize(dat.GetSection(0x2ee91673), dat));
		}

		if (dat.Sections.ContainsKey(0x1cea6ceb)) {
			using var section = new UnownedRentedArray<byte>(dat.GetSection(0x1cea6ceb), 4);
			Segments = DevstatsSegmentSystemSaveData.Create(DDLSerializer.Deserialize(section, dat));
		}

		if (dat.Sections.ContainsKey(0x21a6159f)) {
			using var section = new UnownedRentedArray<byte>(dat.GetSection(0x21a6159f), 8);
			Objectives = ObjectiveSystemSaveBlock.Create(DDLSerializer.Deserialize(section, dat));
		}

		if (dat.Sections.ContainsKey(0x19c54b9)) {
			Dimension = DimensionLoadSystemSave.Create(DDLSerializer.Deserialize(dat.GetSection(0x19c54b9), dat));
		}

		if (dat.Sections.ContainsKey(0x6ded1778)) {
			Backpack = HeroClankPackSystemSaveData.Create(DDLSerializer.Deserialize(dat.GetSection(0x6ded1778), dat));
		}

		if (dat.Sections.ContainsKey(0x77f00be8)) {
			GoldBolt = GoldBoltSaveData.Create(DDLSerializer.Deserialize(dat.GetSection(0x77f00be8), dat));
		}

		if (dat.Sections.ContainsKey(0x9dfa045f)) {
			Spawns = ProximitySpawnSystemSave.Create(DDLSerializer.Deserialize(dat.GetSection(0x9dfa045f), dat));
		}

		if (dat.Sections.ContainsKey(0x9e133672)) {
			Global = GlobalSaveTableSaveData.Create(DDLSerializer.Deserialize(dat.GetSection(0x9e133672), dat));
		}

		if (dat.Sections.ContainsKey(0xa21a60fc)) {
			PlatformActivity = PlatformActivitySystemSaveData.Create(DDLSerializer.Deserialize(dat.GetSection(0xa21a60fc), dat));
		}

		if (dat.Sections.ContainsKey(0xa787e610)) {
			Speedrun = SpeedrunSave.Create(DDLSerializer.Deserialize(dat.GetSection(0xa787e610), dat));
		}

		if (dat.Sections.ContainsKey(0xc623e9cc)) {
			Awards = AwardSystemSaveData.Create(DDLSerializer.Deserialize(dat.GetSection(0xc623e9cc), dat));
		}

		if (dat.Sections.ContainsKey(new RivetTypeId("Checkpoint"u8))) {
			Checkpoint = GameCampaignSave.Create(DDLSerializer.Deserialize(dat.GetSection("Checkpoint"u8), dat));
		}

		if (dat.Sections.ContainsKey(0xe58d899c)) {
			FogOfWar = FogOfWarSystemSave.Create(DDLSerializer.Deserialize(dat.GetSection(0xe58d899c), dat));
		}
	}

	public GamePrefSaveCombined? Preferences { get; set; }
	public DimensionLoadSystemSave? Dimension { get; set; }
	public DevstatsSegmentSystemSaveData? Segments { get; set; }
	public ObjectiveSystemSaveBlock? Objectives { get; set; }
	public HeroClankPackSystemSaveData? Backpack { get; set; }
	public GoldBoltSaveData? GoldBolt { get; set; }
	public ProximitySpawnSystemSave? Spawns { get; set; }
	public GlobalSaveTableSaveData? Global { get; set; }
	public PlatformActivitySystemSaveData? PlatformActivity { get; set; }
	public SpeedrunSave? Speedrun { get; set; }
	public AwardSystemSaveData? Awards { get; set; }
	public GameCampaignSave? Checkpoint { get; set; }
	public FogOfWarSystemSave? FogOfWar { get; set; }
}
