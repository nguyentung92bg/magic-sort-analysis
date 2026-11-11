/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$IsCached
bool Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__IsCached (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, System_String_o* fileName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$IsCached
   bool Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__IsCached
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   System_String_o* fileName, const MethodInfo* method); */

uint Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__IsCached_185c8c0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_057c9238;
  if ((bRam0000000005c2578a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9238);
                    /* catch() { ... } // from try @ 0195c92c with catch @ 0195c8ec
                       catch() { ... } // from try @ 0195c958 with catch @ 0195c8ec
                       catch() { ... } // from try @ 0195c98c with catch @ 0195c8ec */
    bRam0000000005c2578a = 1;
  }
  puVar2 = PTR_DAT_05808bd0;
  uVar5 = *(undefined8 *)puVar1;
  if ((bRam0000000005c37338 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,param_2,0);
    bRam0000000005c37338 = 1;
  }
  uVar6 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  lVar7 = System_IO_Path__Combine_357a894(uVar6,uVar5,param_2,0);
  uVar6 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  uVar5 = System_IO_Path__Combine_35789fc(uVar6,uVar5,0);
  uVar8 = System_IO_Directory__Exists_3481cbc(uVar5,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((bRam0000000005c32794 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8b18,0);
    FUN_012d0dc8(PTR_DAT_05808bd0);
    bRam0000000005c32794 = 1;
  }
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
LAB_03584ab4:
    uVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar7 = System_IO_Path__GetFullPath_3574658(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (0 < *(int *)(lVar7 + 0x10)) {
      uVar3 = System_String__get_Chars_1ecae64(lVar7,*(int *)(lVar7 + 0x10) + -1,0);
      if (*(int *)(*(long *)PTR_DAT_057d8b18 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = System_IO_PathInternal__IsDirectorySeparator_29a9770(uVar3,0);
      if ((uVar8 & 1) != 0) goto LAB_03584ab4;
    }
    if (cRam0000000005c25914 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bd9e0);
      cRam0000000005c25914 = '\x01';
    }
    uVar5 = System_String__GetRawStringData_1ecdd9c(lVar7,0);
    uVar4 = System_IO_FileSystem__FileExists_3482ae0(uVar5,*(undefined4 *)(lVar7 + 0x10));
  }
  return uVar4 & 1;
}

