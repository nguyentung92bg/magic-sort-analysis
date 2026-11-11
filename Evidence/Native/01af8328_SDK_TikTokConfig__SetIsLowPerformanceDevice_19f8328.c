/* IL2CPP: SDK.TikTokConfig$$SetIsLowPerformanceDevice
void SDK_TikTokConfig__SetIsLowPerformanceDevice (SDK_TikTokConfig_o* __this, bool isLow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$SetIsLowPerformanceDevice
   void SDK_TikTokConfig__SetIsLowPerformanceDevice (SDK_TikTokConfig_o* __this, bool isLow, const
   MethodInfo* method); */

void SDK_TikTokConfig__SetIsLowPerformanceDevice_19f8328(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000005c2611a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_05795830);
    FUN_012d0dc8(PTR_DAT_057a17b0);
    FUN_012d0dc8(PTR_DAT_0578dc40);
    bRam0000000005c2611a = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = (undefined8 *)PTR_DAT_057a17b0;
    if ((param_2 & 1) == 0) {
      puVar1 = (undefined8 *)PTR_DAT_0578dc40;
    }
                    /* WARNING: Could not recover jumptable at 0x03fd02b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057c9e78 + 0x20) + 0xc0) + 0xb8) + 8
                ))(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_05795830,*puVar1,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

