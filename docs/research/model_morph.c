struct morph_pair_entry {
	/* 0x00 */ uint32_t left_id; // LF_[name]
	/* 0x04 */ uint32_t right_id; // RT_[name]
};

struct morph_lookup_entry {
	/* 0x00 */ uint32_t id;
	/* 0x04 */ uint32_t offset; 
};

struct morph_header {
	/* 0x00 */ uint32_t zero;
	/* 0x04 */ uint32_t size;
	/* 0x08 */ uint16_t lookup_count;
	/* 0x0A */ uint16_t pairs_count;
	/* 0x0C */ uint32_t lookup_offset;
};

struct morph_entry_desc_6 {
	/* 0x00 */ uint16_t num_verts; // 0x0A00 unless last
	/* 0x02 */ uint32_t unknown_2; // 0x50 unless last, flags maybe? 1st bit is always set on last chunk.
};

// vertex stream is likely a multiple of 9, but this does not add up to the total vertex count. It will always have more than needed.
// characters\enemy\enm_amoeboid_small_ps4\enm_amoeboid_small_ps4.model (file with smallest morph section)
// 6 affected subsets: 1, 4, 6, 9, 12, 15
// vertex byte sizes: 94188, 45848, 25264, 13544, 4088, 2012
// index byte sizes: 1208, 588, 324, 176, 56, 28
// subset vertex count: 9660, 4702, 2591, 1389, 419, 206
// somehow this all relates to each other.
// vertex size / vertex count = always 9.75~
// vertex size - vertex count * 9 = x / (index size / 2) = 11~ or 12~

// note: "vertex" and "index" are unverified assumptions 

struct morph_entry {
	/* 0x00 */ uint32_t id;
	/* 0x04 */ uint32_t name_offset; // from start of DAT1
	/* 0x08 */ uint32_t vertex_offset;
	/* 0x0C */ uint32_t index_offset; // maybe vertex_id list?
	/* 0x10 */ uint32_t unknown; // always 0x02 ?? ?? 00
	/* 0x14 */ float bounds[4]; // two points?
	/* 0x24 */ uint16_t subset_count;
	/* 0x26 */ uint16_t descriptor_size; // size of struct - 0x30
	/* 0x28 */ uint32_t vertex_size;
	/* 0x2C */ uint32_t index_size;
	// <start descriptors, size = descriptor_size>
	/* 0x30 */ uint8_t subset_ids[subset_count];
	// align(4)
	uint32_t vertex_offsets[subset_count];
	uint32_t index_offsets[subset_count];
	uint16_t vertex_counts[subset_count];
	// align(4)
	uint16_t chunk_start[subset_count];
	// align(4)
	morph_entry_desc_6 chunks[]; // until descriptor_size is reached. indexed by chunk_start.
	// align(4)
};
