/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$IsFileSystemInitialized
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__IsFileSystemInitialized (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$IsFileSystemInitialized
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__IsFileSystemInitialized
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__IsFileSystemInitialized_3e0b168
               (undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath_3e0b038
                    ();
  lVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath_3e0b0e8
                    (param_1);
  uVar5 = System_IO_Directory__Exists_3481cbc(uVar3,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if ((bRam0000000005c32794 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8b18,0);
    FUN_012d0dc8(PTR_DAT_05808bd0);
    bRam0000000005c32794 = 1;
  }
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
LAB_03584ab4:
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = System_IO_Path__GetFullPath_3574658(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (0 < *(int *)(lVar4 + 0x10)) {
      uVar1 = System_String__get_Chars_1ecae64(lVar4,*(int *)(lVar4 + 0x10) + -1,0);
      if (*(int *)(*(long *)PTR_DAT_057d8b18 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = System_IO_PathInternal__IsDirectorySeparator_29a9770(uVar1,0);
      if ((uVar5 & 1) != 0) goto LAB_03584ab4;
    }
    if (cRam0000000005c25914 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bd9e0);
      cRam0000000005c25914 = '\x01';
    }
    uVar3 = System_String__GetRawStringData_1ecdd9c(lVar4,0);
    uVar2 = System_IO_FileSystem__FileExists_3482ae0(uVar3,*(undefined4 *)(lVar4 + 0x10));
  }
  return uVar2 & 1;
}

