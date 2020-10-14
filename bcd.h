#pragma once

#define BCD_PATCH_ENTRY_GUID TEXT("{82B4D80D-0962-5A93-BFD2-FA69468F7924}")

BOOL BcdPatchEntryAlreadyExist(
    _In_ LPWSTR EntryGuid,
    _Out_ PBOOL Result);

BOOL BcdCreatePatchEntry(
    _In_ ULONG BuildNumber);
