// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator;

internal class Program {
	private static void Main(string[] args) {
		if (args.Length < 2) {
			Console.WriteLine($"Usage: {AppDomain.CurrentDomain.FriendlyName} path/to/ddl.json path/to/ddl");
		}
	}
}
