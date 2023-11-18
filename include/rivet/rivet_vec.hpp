// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <array>
#include <cstdint>

namespace rivet {
	template <typename T, size_t N> struct rivet_vec {
		std::array<T, N> data;

		rivet_vec(): data({ 0 }) { }

		explicit rivet_vec(const std::array<T, N> &data): data(data) { }

		explicit rivet_vec(const T &value) {
			for (size_t i = 0; i < N; i++) {
				data[i] = value;
			}
		}

		template <typename... TArgs>
			requires(sizeof...(TArgs) == N && (std::is_same_v<TArgs, T> && ...))
		explicit rivet_vec(const TArgs... value) {
			size_t index = 0;
			((data[index++] = value), ...);
		}

		template <typename TOther> explicit rivet_vec(const rivet_vec<TOther, N> &data) {
			for (size_t i = 0; i < N; i++) {
				this->data[i] = static_cast<T>(data[i]);
			}
		}

		template <typename TOther> explicit rivet_vec(const std::array<TOther, N> &value) {
			for (size_t i = 0; i < N; i++) {
				data[i] = static_cast<T>(value[i]);
			}
		}

		auto
		operator[](size_t index) -> T & {
			return data[index];
		}

		auto
		operator[](size_t index) const -> const T & {
			return data[index];
		}

		auto
		operator==(const T &other) const -> bool {
			for (size_t i = 0; i < N; i++) {
				if (data[i] != other) {
					return false;
				}
			}
			return true;
		}

		auto
		operator==(const rivet_vec<T, N> &other) const -> bool {
			for (size_t i = 0; i < N; i++) {
				if (data[i] != other.data[i]) {
					return false;
				}
			}
			return true;
		}

		auto
		operator!=(const T &other) const -> bool {
			return *this != other;
		}

		auto
		operator!=(const rivet_vec<T, N> &other) const -> bool {
			return *this != other;
		}

		auto
		operator++() -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				++data[i];
			}
			return *this;
		}

		auto
		operator--() -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				--data[i];
			}
			return *this;
		}

		auto
		operator+(const T &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] += value;
			}
			return *this;
		}

		auto
		operator+(const rivet_vec<T, N> &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] += value[i];
			}
			return *this;
		}

		auto
		operator-(const T &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] -= value;
			}
			return *this;
		}

		auto
		operator-(const rivet_vec<T, N> &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] -= value[i];
			}
			return *this;
		}

		auto
		operator*(const T &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] *= value;
			}
			return *this;
		}

		auto
		operator*(const rivet_vec<T, N> &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] *= value[i];
			}
			return *this;
		}

		auto
		operator/(const T &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] /= value;
			}
			return *this;
		}

		auto
		operator/(const rivet_vec<T, N> &value) -> rivet_vec<T, N> & {
			for (size_t i = 0; i < N; i++) {
				data[i] /= value[i];
			}
			return *this;
		}

		[[nodiscard]] auto
		unpack() -> std::array<T, N> & {
			return data;
		}

		[[nodiscard]] auto
		unpack() const -> const std::array<T, N> & {
			return data;
		}

		[[nodiscard]] static auto
		size() -> size_t {
			return N;
		}

		[[nodiscard]] auto
		begin() -> typename std::array<T, N>::iterator {
			return data.begin();
		}

		[[nodiscard]] auto
		begin() const -> typename std::array<T, N>::const_iterator {
			return data.begin();
		}

		[[nodiscard]] auto
		end() -> typename std::array<T, N>::iterator {
			return data.end();
		}

		[[nodiscard]] auto
		end() const -> typename std::array<T, N>::const_iterator {
			return data.end();
		}

		[[nodiscard]] auto
		data_ptr() -> T * {
			return data.data();
		}

		[[nodiscard]] auto
		data_ptr() const -> const T * {
			return data.data();
		}

		[[nodiscard]] static auto
		data_size() -> size_t {
			return sizeof(T) * N;
		}
	};

	using rivet_vec2f = rivet_vec<float, 2>;
	using rivet_vec3f = rivet_vec<float, 3>;
	using rivet_vec4f = rivet_vec<float, 4>;
	using rivet_mat33 = rivet_vec<float, 9>;
	using rivet_mat34 = rivet_vec<float, 12>;
	using rivet_mat44 = rivet_vec<float, 16>;
	using rivet_vec2i = rivet_vec<uint32_t, 2>;
	using rivet_vec3i = rivet_vec<uint32_t, 3>;
	using rivet_vec4i = rivet_vec<uint32_t, 4>;
	using rivet_vec2ih = rivet_vec<uint16_t, 2>;
	using rivet_vec3ih = rivet_vec<uint16_t, 3>;
	using rivet_vec4ih = rivet_vec<uint16_t, 4>;
	using rivet_vec2b = rivet_vec<uint8_t, 2>;
	using rivet_vec3b = rivet_vec<uint8_t, 3>;
	using rivet_vec4b = rivet_vec<uint8_t, 4>;
	static_assert(sizeof(rivet_vec2f) == 8);
	static_assert(sizeof(rivet_vec3f) == 12);
	static_assert(sizeof(rivet_vec4f) == 16);
	static_assert(sizeof(rivet_mat33) == 36);
	static_assert(sizeof(rivet_mat34) == 48);
	static_assert(sizeof(rivet_mat44) == 64);
	static_assert(sizeof(rivet_vec2i) == 8);
	static_assert(sizeof(rivet_vec3i) == 12);
	static_assert(sizeof(rivet_vec4i) == 16);
	static_assert(sizeof(rivet_vec2ih) == 4);
	static_assert(sizeof(rivet_vec3ih) == 6);
	static_assert(sizeof(rivet_vec4ih) == 8);
	static_assert(sizeof(rivet_vec2b) == 2);
	static_assert(sizeof(rivet_vec3b) == 3);
	static_assert(sizeof(rivet_vec4b) == 4);
} // namespace rivet
