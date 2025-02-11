namespace Rivet.DDL.Generator;

public static class EnumTemplate {
	public const string EnumField = "\t[DDLRegistration(0x%hash%u)] %name% = 0x%value%u,";

	public const string BitsetFlags = ", Flags";

	public const string LookupEntry = "\t\t[0x%hash%u] = %enum-name%.%field-name%,";
	public const string ReverseLookupEntry = "\t\t[%enum-name%.%field-name%] = 0x%hash%u,";

	public const string EnumBody =
		"""

		[DDLRegistration(0x%hash%u)%flags%]
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
