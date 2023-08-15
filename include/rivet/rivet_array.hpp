// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cassert>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <iterator>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	template<typename T, const int Alignment>
	struct rivet_array {
		std::shared_ptr<T[]> ptr = nullptr;
		std::size_t length = 0;

		struct Iterator {
			using iterator_category [[maybe_unused]] = std::forward_iterator_tag;
			using difference_type [[maybe_unused]] = std::ptrdiff_t;
			using value_type = T;
			using pointer = value_type *;
			using reference = value_type &;

			explicit Iterator(pointer ptr) : array_ptr(ptr) { }

			reference operator*() const { return *array_ptr; }

			pointer operator->() { return array_ptr; }

			Iterator &operator++() {
				array_ptr++;
				return *this;
			}

			Iterator operator++(int) { // NOLINT(cert-dcl21-cpp)
				Iterator tmp = *this;
				++(*this);
				return tmp;
			}

			friend bool operator==(const Iterator &a, const Iterator &b) { return a.array_ptr == b.array_ptr; };

			friend bool operator!=(const Iterator &a, const Iterator &b) { return a.array_ptr != b.array_ptr; };

		private:
			pointer array_ptr;
		};

	private:
		std::size_t offset = 0;

		void alloc(size_t size) {
			ptr = std::shared_ptr<T[]>(new (std::align_val_t(Alignment)) T[size]);
		}

	public:
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
			for (auto i = 0; i < length; ++i) {
				ptr[i] = default_value;
			}
		}

	public:
		RIVET_INLINE T *data() const { return reinterpret_cast<T *>(reinterpret_cast<intptr_t>(ptr.get()) + offset); }

		[[nodiscard]] RIVET_INLINE bool is_aligned() const { return reinterpret_cast<intptr_t>(ptr.get() + offset) % Alignment; }

		[[nodiscard]] RIVET_INLINE std::size_t size() const { return length; }

		[[nodiscard]] RIVET_INLINE std::size_t byte_size() const { return size() * sizeof(T); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool empty() const { return size() <= 0 || ptr == nullptr; }

		[[maybe_unused]] RIVET_INLINE T &operator[](std::size_t index) const { return get(index); }

		Iterator begin() const { return Iterator(data()); }

		Iterator end() const { return Iterator(data() + size()); }

		[[maybe_unused]] void fill(const T &default_value) {
			for (auto i = 0; i < length; ++i) {
				ptr[i] = default_value;
			}
		}

		[[maybe_unused]] T &get(std::size_t index) const {
			assert(index < size());
			return data()[index];
		}

		[[maybe_unused]] T &get(std::size_t& index) const {
			assert(index < size());
			return data()[index++];
		}

		[[maybe_unused]] void set(std::size_t index, T value) {
			assert(index < size());
			data()[index] = value;
		}

		[[maybe_unused]] void set(std::size_t& index, T value) {
			assert(index < size());
			data()[index++] = value;
		}

		template<typename U>
		[[maybe_unused]] U get(std::size_t index) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());
			return reinterpret_cast<U *>(data() + index)[0];
		}

		template<typename U>
		[[maybe_unused]] U get(std::size_t& index) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());
			auto value = reinterpret_cast<U *>(data() + index)[0];
			index += sizeof(U) / sizeof(T);
			return value;
		}

		template<typename U>
		[[maybe_unused]] U set(std::size_t index, U value) {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());
			reinterpret_cast<U *>(data() + index)[0] = value;
		}

		template<typename U>
		[[maybe_unused]] U set(std::size_t& index, U value) {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) < byte_size());
			reinterpret_cast<U *>(data() + index)[0] = value;
			index += sizeof(U) / sizeof(T);
		}

		// todo: refactor so this can be zero copy.
		[[maybe_unused]] [[nodiscard]] std::shared_ptr<rivet_array<T, Alignment>> slice(std::size_t index, std::size_t count) const {
			assert(index < size());
			assert(index + count < size());

			return std::make_shared<rivet_array<T, Alignment>>(data() + index, count);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> slice(std::size_t index, std::size_t count) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) * count < byte_size());

			return std::make_shared<rivet_array<U, Alignment>>(reinterpret_cast<U *>(data() + index), count);
		}

		[[maybe_unused]] std::shared_ptr<rivet_array<T, Alignment>> slice(std::size_t& index, std::size_t count) const {
			assert(index < size());
			assert(index + count < size());

			auto value = std::make_shared<rivet_array<T, Alignment>>(data() + index, count);
			index += count;
			return value;
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> slice(std::size_t& index, std::size_t count) const {
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) * count < byte_size());

			auto value = std::make_shared<rivet_array<U, Alignment>>(reinterpret_cast<U *>(data() + index), count);
			index += (sizeof(U) / sizeof(T)) * count;
			return value;
		}

		[[maybe_unused]] void copy_to(std::shared_ptr<rivet_array<T, Alignment>> &array, std::size_t index, std::size_t count) {
			assert(array->size() > count);
			assert(index < size());
			assert(index + count < size());

			std::copy_n((data() + index), count, array->data());
		}

		template<typename U>
		[[maybe_unused]] void copy_to(std::shared_ptr<rivet_array<U, Alignment>> &array, std::size_t index, std::size_t count) {
			assert(array->size() > count);
			assert(index < size());
			assert(sizeof(T) * index + sizeof(U) * count < byte_size());

			std::copy_n(reinterpret_cast<U *>(data() + index), count, array->data());
		}


		template<typename U = T>
		[[maybe_unused]] typename std::enable_if<sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value, void>::type ensure_null_terminated() {
			auto buffer = ptr;
			if (buffer[size() - 1] != 0) {
				length += 1;
				alloc(length);
				std::copy_n(buffer.get(), size() - 1, data());
				data()[size() - 1] = static_cast<T>(0);
				delete buffer;
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
