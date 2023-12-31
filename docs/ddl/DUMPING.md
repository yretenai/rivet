# dumping ddl structures

use a memory dumped executable, as these structures are initially empty, engine fills them on boot

it is possible to make a dll hook that does this, in theory you could just cast the pointers to the C structs.

note: the signatures below use SIMD instructions.

if the engine is compiled without SIMD support or uses a more recent instruction set,
the instructions will be different

### finding hash_map<br/>-> map<?, type_descriptor*>*

`0f 57 c0 48 8d [?? ?? ?? ?? ??] 0f 11 05 ?? ?? ?? ?? 0f 11 05 ?? ?? ?? ?? 0f 11 05`

relative address in the `[ ]` block is the offset to a pointer that leads to the hash_map struct

### finding type_descriptor<br/>-> type_descriptor**

`48 8d [?? ?? ?? ?? ??] 66 89 41 14 8b ?? ?? ?? ?? ?? 48 89 ?? ?? ff c0 89 [?? ?? ?? ?? ??] c3`

relative address in the `[ ]` block  is the offset to a pointer that leads to the type_descriptor* array

### finding the array size of type_descriptor*<br/>-> int

`48 8d ?? ?? ?? ?? ?? 66 89 41 14 8b [?? ?? ?? ?? ??] 48 89 ?? ?? ff c0 89 ?? ?? ?? ?? ?? c3`

relative address in the `[ ]` block is the offset to the array count (note this is the same function as above)

### finding function_descriptor<br/>-> function_descriptor**

`48 8b [?? ?? ?? ?? ??] 48 85 c0 74 07 48 89 81 88 00 00`

this is a linked list.

relative address in the `[ ]` block is the offset to a pointer that leads to the last function_descriptor* entry. +8 = count, +16 = some pointer?

the value +0 is a pointer that can be leading into heap memory!

### c structs
```c
enum field_type : unsigned char {
    ...
};

enum field_array_type : unsigned char {
    FIELD_ARRAY_TYPE_SCALAR, // not an array
    FIELD_ARRAY_TYPE_FIXED,
    FIELD_ARRAY_TYPE_DYNAMIC,
    FIELD_ARRAY_TYPE_HASHMAP,
};

struct type_info_ex_type_13 {
    // i think this is used to "restrict" base class inheritance chain
    // for example "Test" can define a field called "Nya" which is a "BaseType"
    // a type that inherits "Test" can restrict this to "ExtendedType", turning "BaseType Nya" to "ExtendedType Nya"
    type_info type; // NOTE This is not a pointer, the struct directly references another type.
};

struct type_info_ex_type_12 {
    int count;
    int unknown4;
    void* unknown8; // as far as i can tell this is always zero
    void* unknown16; // ditto
    int* values;
    const char** names;
    int* ids;
};

struct type_ex_select_info {
    int type_id;
    int count;
    void* unknown8; // as far as i can tell this is always zero
    void* unknown16; // ditto
    int* ids;
    const char** names;
    const char** descriptions;
    const char** labels;
};

struct type_info_ex_type_11 {
    type_ex_select_info* select_info;
};

struct type_info {
    const char* name;
    int type_id;
    int function_id; // prius structs will usually have a non-zero function_id
    int parent_id;
    int allocation_size; // size of the entire struct
    short field_count;
    unsigned char unknowns[38]; // most are zero, some large values.
    void** field_ex; // type_info_ex_type_11 ("select"), type_info_ex_type_12 (bitset), type_info_ex_type_13 (object)
    int* field_ids; // note: this is not per-se the id that is written to the file? hash field_name to get the real serialized id
    const char** field_names;
    field_type* field_types;
    field_array_type* field_array_types;
    unsigned char* field_tag_types; // assumption, usually 0xE
    unsigned char* field_mutable_flags; // assumption, usually 0x0, sometimes 0x1
    int* field_offsets; // offset into the struct
    int* field_type_ids; // type_info.type_id, can be a bitset or enum id
    const char** field_descriptions; // usually NONE
    const char** field_labels; // usually NONE
    const char** field_names2; // identical to field_names (usually)
};

struct type_descriptor {
    void*** vtable; // or ctor?
    const char* name; // same as type_info.name
    int type_id; // same as type_info.type_id
    int index; // index into root_types
    type_descriptor** parent; // points to another type_descriptor, init chain?
};

struct hash_map {
    void** buckets;
    type_info** values; // read capacity entries, address can be zero
    int count;
    int capacity;
};

struct function_entry {
    void* unknown0; // zero?
    void* unknown8; // zero?
    void* unknown10; // zero?
    void* unknown18; // zero?
    void* unknown20; // zero?
    void* unknown28; // zero?
    void* unknown30; // zero?
    void* unknown38; // zero?
    void* unknown40; // zero?
    void* unknown48; // zero?
    void* unknown50; // zero?
    void* unknown58; // zero?
    const char* name;
    void* unknown68; // zero?
    void* unknown70; // zero?
    int size; // ????
    int id;
    function_entry* parent;
    function_entry* previous;
    void* unknown90; // zero?
    void* unknown98; // zero?
    void* unknowna0; // zero?
    void* unknowna8; // zero?
    void* unknownb0; // zero?
    void* unknownb8; // zero?
    void* unknownc0; // zero?
    type_info* type;
    void* ctor;
    int unknownd8; // zero?
    unsigned short offset; // goes down as you go up in parents?
    unsigned short offset_again; // matches offset
    short unknowne0; // -1?
    unsigned int flags; // 1 or 0x1400001?
    uint16_t index;
};

```
