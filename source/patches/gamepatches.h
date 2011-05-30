#ifndef GAMEPATCHES_H_
#define GAMEPATCHES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <gccore.h>

void RegisterDOL(u8 *dst, int len);
void ClearDOLList();
void gamepatches(u8 videoSelected, u8 languageChoice, u8 patchcountrystring, u8 vipatch, u8 cheat, u8 fix002, u8 blockiosreloadselect, u64 returnTo);
bool Anti_002_fix(u8 * Address, int Size);
bool NSMBPatch();
bool PoPPatch();
void VideoModePatcher(u8 * dst, int len, u8 videoSelected);
bool PatchReturnTo(void *Address, int Size, u32 id);
int PatchNewReturnTo(u64 title);
bool BlockIOSReload(u8 blockiosreloadselect);

#ifdef __cplusplus
}
#endif

#endif
