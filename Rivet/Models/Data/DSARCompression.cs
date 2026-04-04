// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public enum DSARCompression : byte {
	None = 0,
	ZLib = 1,
	GDeflate = 2,
	LZ4 = 3,
	Padding = 254,
}
