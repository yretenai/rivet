// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <memory>
#include <new>
#include <sstream>
#include <string>
#include <utility>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	template<typename T, const int Alignment>
	struct rivet_array {
		std::shared_ptr<uint8_t[]> ptr = nullptr;
		std::size_t length = 0;
		std::size_t offset = 0;

		struct iterator {
			using iterator_category [[maybe_unused]] = std::forward_iterator_tag;
			using difference_type [[maybe_unused]] = std::ptrdiff_t;
			using value_type = T;
			using pointer = value_type *;
			using reference = value_type &;

			explicit iterator(pointer ptr) : array_ptr(ptr) { }

			reference operator*() const { return *array_ptr; }

			pointer operator->() { return array_ptr; }

			iterator &operator++() {
				array_ptr++;
				return *this;
			}

			iterator operator++(int) { // NOLINT(cert-dcl21-cpp)
				iterator tmp = *this;
				++(*this);
				return tmp;
			}

			friend bool operator==(const iterator &a, const iterator &b) { return a.array_ptr == b.array_ptr; };

			friend bool operator!=(const iterator &a, const iterator &b) { return a.array_ptr != b.array_ptr; };

			pointer array_ptr;
		};

		void alloc(size_t size) {
			ptr = std::shared_ptr<uint8_t[]>(new (std::align_val_t(Alignment)) T[size * sizeof(T)]);
		}

		rivet_array() {
			length = 0;
			offset = 0;
			ptr = nullptr;
		}

		rivet_array(T *ptr, std::size_t size) : length(size) {
			alloc(size);

			if (ptr != nullptr) {
				std::copy_n(ptr, length, data());
			}
		}

		[[maybe_unused]] rivet_array(T *ptr, std::size_t size, const T &default_value) : rivet_array(ptr, size) {
			auto buffer = data();
			for (auto i = 0; i < length; ++i) {
				buffer[i] = default_value;
			}
		}

		[[maybe_unused]] rivet_array(std::shared_ptr<uint8_t[]> ptr, std::size_t length, std::size_t offset) : ptr(std::move(ptr)), length(length), offset(offset) { }

		RIVET_INLINE T *data() const { return reinterpret_cast<T *>(ptr.get() + offset * sizeof(T)); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool is_aligned() const { return reinterpret_cast<intptr_t>(ptr.get() + offset) % Alignment; }

		[[nodiscard]] RIVET_INLINE std::size_t size() const { return length; }

		[[nodiscard]] RIVET_INLINE std::size_t byte_size() const { return size() * sizeof(T); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool empty() const { return size() <= 0 || ptr == nullptr; }

		[[maybe_unused]] RIVET_INLINE T &operator[](std::size_t index) const { return get(index); }

		iterator begin() const { return iterator(data()); }

		iterator end() const { return iterator(data() + size()); }

		[[maybe_unused]] T &get(std::size_t index) const {
			assert(index < size());

			return data()[index];
		}

		template<typename U>
		[[maybe_unused]] U get(std::size_t index) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());

			return reinterpret_cast<U *>(data() + index)[0];
		}

		[[maybe_unused]] void set(std::size_t index, T value) {
			assert(index < size());

			data()[index] = value;
		}

		template<typename U>
		[[maybe_unused]] U set(std::size_t index, U value) {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());

			reinterpret_cast<U *>(data() + index)[0] = value;
		}

		[[maybe_unused]] [[nodiscard]] std::shared_ptr<rivet_array<T, Alignment>> slice(std::size_t &index, std::size_t count) const {
			assert(index < size());
			assert(index + count < size());

			std::make_shared<rivet_array<T, Alignment>>(ptr, count, offset + index);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> slice(std::size_t index, std::size_t count) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) * count < byte_size());
			auto new_offset = (offset + index) * sizeof(T) / sizeof(U);

			return std::make_shared<rivet_array<T, Alignment>>(ptr, count, new_offset);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> cast() const {
			auto new_size = length * sizeof(T) / sizeof(U);
			auto new_offset = offset * sizeof(T) / sizeof(U);

			return std::make_shared<rivet_array<U, Alignment>>(ptr, new_size, new_offset);
		}

		[[maybe_unused]] void copy_to(std::shared_ptr<rivet_array<T, Alignment>> &array, std::size_t index, std::size_t count) {
			assert(array->size() > count);
			assert(index < size());
			assert(index + count < size());

			std::copy_n((data() + index), count, array->data());
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value, void>::type ensure_null_terminated() {
			auto buffer = ptr;
			if (buffer[size() - 1] != 0) {
				length += 1;
				alloc(length);
				std::copy_n(buffer.get(), size() - 1, data());
				data()[size() - 1] = static_cast<T>(0);
			}
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value, std::string>::type to_string() {
			ensure_null_terminated<U>();
			return std::string(reinterpret_cast<char *>(data()), size());
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value, std::wstring>::type to_wstring() {
			ensure_null_terminated<U>();
			if (sizeof(U) == 1) {
				return std::wstring(to_string());
			}

			return std::wstring(reinterpret_cast<wchar_t *>(data()), size());
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value, std::stringstream>::type to_string_stream() {
			ensure_null_terminated<U>();
			return std::stringstream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out);
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) == 2 && std::is_same<U, T>::value && std::is_integral<U>::value, std::wstringstream>::type to_wstring_stream() {
			ensure_null_terminated<U>();
			return std::wstringstream(reinterpret_cast<wchar_t *>(data()), std::ios::in | std::ios::out);
		}

		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(T) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value, std::iostream>::type to_stream() {
			return std::iostream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out, byte_size());
		}

		[[maybe_unused]] std::vector<T> to_vector() { return std::vector<T>(data(), data() + size()); }
	};

	using rivet_data_array_t = std::shared_ptr<rivet_array<uint8_t, RIVET_ALIGNMENT>>;
}
