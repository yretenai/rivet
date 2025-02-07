#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS // NOLINT(*-reserved-identifier, *-dcl37-c, *-dcl51-cpp)
#include <windows.h>

#include <array>
#include <filesystem>
#include <mutex>

#include "runtime/runtime.hpp"

// this file does 2 things: it sets up the hid.dll trampolines, and it initializes the runtime.

namespace {
	HINSTANCE h_this = nullptr;
	std::array<FARPROC, 47> proc;
	HINSTANCE h_library = nullptr;
	std::once_flag init;
	std::once_flag fini;
} // namespace

auto WINAPI
HIDDllMain(HINSTANCE hInst, DWORD dwReason, [[maybe_unused]] LPVOID lpReserved) -> BOOL {
	if (dwReason == DLL_PROCESS_ATTACH) {
		h_this = hInst;
		h_library = LoadLibraryA("C:\\windows\\system32\\HID.DLL");
		if (h_library == nullptr) {
			return 0;
		}

		proc[0] = GetProcAddress(h_library, "HidD_FlushQueue");
		proc[1] = GetProcAddress(h_library, "HidD_FreePreparsedData");
		proc[2] = GetProcAddress(h_library, "HidD_GetAttributes");
		proc[3] = GetProcAddress(h_library, "HidD_GetConfiguration");
		proc[4] = GetProcAddress(h_library, "HidD_GetFeature");
		proc[5] = GetProcAddress(h_library, "HidD_GetHidGuid");
		proc[6] = GetProcAddress(h_library, "HidD_GetIndexedString");
		proc[7] = GetProcAddress(h_library, "HidD_GetInputReport");
		proc[8] = GetProcAddress(h_library, "HidD_GetManufacturerString");
		proc[9] = GetProcAddress(h_library, "HidD_GetMsGenreDescriptor");
		proc[10] = GetProcAddress(h_library, "HidD_GetNumInputBuffers");
		proc[11] = GetProcAddress(h_library, "HidD_GetPhysicalDescriptor");
		proc[12] = GetProcAddress(h_library, "HidD_GetPreparsedData");
		proc[13] = GetProcAddress(h_library, "HidD_GetProductString");
		proc[14] = GetProcAddress(h_library, "HidD_GetSerialNumberString");
		proc[15] = GetProcAddress(h_library, "HidD_Hello");
		proc[16] = GetProcAddress(h_library, "HidD_SetConfiguration");
		proc[17] = GetProcAddress(h_library, "HidD_SetFeature");
		proc[18] = GetProcAddress(h_library, "HidD_SetNumInputBuffers");
		proc[19] = GetProcAddress(h_library, "HidD_SetOutputReport");
		proc[20] = GetProcAddress(h_library, "HidP_GetButtonArray");
		proc[21] = GetProcAddress(h_library, "HidP_GetButtonCaps");
		proc[22] = GetProcAddress(h_library, "HidP_GetCaps");
		proc[23] = GetProcAddress(h_library, "HidP_GetData");
		proc[24] = GetProcAddress(h_library, "HidP_GetExtendedAttributes");
		proc[25] = GetProcAddress(h_library, "HidP_GetLinkCollectionNodes");
		proc[26] = GetProcAddress(h_library, "HidP_GetScaledUsageValue");
		proc[27] = GetProcAddress(h_library, "HidP_GetSpecificButtonCaps");
		proc[28] = GetProcAddress(h_library, "HidP_GetSpecificValueCaps");
		proc[29] = GetProcAddress(h_library, "HidP_GetUsageValue");
		proc[30] = GetProcAddress(h_library, "HidP_GetUsageValueArray");
		proc[31] = GetProcAddress(h_library, "HidP_GetUsages");
		proc[32] = GetProcAddress(h_library, "HidP_GetUsagesEx");
		proc[33] = GetProcAddress(h_library, "HidP_GetValueCaps");
		proc[34] = GetProcAddress(h_library, "HidP_GetVersionInternal");
		proc[35] = GetProcAddress(h_library, "HidP_InitializeReportForID");
		proc[36] = GetProcAddress(h_library, "HidP_MaxDataListLength");
		proc[37] = GetProcAddress(h_library, "HidP_MaxUsageListLength");
		proc[38] = GetProcAddress(h_library, "HidP_SetButtonArray");
		proc[39] = GetProcAddress(h_library, "HidP_SetData");
		proc[40] = GetProcAddress(h_library, "HidP_SetScaledUsageValue");
		proc[41] = GetProcAddress(h_library, "HidP_SetUsageValue");
		proc[42] = GetProcAddress(h_library, "HidP_SetUsageValueArray");
		proc[43] = GetProcAddress(h_library, "HidP_SetUsages");
		proc[44] = GetProcAddress(h_library, "HidP_TranslateUsagesToI8042ScanCodes");
		proc[45] = GetProcAddress(h_library, "HidP_UnsetUsages");
		proc[46] = GetProcAddress(h_library, "HidP_UsageListDifference");
	}

	if (dwReason == DLL_PROCESS_DETACH) {
		FreeLibrary(h_library);
		return 1;
	}

	return 1;
}

auto APIENTRY
DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) -> BOOL {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		std::call_once(init, [&]() { rivet_hook::runtime::init(); });
	} else if (ul_reason_for_call == DLL_PROCESS_DETACH) {
		std::call_once(fini, [&]() { rivet_hook::runtime::fini(); });
	}

	return HIDDllMain(hModule, ul_reason_for_call, lpReserved);
}

extern "C" {
FARPROC proc_address = nullptr;

void
trampoline();

void
PROXY_HidD_FlushQueue() {
	proc_address = proc[0];
	trampoline();
}

void
PROXY_HidD_FreePreparsedData() {
	proc_address = proc[1];
	trampoline();
}

void
PROXY_HidD_GetAttributes() {
	proc_address = proc[2];
	trampoline();
}

void
PROXY_HidD_GetConfiguration() {
	proc_address = proc[3];
	trampoline();
}

void
PROXY_HidD_GetFeature() {
	proc_address = proc[4];
	trampoline();
}

void
PROXY_HidD_GetHidGuid() {
	proc_address = proc[5];
	trampoline();
}

void
PROXY_HidD_GetIndexedString() {
	proc_address = proc[6];
	trampoline();
}

void
PROXY_HidD_GetInputReport() {
	proc_address = proc[7];
	trampoline();
}

void
PROXY_HidD_GetManufacturerString() {
	proc_address = proc[8];
	trampoline();
}

void
PROXY_HidD_GetMsGenreDescriptor() {
	proc_address = proc[9];
	trampoline();
}

void
PROXY_HidD_GetNumInputBuffers() {
	proc_address = proc[10];
	trampoline();
}

void
PROXY_HidD_GetPhysicalDescriptor() {
	proc_address = proc[11];
	trampoline();
}

void
PROXY_HidD_GetPreparsedData() {
	proc_address = proc[12];
	trampoline();
}

void
PROXY_HidD_GetProductString() {
	proc_address = proc[13];
	trampoline();
}

void
PROXY_HidD_GetSerialNumberString() {
	proc_address = proc[14];
	trampoline();
}

void
PROXY_HidD_Hello() {
	proc_address = proc[15];
	trampoline();
}

void
PROXY_HidD_SetConfiguration() {
	proc_address = proc[16];
	trampoline();
}

void
PROXY_HidD_SetFeature() {
	proc_address = proc[17];
	trampoline();
}

void
PROXY_HidD_SetNumInputBuffers() {
	proc_address = proc[18];
	trampoline();
}

void
PROXY_HidD_SetOutputReport() {
	proc_address = proc[19];
	trampoline();
}

void
PROXY_HidP_GetButtonArray() {
	proc_address = proc[20];
	trampoline();
}

void
PROXY_HidP_GetButtonCaps() {
	proc_address = proc[21];
	trampoline();
}

void
PROXY_HidP_GetCaps() {
	proc_address = proc[22];
	trampoline();
}

void
PROXY_HidP_GetData() {
	proc_address = proc[23];
	trampoline();
}

void
PROXY_HidP_GetExtendedAttributes() {
	proc_address = proc[24];
	trampoline();
}

void
PROXY_HidP_GetLinkCollectionNodes() {
	proc_address = proc[25];
	trampoline();
}

void
PROXY_HidP_GetScaledUsageValue() {
	proc_address = proc[26];
	trampoline();
}

void
PROXY_HidP_GetSpecificButtonCaps() {
	proc_address = proc[27];
	trampoline();
}

void
PROXY_HidP_GetSpecificValueCaps() {
	proc_address = proc[28];
	trampoline();
}

void
PROXY_HidP_GetUsageValue() {
	proc_address = proc[29];
	trampoline();
}

void
PROXY_HidP_GetUsageValueArray() {
	proc_address = proc[30];
	trampoline();
}

void
PROXY_HidP_GetUsages() {
	proc_address = proc[31];
	trampoline();
}

void
PROXY_HidP_GetUsagesEx() {
	proc_address = proc[32];
	trampoline();
}

void
PROXY_HidP_GetValueCaps() {
	proc_address = proc[33];
	trampoline();
}

void
PROXY_HidP_GetVersionInternal() {
	proc_address = proc[34];
	trampoline();
}

void
PROXY_HidP_InitializeReportForID() {
	proc_address = proc[35];
	trampoline();
}

void
PROXY_HidP_MaxDataListLength() {
	proc_address = proc[36];
	trampoline();
}

void
PROXY_HidP_MaxUsageListLength() {
	proc_address = proc[37];
	trampoline();
}

void
PROXY_HidP_SetButtonArray() {
	proc_address = proc[38];
	trampoline();
}

void
PROXY_HidP_SetData() {
	proc_address = proc[39];
	trampoline();
}

void
PROXY_HidP_SetScaledUsageValue() {
	proc_address = proc[40];
	trampoline();
}

void
PROXY_HidP_SetUsageValue() {
	proc_address = proc[41];
	trampoline();
}

void
PROXY_HidP_SetUsageValueArray() {
	proc_address = proc[42];
	trampoline();
}

void
PROXY_HidP_SetUsages() {
	proc_address = proc[43];
	trampoline();
}

void
PROXY_HidP_TranslateUsagesToI8042ScanCodes() {
	proc_address = proc[44];
	trampoline();
}

void
PROXY_HidP_UnsetUsages() {
	proc_address = proc[45];
	trampoline();
}

void
PROXY_HidP_UsageListDifference() {
	proc_address = proc[46];
	trampoline();
}
} // extern "C"
