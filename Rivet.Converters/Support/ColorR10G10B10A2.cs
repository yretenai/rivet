// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;

namespace Rivet.Converters.Support;

public record struct ColorR10G10B10A2 : IColor<ColorRGBA<ushort>, ushort> {
	public uint Value { get; set; }

	public ushort R {
		readonly get => (ushort) ((Value & 0x3FF) / 1023.0f * ushort.MaxValue);
		set => Value = (Value & 0xFFFFFC00U) | (uint) (value / (float) ushort.MaxValue * 0x3FF);
	}

	public ushort G {
		readonly get => (ushort) (((Value >> 10) & 0x3FF) / 1023.0f * ushort.MaxValue);
		set => Value = (Value & 0xFFF003FFU) | ((uint) (value / (float) ushort.MaxValue * 0x3FF) << 10);
	}

	public ushort B {
		readonly get => (ushort) (((Value >> 20) & 0x3FF) / 1023.0f * ushort.MaxValue);
		set => Value = (Value & 0xC00FFFFFU) | ((uint) (value / (float) ushort.MaxValue * 0x3FF) << 20);
	}

	public ushort A {
		readonly get => (ushort) (((Value >> 30) & 3) / 3 * ushort.MaxValue);
		set => Value = (Value & 0x3FFFFFFFU) | ((uint) (value / (float) ushort.MaxValue * 3) << 30);
	}

	public readonly void GetChannels(out ushort r, out ushort g, out ushort b, out ushort a) {
		r = R;
		g = G;
		b = B;
		a = A;
	}

	public void SetChannels(ushort r, ushort g, ushort b, ushort a) {
		R = r;
		G = g;
		B = b;
		A = a;
	}

	static bool IColor.HasRedChannel => true;
	static bool IColor.HasGreenChannel => true;
	static bool IColor.HasBlueChannel => true;
	static bool IColor.HasAlphaChannel => true;
	static bool IColor.ChannelsAreFullyUtilized => false;
	static Type IColor.ChannelType => typeof(ushort);

	public static ColorRGBA<ushort> Black => new(0, 0, 0, ushort.MaxValue);
	public static ColorRGBA<ushort> White => new(ushort.MaxValue, ushort.MaxValue, ushort.MaxValue, ushort.MaxValue);

	public override string ToString() => $"{{ R: {R}, G: {G}, B: {B}, A: {A} }}";
}
