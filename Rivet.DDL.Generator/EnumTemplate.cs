// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator;

public static class EnumTemplate {
	public const string EnumField = "\t[%attribute%] %name%,";
	public const string BitsetField = "\t[%attribute%] %name% = 0x%value%u,";

	public const string BitsetFlags = ", Flags";

	public const string LookupEntry = "\t\t[0x%hash%u] = %enum-name%.%field-name%,";
	public const string ReverseLookupEntry = "\t\t[%enum-name%.%field-name%] = 0x%hash%u,";

	public const string EnumBody =
		"""

		[%attribute%%flags%]
		public enum %name% : uint {
			%body%
		}

		public static class %name%Values {
			public static Dictionary<uint, %name%> Lookup = new() {
				%lookup%
			};
		
			public static Dictionary<%name%, uint> ReverseLookup = new() {
				%reverse-lookup%
			};
		
			public static uint TypeId => 0x%hash%u;
		}
		""";
}
