// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

using System.Runtime.InteropServices;

namespace Rivet.Models;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct PackedPair<TKey, TValue> where TKey : struct where TValue : struct {
	public TKey Key { get; set; }
	public TValue Value { get; set; }

	public void Deconstruct(out TKey left, out TValue right) {
		left = Key;
		right = Value;
	}
}
