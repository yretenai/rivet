// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/hash/type_id.hpp>

#include "codegen/ddl_dump_schema.hpp"
#include "codegen/template.hpp"

using namespace std::filesystem;
using namespace std;
using namespace rivet;

[[maybe_unused]] auto
handle_exit(const std::string &name, const clipp::group &cli, const bool version_flag, const bool help_flag) -> int {
	if (version_flag) {
		std::cout << name << " version 1\n";
		return 0;
	}

	if (help_flag) {
		std::cout << make_man_page(cli, name) << '\n';
		return 1;
	}

	std::cout << clipp::usage_lines(cli, name) << '\n';
	return 1;
}

auto
replace_stringview(std::string &str, const std::string_view &search, const std::string_view &target) -> std::string {
	size_t start_pos = 0;
	while ((start_pos = str.find(search, start_pos)) != std::string::npos) {
		str.replace(start_pos, search.length(), target);
		start_pos += target.length();
	}

	return str;
}

auto
replace_string(std::string &str, const std::string_view &search, const std::string &target) -> std::string {
	// escape quotes and newlines
	std::stringstream stream;
	stream << std::quoted(target);
	std::string quoted_str = stream.str();
	size_t start_pos = 0;
	while ((start_pos = quoted_str.find('\n', start_pos)) != std::string::npos) {
		quoted_str.replace(start_pos, 1, "\\n");
		start_pos += 1;
	}

	return replace_stringview(str, search, quoted_str);
}

auto
gather_base_defined_types(const dump_root &root, const uint32_t type_id, std::unordered_set<uint32_t> &visited) -> std::unordered_set<uint32_t> { // NOLINT(*-no-recursion)
	if (type_id == 0) {
		return {};
	}

	if (visited.contains(type_id)) {
		return {}; // already visited
	}

	const auto entry = root.lookup.find(type_id);
	if (entry == root.lookup.end()) {
		throw std::runtime_error("unknown type");
	}

	visited.insert(type_id);

	if (!std::holds_alternative<std::shared_ptr<struct_info>>(entry->second)) {
		return {};
	}

	const auto struct_ = std::get<std::shared_ptr<struct_info>>(entry->second);

	std::unordered_set<uint32_t> field_ids;
	for (const auto &[name, type_name, allow_base_type, type, array_type, default_value] : struct_->fields) {
		field_ids.insert(type_name.id);
	}

	auto base = gather_base_defined_types(root, struct_->base_name.id, visited);
	field_ids.insert(base.begin(), base.end());

	return field_ids;
}

auto
generate_struct(const dump_root &root, const std::shared_ptr<struct_info> &struct_, const path &include_path, const path &source_path,
				std::unordered_map<uint32_t, std::vector<std::string>> &enum_list) -> std::string {
	auto struct_name = struct_->name.get_name_safe();
	auto struct_id = struct_->name.get_id_hex();
	std::cout << "generating struct " << struct_name << '\n';

	auto header = std::string(template_struct_hpp);
	auto source = std::string(template_struct_cpp);

	std::stringstream header_includes;
	std::stringstream fwd_decls;
	std::stringstream type_ids;
	std::stringstream fields;

	std::stringstream includes;
	std::stringstream field_init;
	std::stringstream substructs;

	std::unordered_set<std::string> header_includes_set;
	std::unordered_set<std::string> fwd_decls_set;
	std::unordered_set<std::string> includes_set;

	std::unordered_set<uint32_t> referenced_types;

	replace_stringview(header, "%struct_name%", struct_name);
	replace_stringview(source, "%struct_name%", struct_name);

	replace_stringview(header, "%struct_id%", struct_id);
	replace_stringview(source, "%struct_id%", struct_id);

	auto base = struct_->base_name.get_name_safe();
	if (struct_->base_name.id == 0) {
		base = default_base_struct_name;
	} else {
		auto struct_path = std::string(ddl_include);
		replace_stringview(struct_path, "%name%", base);
		header_includes_set.insert(struct_path);

		referenced_types.insert(struct_->base_name.id);
	}
	replace_stringview(header, "%base_struct_name%", base);
	replace_stringview(source, "%base_struct_name%", base);

	std::unordered_set<uint32_t> visited;
	auto base_fields = gather_base_defined_types(root, struct_->base_name.id, visited);

	for (const auto &[name, type_name, allow_base_type, type, array_type, default_value] : struct_->fields) {
		if (base_fields.contains(type_name.id)) {
			continue;
		}

		auto type_id = std::string(template_struct_type_id);
		auto field_name = name.get_name_safe();
		auto field_id = to_hex(rivet::hash::hash_type_id(field_name));

		if (field_name == struct_name) {
			field_name += "_";
		}

		replace_stringview(type_id, "%name%", field_name);
		replace_stringview(type_id, "%id%", field_id);
		type_ids << type_id << '\n';

		auto field_fwd = std::string(template_struct_field);
		auto field_ctor = std::string(template_struct_field_init);

		auto is_array = array_type != serialized_array_type::none;

		switch (type) {
			case structures::rivet_serialized_type::uint8:
				assert(type_name.id == rivet::structures::ddl_uint8_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<uint8_t>" : "uint8_t");
				replace_stringview(field_ctor, "%field_type%", "uint8");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::uint16:
				assert(type_name.id == rivet::structures::ddl_uint16_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<uint16_t>" : "uint16_t");
				replace_stringview(field_ctor, "%field_type%", "uint16");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::uint32:
				assert(type_name.id == rivet::structures::ddl_uint32_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<uint32_t>" : "uint32_t");
				replace_stringview(field_ctor, "%field_type%", "uint32");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::tuid:
			case structures::rivet_serialized_type::instance_id:
			case structures::rivet_serialized_type::uint64:
				assert(type_name.id == rivet::structures::ddl_uint64_type_id || type_name.id == rivet::structures::ddl_instance_id_type_id || type_name.id == rivet::structures::ddl_tuid_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<uint64_t>" : "uint64_t");
				replace_stringview(field_ctor, "%field_type%", "uint64");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::int8:
				assert(type_name.id == rivet::structures::ddl_int8_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<int8_t>" : "int8_t");
				replace_stringview(field_ctor, "%field_type%", "int8");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::int16:
				assert(type_name.id == rivet::structures::ddl_int16_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<int16_t>" : "int16_t");
				replace_stringview(field_ctor, "%field_type%", "int16");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::int32:
				assert(type_name.id == rivet::structures::ddl_int32_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<int32_t>" : "int32_t");
				replace_stringview(field_ctor, "%field_type%", "int32");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::int64:
				assert(type_name.id == rivet::structures::ddl_int64_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<int64_t>" : "int64_t");
				replace_stringview(field_ctor, "%field_type%", "int64");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::float32:
				assert(type_name.id == rivet::structures::ddl_float_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<float>" : "float");
				replace_stringview(field_ctor, "%field_type%", "float");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::float64:
				assert(type_name.id == rivet::structures::ddl_double_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<double>" : "double");
				replace_stringview(field_ctor, "%field_type%", "double");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::file:
			case structures::rivet_serialized_type::string:
				assert(type_name.id == rivet::structures::ddl_file_type_id || type_name.id == rivet::structures::ddl_json_type_id || type_name.id == rivet::structures::ddl_string_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_ctor, "%field_type%", "string");
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<std::string_view>" : "std::string_view");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			case structures::rivet_serialized_type::enum_value:
				{
					/*
					replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
					replace_stringview(field_ctor, "%field_type%", "string");
					replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<std::string_view>" : "std::string_view");
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
*/
					auto enum_path = std::string(ddl_enum_include);
					auto enum_full_name = "rivet::ddl::generated::" + type_name.get_name_safe();
					replace_stringview(enum_path, "%enum_name%", type_name.get_name_safe());
					header_includes_set.insert(enum_path);
					replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_enum_array : template_struct_field_enum);
					replace_stringview(field_ctor, "%field_type%", enum_full_name);
					replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<" + enum_full_name + ">" : enum_full_name);
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
				}
				break;
			case structures::rivet_serialized_type::bitfield:
				{
					/*
					replace_stringview(field_ctor, "%field_init%", template_struct_field_array);
					replace_stringview(field_ctor, "%field_type%", "string");
					replace_stringview(field_fwd, "%field_type%", "std::vector<std::string_view>");
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
					*/
					auto bitset_path = std::string(ddl_bitset_include);
					auto bitset_full_name = "rivet::ddl::generated::" + type_name.get_name_safe();
					replace_stringview(bitset_path, "%bitset_name%", type_name.get_name_safe());
					header_includes_set.insert(bitset_path);
					replace_stringview(field_ctor, "%field_init%", template_struct_field_bitset);
					replace_stringview(field_ctor, "%field_type%", bitset_full_name);
					replace_stringview(field_fwd, "%field_type%", bitset_full_name);
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
				}
				break;
			case structures::rivet_serialized_type::object:
				{
					auto struct_path = std::string(ddl_include);
					auto struct_full_name = "rivet::ddl::generated::" + type_name.get_name_safe();
					auto struct_fwd_decl = std::string(template_struct_fwd_decl);
					replace_stringview(struct_path, "%name%", type_name.get_name_safe());
					replace_stringview(struct_fwd_decl, "%struct_name%", type_name.get_name_safe());
					includes_set.insert(struct_path);
					fwd_decls_set.insert(struct_fwd_decl);
					referenced_types.insert(type_name.id);
					replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_struct_array : template_struct_field_struct);
					replace_stringview(field_ctor, "%field_type%", struct_full_name);
					replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<std::shared_ptr<" + struct_full_name + ">>" : "std::shared_ptr<" + struct_full_name + ">");
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
				}
				break;
			case structures::rivet_serialized_type::json:
				{
					replace_stringview(field_ctor, "%field_init%", template_struct_field_any);
					replace_stringview(field_fwd, "%field_type%", "std::optional<std::vector<rivet::structures::rivet_serialized_value>>");
					replace_stringview(field_ctor, "%field_type%", "std::optional<std::vector<rivet::structures::rivet_serialized_value>>");
					replace_stringview(field_fwd, "%field_name%", field_name);
					replace_stringview(field_ctor, "%field_name%", field_name);
				}
				break;
			case structures::rivet_serialized_type::boolean:
				assert(type_name.id == rivet::structures::ddl_boolean_type_id);
				replace_stringview(field_ctor, "%field_init%", is_array ? template_struct_field_array : template_struct_field_value);
				replace_stringview(field_fwd, "%field_type%", is_array ? "std::vector<bool>" : "bool");
				replace_stringview(field_ctor, "%field_type%", "bool");
				replace_stringview(field_fwd, "%field_name%", field_name);
				replace_stringview(field_ctor, "%field_name%", field_name);
				break;
			default: throw std::runtime_error("unknown type");
		}

		if (default_value.has_value() && field_ctor.find("%default%") != std::string::npos) {
			const auto default_value_json = default_value.value();
			if (default_value_json.is_object()) {
				replace_string(field_ctor, "%default%", default_value_json["value"].get<std::string>());
			} else if (default_value_json.is_boolean()) {
				replace_stringview(field_ctor, "%default%", default_value_json.get<bool>() ? "true" : "false");
			} else if (default_value_json.is_number_unsigned() || type == structures::rivet_serialized_type::enum_value) {
				if (type == structures::rivet_serialized_type::enum_value) {
					auto enum_values = enum_list[type_name.id];
					if (auto n = default_value_json.get<uint64_t>(); n >= enum_values.size()) {
						replace_stringview(field_ctor, "%default%", std::to_string(n));
					} else {
						replace_stringview(field_ctor, "%default%", enum_values[n]);
					}
				} else {
					replace_stringview(field_ctor, "%default%", std::to_string(default_value_json.get<uint64_t>()));
				}
			} else if (default_value_json.is_number_integer()) {
				replace_stringview(field_ctor, "%default%", std::to_string(default_value_json.get<int64_t>()));
			} else if (default_value_json.is_number_float()) {
				replace_stringview(field_ctor, "%default%", std::to_string(default_value_json.get<double>()));
			} else {
				replace_stringview(field_ctor, "%default%", "{}");
			}
		} else {
			replace_stringview(field_ctor, "%default%", "{}");
		}

		fields << field_fwd << '\n';
		field_init << field_ctor << '\n';
	}

	auto root_substruct = std::string(template_struct_substruct);

	replace_stringview(root_substruct, "%struct_name%", struct_name);

	substructs << root_substruct << '\n';

	for (const auto &descendant : struct_->descendants) {
		auto substruct = std::string(template_struct_substruct_recur);

		auto substruct_name = descendant.get_name_safe();
		replace_stringview(substruct, "%struct_name%", substruct_name);

		substructs << substruct << '\n';

		auto struct_path = std::string(ddl_include);
		replace_stringview(struct_path, "%name%", substruct_name);
		includes_set.insert(struct_path);

		referenced_types.insert(descendant.id);
	}

	for (const auto &include : header_includes_set) {
		header_includes << include << '\n';
	}

	for (const auto &include : includes_set) {
		includes << include << '\n';
	}

	for (const auto &decl : fwd_decls_set) {
		fwd_decls << decl << '\n';
	}

	if (fwd_decls.tellp() > 0) {
		fwd_decls.seekp(-1, std::ios_base::end);
		fwd_decls << ' ';
	}

	if (type_ids.tellp() > 0) {
		type_ids.seekp(-1, std::ios_base::end);
		type_ids << ' ';
	}

	if (fields.tellp() > 0) {
		fields.seekp(-1, std::ios_base::end);
		fields << ' ';
	}

	if (header_includes.tellp() > 0) {
		header_includes.seekp(-1, std::ios_base::end);
		header_includes << ' ';
	}

	replace_stringview(header, "%includes%", header_includes.str());
	replace_stringview(header, "%fwd_decls%", fwd_decls.str());
	replace_stringview(header, "%type_ids%", type_ids.str());
	replace_stringview(header, "%fields%", fields.str());

	if (includes.tellp() > 0) {
		includes.seekp(-1, std::ios_base::end);
		includes << ' ';
	}

	if (field_init.tellp() > 0) {
		field_init.seekp(-1, std::ios_base::end);
		field_init << ' ';
	}

	if (substructs.tellp() > 0) {
		substructs.seekp(-1, std::ios_base::end);
		substructs << ' ';
	}

	replace_stringview(source, "%includes%", includes.str());
	replace_stringview(source, "%field_init%", field_init.str());
	replace_stringview(source, "%substructs%", substructs.str());

	replace_stringview(header, "\n\n\n", "\n");
	replace_stringview(source, "\n\n\n", "\n");

	auto hpp_path = include_path / (struct_name + ".hpp");
	std::ofstream hpp_file(hpp_path, std::ios::out | std::ios::binary | std::ios::trunc);
	hpp_file.write(header.data(), static_cast<std::streamsize>(header.size()));
	hpp_file.close();

	auto cpp_path = source_path / (struct_name + ".cpp");
	std::ofstream cpp_file(cpp_path, std::ios::out | std::ios::binary | std::ios::trunc);
	cpp_file.write(source.data(), static_cast<std::streamsize>(source.size()));
	cpp_file.close();

	return struct_name + ".cpp";
}

void
generate_enum(const std::shared_ptr<enum_info> &enum_, const path &include_path, std::unordered_map<uint32_t, std::vector<std::string>> &enum_list) {
	auto enum_name = enum_->name.get_name_safe();
	auto enum_id = enum_->name.get_id_hex();
	std::cout << "generating enum " << enum_name << '\n';

	auto header = std::string(template_enum_hpp);

	replace_stringview(header, "%enum_name%", enum_name);
	replace_stringview(header, "%enum_id%", enum_id);
	replace_stringview(header, "%enum_value_type%", template_enum_field_value_type);
	replace_stringview(header, "%enum_count%", std::to_string(enum_->values.size()));

	std::stringstream decl_fields;
	std::stringstream labels;
	std::stringstream fields;

	enum_list[enum_->name.id] = {};

	for (const auto &[name, decl_name, friendly_name, label] : enum_->values) {
		auto value_name = name.get_name_safe();
		auto field_decl_name = decl_name.get_name_safe();
		auto field_label_name = label.get_name_safe();

		auto field_decl = std::string(template_enum_field_decl);
		replace_stringview(field_decl, "%field_name%", field_decl_name);
		decl_fields << field_decl << '\n';

		auto field_label = std::string(template_enum_field_decl);
		replace_stringview(field_label, "%field_name%", field_label_name);
		labels << field_label << '\n';

		auto field = std::string(template_enum_field);
		replace_stringview(field, "%field_name%", value_name);
		fields << field << '\n';

		enum_list[enum_->name.id].emplace_back("rivet::ddl::generated::" + enum_name + "::" + value_name);
	}

	decl_fields.seekp(-1, std::ios_base::end);
	decl_fields << ' ';
	labels.seekp(-1, std::ios_base::end);
	labels << ' ';
	fields.seekp(-1, std::ios_base::end);
	fields << ' ';

	replace_stringview(header, "%decl_fields%", decl_fields.str());
	replace_stringview(header, "%labels%", labels.str());
	replace_stringview(header, "%fields%", fields.str());

	auto hpp_path = include_path / (enum_name + ".hpp");
	std::ofstream hpp_file(hpp_path, std::ios::out | std::ios::binary | std::ios::trunc);
	hpp_file.write(header.data(), static_cast<std::streamsize>(header.size()));
	hpp_file.close();
}

void
generate_bitset(const std::shared_ptr<bitset_info> &bitset, const path &include_path) {
	auto bitset_name = bitset->name.get_name_safe();
	std::cout << "generating bitset " << bitset_name << '\n';
	auto bitset_id = bitset->name.get_id_hex();

	auto header = std::string(template_bitset_hpp);

	replace_stringview(header, "%enum_name%", bitset_name);
	replace_stringview(header, "%enum_id%", bitset_id);
	replace_stringview(header, "%enum_value_type%", template_bitset_field_value_type);
	replace_stringview(header, "%enum_count%", std::to_string(bitset->values.size()));

	std::stringstream decl_fields;
	std::stringstream fields;

	for (const auto &value : bitset->values) {
		auto value_name = value.name.get_name_safe();
		auto decl_name = value.decl_name.get_name_safe();

		auto field_decl = std::string(template_bitset_field_decl);
		replace_stringview(field_decl, "%field_name%", decl_name);
		replace_stringview(field_decl, "%field_value%", value.get_value_hex());
		decl_fields << field_decl << '\n';

		auto field = std::string(template_bitset_field);
		replace_stringview(field, "%field_name%", value_name);
		replace_stringview(field, "%field_value%", value.get_value_hex());
		fields << field << '\n';
	}

	decl_fields.seekp(-1, std::ios_base::end);
	decl_fields << ' ';
	fields.seekp(-1, std::ios_base::end);
	fields << ' ';

	replace_stringview(header, "%decl_fields%", decl_fields.str());
	replace_stringview(header, "%fields%", fields.str());

	auto hpp_path = include_path / (bitset_name + ".hpp");
	std::ofstream hpp_file(hpp_path, std::ios::out | std::ios::binary | std::ios::trunc);
	hpp_file.write(header.data(), static_cast<std::streamsize>(header.size()));
	hpp_file.close();
}

auto
main(const int argc, char **argv) -> int { // NOLINT(*-exception-escape)
#ifdef _NDEBUG
	std::cerr << "rivet-coedgen-ddl is only available in debug builds.\n";
	return 1;
#else
	std::string input_file;
	std::string output_dir;
	bool version_flag = false;
	bool help_flag = false;

	if (auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help", clipp::option("-v", "--version").set(version_flag, true) % "show version"),
					clipp::option("-i", "--input-file") & clipp::value("input-file", input_file) % "type dump file",
					clipp::option("-o", "--output-dir") & clipp::value("output_dir", output_dir) % "output directory");
		!parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-codegen-ddl", cli, version_flag, help_flag);
	}

	auto json_text = std::string();
	std::ifstream json_file(input_file, std::ios::in | std::ios::binary);
	if (!json_file.is_open()) {
		std::cerr << "failed to open input file: " << input_file << '\n';
		return 1;
	}

	json_file.seekg(0, std::ios::end);
	auto json_size = json_file.tellg();
	json_text.resize(json_size);
	json_file.seekg(0, std::ios::beg);
	json_file.read(json_text.data(), json_size);
	json_file.close();

	auto json = nlohmann::json::parse(json_text);

	dump_root root;
	root.from_json(json);

	auto include_path = path(output_dir) / "include" / "rivet" / "ddl" / "generated";
	create_directories(include_path);

	auto enum_path = include_path / "enums";
	create_directories(enum_path);

	auto bitset_path = include_path / "bitsets";
	create_directories(bitset_path);

	auto source_path = path(output_dir) / "gen";
	create_directories(source_path);

	std::stringstream meson_build_files;

	std::unordered_map<uint32_t, std::vector<std::string>> enum_types;
	for (const auto &enum_ : root.enums) {
		generate_enum(enum_, enum_path, enum_types);
	}

	for (const auto &bitset : root.bitsets) {
		generate_bitset(bitset, bitset_path);
	}

	std::unordered_set<uint32_t> referenced_types;
	for (const auto &struct_ : root.structs) {
		if (referenced_types.contains(struct_->name.id)) {
			continue;
		}

		referenced_types.insert(struct_->name.id);

		meson_build_files << "\t'gen/" << generate_struct(root, struct_, include_path, source_path, enum_types) << "',\n";
	}

	std::unordered_set<std::string> includes_set;
	std::unordered_set<std::string> registration_set;
	auto registration = std::string(template_registration_cpp);
	for (const auto &root_item : root.roots) {
		auto root_name = root_item.get_name_safe();

		auto root_reg = std::string(template_registration);
		replace_stringview(root_reg, "%type_name%", root_name);
		registration_set.insert(root_reg);

		auto struct_path = std::string(ddl_include);
		replace_stringview(struct_path, "%name%", root_name);
		includes_set.insert(struct_path);
	}

	std::stringstream includes;
	for (const auto &include : includes_set) {
		includes << include << '\n';
	}

	if (includes.tellp() > 0) {
		includes.seekp(-1, std::ios_base::end);
		includes << ' ';
	}

	replace_stringview(registration, "%includes%", includes.str());

	std::stringstream registrations;
	for (const auto &reg : registration_set) {
		registrations << reg << '\n';
	}

	if (registrations.tellp() > 0) {
		registrations.seekp(-1, std::ios_base::end);
		registrations << ' ';
	}

	replace_stringview(registration, "%type_registrations%", registrations.str());

	auto registration_path = path(output_dir) / "src" / "rivet_ddl_registration.cpp";
	std::ofstream registration_stream(registration_path, std::ios::out | std::ios::binary | std::ios::trunc);
	registration_stream.write(registration.data(), static_cast<std::streamsize>(registration.size()));
	registration_stream.close();

	auto meson_file = std::string(meson_build);
	replace_stringview(meson_file, "%cxx_files%", meson_build_files.str());

	auto meson_path = source_path / "meson.build";
	std::ofstream meson_file_stream(meson_path, std::ios::out | std::ios::binary | std::ios::trunc);
	meson_file_stream.write(meson_file.data(), static_cast<std::streamsize>(meson_file.size()));
	meson_file_stream.close();

	return 0;
#endif
}
