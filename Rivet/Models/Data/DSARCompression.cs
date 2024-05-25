// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models.Data;

public enum DSARCompression : byte {
	None = 0,
	Unknown1 = 1,
	GDeflate = 2,
	LZ4 = 3,
	Padding = 254,
}
