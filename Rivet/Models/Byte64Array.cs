// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(0x40)]
public record struct Byte64Array {
	public byte Value;
}
