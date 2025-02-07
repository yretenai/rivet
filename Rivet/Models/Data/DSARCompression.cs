// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public enum DSARCompression : byte {
	None = 0,
	Unknown1 = 1,
	GDeflate = 2,
	LZ4 = 3,
	Padding = 254,
}
