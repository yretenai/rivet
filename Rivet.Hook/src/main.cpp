// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "runtime.hpp"


auto APIENTRY
DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) -> BOOL {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		rivet_hook::runtime::init();
	} else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
		rivet_hook::runtime::fini();
	}

	return TRUE;
}
