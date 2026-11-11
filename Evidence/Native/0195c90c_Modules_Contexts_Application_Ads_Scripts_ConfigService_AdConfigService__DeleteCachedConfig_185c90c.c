/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$DeleteCachedConfig
void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__DeleteCachedConfig (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, System_String_o* fileName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$DeleteCachedConfig
   void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__DeleteCachedConfig
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   System_String_o* fileName, const MethodInfo* method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__DeleteCachedConfig_185c90c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_057c9238;
                    /* try { // try from 0195c924 to 01a5c92b has its CatchHandler @ 0195c93c */
  if ((bRam0000000005c2578b & 1) == 0) {
                    /* try { // try from 0195c92c to 01a5c953 has its CatchHandler @ 0195c8ec */
    FUN_012d0dc8(PTR_DAT_057c9238);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0195c924 with catch @ 0195c93c
                        */
    bRam0000000005c2578b = 1;
  }
  puVar2 = PTR_DAT_05808bd0;
  uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 0195c954 to 01a5c957 has its CatchHandler @ 0195c980 */
  if ((bRam0000000005c3733b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,param_2,0);
    bRam0000000005c3733b = 1;
  }
  uVar6 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  lVar7 = System_IO_Path__Combine_357a894(uVar6,uVar4,param_2,0);
  uVar6 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  uVar4 = System_IO_Path__Combine_35789fc(uVar6,uVar4,0);
  uVar8 = System_IO_Directory__Exists_3481cbc(uVar4,0);
  if (((uVar8 & 1) == 0) || (uVar8 = System_IO_File__Exists_3484a00(lVar7,0), (uVar8 & 1) == 0)) {
    return;
  }
  if ((bRam0000000005c32793 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,0);
    bRam0000000005c32793 = 1;
  }
  if (lVar7 == 0) {
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar4 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar6 = thunk_FUN_0136d790(PTR_DAT_057f0c80);
    System_ArgumentNullException___ctor_211d594(uVar4,uVar6,0);
    uVar6 = thunk_FUN_0136d790(PTR_DAT_057854a8);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar4,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = System_IO_Path__GetFullPath_3574658(lVar7,0);
  puVar1 = PTR_DAT_058084a0;
  if ((bRam0000000005c327c2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8b18);
    FUN_012d0dc8(PTR_DAT_058084a0);
    bRam0000000005c327c2 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar3 = Interop_Sys__Unlink_23f8040(uVar4,0);
  if (-1 < iVar3) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = Interop_Sys__GetLastErrorInfo_23f72e4(0);
  iVar3 = (int)uVar8;
  if (iVar3 == 0x1002d) {
    return;
  }
  uVar10 = uVar8 >> 0x20;
  if (iVar3 != 0x10048) {
    if (iVar3 == 0x1001f) {
      uVar8 = InteropErrorExtensions__Info_23f8230(0x10002,0);
      uVar10 = uVar8 >> 0x20;
    }
    goto LAB_035849cc;
  }
  if (*(int *)(*(long *)PTR_DAT_057d8b18 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = System_IO_PathInternal__TrimEndingDirectorySeparator_29a996c(uVar4,0);
  if (cRam0000000005c25914 == '\0') {
    FUN_012d0dc8(PTR_DAT_057bd9e0);
    cRam0000000005c25914 = '\x01';
    if (lVar7 != 0) goto LAB_03584930;
LAB_0358495c:
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_0358495c;
LAB_03584930:
    uVar6 = System_String__GetRawStringData_1ecdd9c(lVar7,0);
    uVar9 = *(undefined4 *)(lVar7 + 0x10);
  }
  uVar8 = 0x10048;
  uVar5 = System_IO_FileSystem__FileExists_348a19c(uVar6,uVar9,0x8000,&uStack_28);
  if (((uVar5 & 1) == 0) && ((int)uStack_28 == 0x1002d)) {
    return;
  }
LAB_035849cc:
  uVar4 = Interop__GetExceptionForIoErrno_23f6d74(uVar8 & 0xffffffff | uVar10 << 0x20,uVar4,0,0);
  uVar6 = thunk_FUN_0136d790(PTR_DAT_05783780);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar4,uVar6);
}

