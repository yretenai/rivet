// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string_view>
#include <tuple>

#include <ankerl/unordered_dense.h>

#include <rivet/data/dat1.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_ref.hpp>			// IWYU pragma: keep
#include <rivet/structures/rivet_serialization.hpp> // IWYU pragma: keep

namespace rivet::data {
	struct asset_bundle;

	// this is really more of a proof-of-concept on the serialization functions
	struct RIVET_SHARED config_type : rivet::structures::rivet_ddl_base {
		RIVET_DEFINE_TYPE_ID(type_name, "Config Type");
		RIVET_DEFINE_TYPE_ID(type, "Type");

		explicit config_type() = default;
		explicit config_type(const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view type;

		auto
		from_substruct(rivet_type_id type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<rivet_ddl_base> override;
	};

	struct RIVET_SHARED config {
		constexpr static rivet_type_id type_id = 0x21a56f68;

		RIVET_DEFINE_TYPE_ID(refs, "Config Asset Refs");
		RIVET_DEFINE_TYPE_ID(type, "Config Type");
		RIVET_DEFINE_TYPE_ID(data, "Config Built");

		explicit config(const std::shared_ptr<rivet_data_array> &stream);
		explicit config(const rivet::data::asset_bundle &bundle, rivet_size index = 0);

		rivet::data::dat1 data;
		config_type type;
		std::shared_ptr<rivet::structures::rivet_serialized_object> value;
		std::vector<std::tuple<rivet::structures::rivet_ref, std::string_view>> refs;
	};
} // namespace rivet::data
