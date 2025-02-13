// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.IO;

public interface IUnsafeMemoryOwner<T> : IDisposable where T : struct {
	Memory<T> Memory { get; }

	public static IUnsafeMemoryOwner<T> Empty { get; } = new ZeroOwner<T>();
	public IUnsafeMemoryOwner<T> Shift(int offset);

	public IUnsafeMemoryOwner<T> Shift<TShift>();
}
