/* IL2CPP: SDK.TikTokConfig$$.ctor
void SDK_TikTokConfig___ctor (SDK_TikTokConfig_o* __this, System_String_o* iOS_accessToken, System_String_o* iOS_appId, System_String_o* iOS_tiktokAppId, System_String_o* Android_accessToken, System_String_o* Android_appId, System_String_o* Android_tiktokAppId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$.ctor
   void SDK_TikTokConfig___ctor (SDK_TikTokConfig_o* __this, System_String_o* iOS_accessToken,
   System_String_o* iOS_appId, System_String_o* iOS_tiktokAppId, System_String_o*
   Android_accessToken, System_String_o* Android_appId, System_String_o* Android_tiktokAppId, const
   MethodInfo* method); */

void SDK_TikTokConfig___ctor_19f7ce0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long *plVar4;
  
  puVar1 = PTR_DAT_057b4988;
  if ((bRam0000000005c26111 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_05761c48);
    FUN_012d0dc8(PTR_DAT_057b4988);
    FUN_012d0dc8(PTR_DAT_0579fa88);
    FUN_012d0dc8(PTR_DAT_05797dc8);
    FUN_012d0dc8(PTR_DAT_057a7528);
    bRam0000000005c26111 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057c9e78;
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar2,*(undefined8 *)PTR_DAT_05761c48);
    plVar4 = (long *)(param_1 + 0x10);
    *plVar4 = lVar2;
    FUN_012d0d74(plVar4,lVar2);
    System_Object___ctor_23dfe5c(param_1,0);
    uVar3 = System_String__IsNullOrEmpty_1ed04ac(in_x5,0);
    if ((uVar3 & 1) == 0) {
      if (*plVar4 == 0) goto LAB_01af7e60;
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (*plVar4,*(undefined8 *)PTR_DAT_0579fa88,in_x5,*(undefined8 *)puVar1);
    }
    uVar3 = System_String__IsNullOrEmpty_1ed04ac(in_x6,0);
    if ((uVar3 & 1) == 0) {
      if (*plVar4 == 0) goto LAB_01af7e60;
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (*plVar4,*(undefined8 *)PTR_DAT_05797dc8,in_x6,*(undefined8 *)puVar1);
    }
    uVar3 = System_String__IsNullOrEmpty_1ed04ac(in_x4,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03fd02b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0xb8) + 8))
                (*plVar4,*(undefined8 *)PTR_DAT_057a7528,in_x4,2);
      return;
    }
  }
LAB_01af7e60:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

