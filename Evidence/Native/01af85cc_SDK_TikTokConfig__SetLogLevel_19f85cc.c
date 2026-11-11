/* IL2CPP: SDK.TikTokConfig$$SetLogLevel
void SDK_TikTokConfig__SetLogLevel (SDK_TikTokConfig_o* __this, int32_t logLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$SetLogLevel
   void SDK_TikTokConfig__SetLogLevel (SDK_TikTokConfig_o* __this, int32_t logLevel, const
   MethodInfo* method); */

void SDK_TikTokConfig__SetLogLevel_19f85cc(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  puVar2 = PTR_DAT_057f76c8;
  if ((bRam0000000005c2611f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_057f76c8);
    FUN_012d0dc8(PTR_DAT_057e0b50);
    FUN_012d0dc8(PTR_DAT_0575cba8);
    bRam0000000005c2611f = 1;
  }
  puVar1 = PTR_DAT_057e0b50;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar2;
  }
  *(bool *)(*(long *)(lVar3 + 0xb8) + 0x18) = param_2 != 0;
  uStack_48 = *(undefined8 *)puVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_40 = 0xffffffffffffffff;
  iStack_38 = param_2;
  uVar4 = System_Enum__ToString_23a4eac(&uStack_48,0);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
              (lVar3,*(undefined8 *)PTR_DAT_0575cba8,uVar4,*(undefined8 *)PTR_DAT_057c9e78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

