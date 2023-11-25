// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

namespace rivet::gui::ui {
	struct element {
		element() = default;
		virtual ~element() = default;
		element(const element&) = delete;
		auto operator=(const element&) -> element& = delete;
		element(element&&) = default;
		auto operator=(element&&) -> element& = default;

		int priority = 0;
		virtual auto draw() -> bool {
			return true;
		}
		virtual void draw_menu() { }
	};
} // namespace rivet::gui::ui
