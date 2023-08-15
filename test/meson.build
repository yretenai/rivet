test_0001 = executable('rivet-test0001-version', 'rivet_version_test.cpp',
	dependencies: [rivetdep],
	install: true,
	link_args: [],
	cpp_args: cxxargs)

test_0002 = executable('rivet-test0002-data_type', 'rivet_data_type_test.cpp',
	dependencies: [rivetdep],
	install: true,
	link_args: [],
	cpp_args: cxxargs)

test_0003 = executable('rivet-test0003-data_section', 'rivet_data_section_test.cpp',
	dependencies: [rivetdep],
	install: true,
	link_args: [],
	cpp_args: cxxargs)

test('rivet should report a correct version', test_0001)
test('rivet data_type_registry should insert data handlers', test_0002)
test('rivet data_section_registry should insert data section handlers', test_0003)
