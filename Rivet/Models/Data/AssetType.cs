// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public enum AssetType : byte {
	Level = 0,
	Zone = 1,
	Actor = 2,
	Conduit = 3,
	Config = 4,
	Cinematic2 = 5,
	Model = 6,
	AnimationClip = 7,
	AnimationSet = 8,
	Material = 9,
	MaterialGraph = 10,
	Texture = 11,
	Atmosphere = 12,
	Effect = 13,
	Soundbank = 14,
	Localization = 15,
	Unknown16 = 16,
	Unknown17 = 17,
	ZoneLighting = 18,
	LevelLighting = 19,
	NodeGraph = 20,
	Unknown21 = 21,
	WwiseLookup = 22,
	Unknown23 = 23,
	Unknown24 = 24,
	None = 0xFF,
}
