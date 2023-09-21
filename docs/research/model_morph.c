/*
Overall structure:

morph_header_t
morph_lookup_entry_t[morph_header_t.lookup_count + 1];
morph_pair_entry_t[morph_header_t.pairs_count + 1];
morph_entry_t[morph_header_t.lookup_count + 1];
*/

struct morph_pair_entry_t {
	/* 0x00 */ uint32_t left_id; // LF_[name]
	/* 0x04 */ uint32_t right_id; // RT_[name]
};

struct morph_lookup_entry_t {
	/* 0x00 */ uint32_t id;
	/* 0x04 */ uint32_t offset;
};

struct morph_header_t {
	/* 0x00 */ uint32_t zero;
	/* 0x04 */ uint32_t size;
	/* 0x08 */ uint16_t lookup_count;
	/* 0x0A */ uint16_t pairs_count;
	/* 0x0C */ uint32_t lookup_offset;
};

struct morph_entry_vertex_chunk_t {
	/* 0x00 */ uint16_t num_verts;
	/* 0x02 */ uint32_t num_indices;
};

struct range_t {
	/* 0x00 */ float max;
	/* 0x04 */ float min;
};


// chunk bits = element_count * element_bit_size * verts
// read as a bit stream, 1 = pos, 2 = norm, 3 = ?, 4 = ?
// unpack = base_value + max * morph_value + min;
struct morph_entry_t {
	/* 0x00 */ uint32_t id;
	/* 0x04 */ uint32_t name_offset; // from start of DAT1
	/* 0x08 */ uint32_t vertex_offset;
	/* 0x0C */ uint32_t index_offset; // maybe vertex_id list?
	/* 0x10 */ uint8_t element_count; // usually 2.
	/* 0x11 */ uint8_t element_bit_size;
	/* 0x12 */ uint8_t component_bit_size;
	/* 0x13 */ uint8_t padding;
	/* 0x14 */ range_t ranges[element_count]; // offset comments assume 2.
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
	morph_entry_vertex_chunk_t chunks[]; // until descriptor_size is reached. indexed by chunk_start.
	// align(4)
};
