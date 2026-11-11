/* IL2CPP: SDK.TikTokConfig$$IOS_SetDelayForATTUserAuthorizationInSeconds
void SDK_TikTokConfig__IOS_SetDelayForATTUserAuthorizationInSeconds (SDK_TikTokConfig_o* __this, int64_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$IOS_SetDelayForATTUserAuthorizationInSeconds
   void SDK_TikTokConfig__IOS_SetDelayForATTUserAuthorizationInSeconds (SDK_TikTokConfig_o* __this,
   int64_t seconds, const MethodInfo* method); */

void SDK_TikTokConfig__IOS_SetDelayForATTUserAuthorizationInSeconds_19f8548
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if ((bRam0000000005c2611e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_0579b180);
    bRam0000000005c2611e = 1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = System_Int64__ToString_26ca87c(&uStack_18,0);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar2,*(undefined8 *)PTR_DAT_0579b180,uVar1,*(undefined8 *)PTR_DAT_057c9e78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

