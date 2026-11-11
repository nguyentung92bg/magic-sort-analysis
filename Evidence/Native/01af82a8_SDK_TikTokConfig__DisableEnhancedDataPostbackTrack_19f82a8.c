/* IL2CPP: SDK.TikTokConfig$$DisableEnhancedDataPostbackTrack
void SDK_TikTokConfig__DisableEnhancedDataPostbackTrack (SDK_TikTokConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$DisableEnhancedDataPostbackTrack
   void SDK_TikTokConfig__DisableEnhancedDataPostbackTrack (SDK_TikTokConfig_o* __this, const
   MethodInfo* method); */

void SDK_TikTokConfig__DisableEnhancedDataPostbackTrack_19f82a8(long param_1)

{
  if ((bRam0000000005c26119 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_0576a6d8);
    FUN_012d0dc8(PTR_DAT_057a17b0);
    bRam0000000005c26119 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03fd02b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057c9e78 + 0x20) + 0xc0) + 0xb8) + 8
                ))(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0576a6d8,
                   *(undefined8 *)PTR_DAT_057a17b0,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

