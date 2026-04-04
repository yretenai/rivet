// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

[Flags]
public enum DDSCaps : uint {
	None = 0,
	Complex = 0x8,
	Texture = 0x1000,
	MipMapped = 0x400000,
}
