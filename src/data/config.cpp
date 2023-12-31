// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/config.hpp>
#include <rivet/ddl/serialization.hpp>
#include <rivet/hash/type_id_registry.hpp>

using namespace rivet::type_id;

namespace rivet::data {
	config_type::config_type(const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet_ddl_base(serialized) {
		type = serialized->get_field<std::string_view>(type_type_id);
	}

	auto
	config_type::from_substruct(const rivet_type_id type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<rivet_ddl_base> {
		if (type_id == type_name_type_id) {
			return std::make_shared<config_type>(serialized);
		}

		return nullptr;
	}

	auto
	config_type::from_substruct(const rivet_type_id type_id) -> std::shared_ptr<rivet_ddl_base> {
		if (type_id == type_name_type_id) {
			return std::make_shared<config_type>();
		}

		return nullptr;
	}

	config::config(const std::shared_ptr<rivet_data_array> &stream): data(stream) {
		data = rivet::data::dat1(stream);

		const auto asset_refs = data.get_section<rivet::structures::rivet_ref>(config_refs_type_id);
		auto type_blob = data.get_section_data(config_type_type_id);
		auto data_blob = data.get_section_data(config_data_type_id);

		if (type_blob == nullptr) {
			throw rivet::invalid_operation("config::config: invalid stream");
		}

		if (data_blob == nullptr) {
			throw rivet::invalid_operation("config::config: invalid stream");
		}

		const auto type_serialized = std::make_shared<rivet::ddl::serialized>(type_blob, data.buffer);
		value = std::make_shared<rivet::ddl::serialized>(data_blob, data.buffer);
		type = config_type(type_serialized);
		constructed_value = value->construct(type.type);

		if (asset_refs == nullptr) {
			return;
		}

		for (auto &ref : *asset_refs) {
			refs.emplace_back(ref, data.buffer->to_cstring_view(ref.name_offset));
		}
	}

	config::config(const asset_bundle &bundle, const rivet_size index): config(bundle.get_entry(index)) { }
} // namespace rivet::data
