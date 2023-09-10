struct morph_pair_entry {
	/* 0x00 */ uint32_t left; // LF_[name]
	/* 0x04 */ uint32_t right; // RT_[name]
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

struct morph_semantic_a {
	/* 0x00 */ uint16_t unknown_0;
	/* 0x02 */ uint16_t unknown_2;
};

struct morph_semantic_e {
	/* 0x00 */ uint16_t unknown_0;
	/* 0x02 */ uint16_t unknown_2;
	/* 0x04 */ uint16_t unknown_4;
};

struct morph_semantic_f {
	/* 0x00 */ uint32_t unknown_0;
	/* 0x04 */ uint16_t unknown_4;
	/* 0x06 */ uint16_t unknown_a;
	/* 0x08 */ uint32_t unknown_6;
};

struct morph_entry {
	/* 0x00 */ uint32_t id;
	/* 0x04 */ uint32_t name_offset;
	/* 0x08 */ uint32_t vertex_offset;
	/* 0x0C */ uint32_t index_offset;
	/* 0x10 */ uint32_t unknown;
	/* 0x14 */ float bounds[4]; // two points?
	/* 0x24 */ uint16_t semantic_count;
	/* 0x26 */ uint16_t semantic_descriptor_size; // size of struct - 0x30
	/* 0x28 */ uint32_t vertex_size;
	/* 0x2C */ uint32_t index_size;
	// <start semantic descriptors, size = semantic_descriptor_size>
	/* 0x30 */ uint8_t semantic[semantic_count]; // assumption. align!
	morph_semantic_a semantic_a[semantic_count];
	uint32_t semantic_b[semantic_count];
	uint16_t semantic_c[semantic_count];
	uint16_t semantic_d[semantic_count]; // looks like offsets
	morph_semantic_e semantic_e[semantic_count];
	morph_semantic_f semantic_f[semantic_count];
};
