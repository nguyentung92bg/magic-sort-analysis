/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$IsCached
bool Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__IsCached (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.FirebaseConfigPersistenceService$$IsCached
   bool Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__IsCached
   (Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Application_RemoteConfig_Scripts_FirebaseConfigPersistenceService__IsCached_1cc1978
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_057cca38;
  puVar1 = PTR_DAT_0579ece0;
  if ((bRam0000000005c27791 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579ece0);
    FUN_012d0dc8(PTR_DAT_057cca38);
    bRam0000000005c27791 = 1;
  }
  puVar3 = PTR_DAT_05808bd0;
  uVar6 = *(undefined8 *)puVar2;
  uVar10 = *(undefined8 *)puVar1;
  if ((bRam0000000005c37338 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,uVar10,0);
    bRam0000000005c37338 = 1;
  }
  uVar7 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  lVar8 = System_IO_Path__Combine_357a894(uVar7,uVar6,uVar10,0);
  uVar10 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  uVar6 = System_IO_Path__Combine_35789fc(uVar10,uVar6,0);
  uVar9 = System_IO_Directory__Exists_3481cbc(uVar6,0);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((bRam0000000005c32794 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8b18,0);
    FUN_012d0dc8(PTR_DAT_05808bd0);
    bRam0000000005c32794 = 1;
  }
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
LAB_03584ab4:
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar8 = System_IO_Path__GetFullPath_3574658(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (0 < *(int *)(lVar8 + 0x10)) {
      uVar4 = System_String__get_Chars_1ecae64(lVar8,*(int *)(lVar8 + 0x10) + -1,0);
      if (*(int *)(*(long *)PTR_DAT_057d8b18 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar9 = System_IO_PathInternal__IsDirectorySeparator_29a9770(uVar4,0);
      if ((uVar9 & 1) != 0) goto LAB_03584ab4;
    }
    if (cRam0000000005c25914 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bd9e0);
      cRam0000000005c25914 = '\x01';
    }
    uVar6 = System_String__GetRawStringData_1ecdd9c(lVar8,0);
    uVar5 = System_IO_FileSystem__FileExists_3482ae0(uVar6,*(undefined4 *)(lVar8 + 0x10));
  }
  return uVar5 & 1;
}

