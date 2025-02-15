namespace Rivet.Converters.Imaging.Writers;

public enum PNGCompressionLevel {
	None = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	Level5 = 5,
	Level6 = 6,
	Level7 = 7,
	Level8 = 8,
	Level9 = 9,

	SuperFast = Level1,
	Fast = Level3,
	SuperSmall = Level9,
	Small = Level6,
}
