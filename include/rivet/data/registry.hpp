// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// based on
// https://www.cppstories.com/2018/02/factory-selfregister/ and
// https://stackoverflow.com/questions/60728688/templated-automatic-factory-registration

#include <cassert>
#include <functional>
#include <iterator>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::data {
	namespace registry {
		template<typename T>
		struct data_registry_impl {
			std::unordered_map<rivet_typeid_t, std::pair<std::string, std::function<std::shared_ptr<T>(std::shared_ptr<rivet_data_array_t> &)>>> registry = {};

			void init(const rivet_typeid_t type_id, const std::string &name, std::function<std::shared_ptr<T>(std::shared_ptr<rivet_data_array_t> &)> ctor) {
				assert(registry.find(type_id) == registry.end());
				registry[type_id] = std::move(std::make_pair(name, std::move(ctor)));
			}

			std::shared_ptr<T> operator()(const rivet_typeid_t key, std::shared_ptr<rivet_data_array_t> &buffer) const {
				return registry.at(key).second(buffer);
			}
		};

		template<typename T>
		data_registry_impl<T> &data_registry() {
			static data_registry_impl<T> result;
			return result;
		}

		template<typename T, typename U>
		struct register_data_ctor {
			struct helper {
				helper() {
					data_registry<T>().init(U::type_id, U::type_name, [](std::shared_ptr<rivet_data_array_t> &data) -> std::shared_ptr<T> {
						return std::reinterpret_pointer_cast<T>(std::make_shared<U>(data));
					});
				};
			};

			static helper h;
			template<helper &>
			struct ref {
				using type = register_data_ctor;
			};
			using type = typename ref<h>::type;
		};

		template<typename T, typename U>
		typename register_data_ctor<T, U>::helper register_data_ctor<T, U>::h;

		void RIVET_SHARED dump_registries();
	}

	struct data_file;
	template<typename T>
	using register_data_handler = registry::register_data_ctor<data_file, T>::type;

	namespace section {
		struct data_section;
		template<typename T>
		using register_data_section_handler = registry::register_data_ctor<data_section, T>::type;
	}
}
