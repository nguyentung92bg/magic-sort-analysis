/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$CreateDirectoryIfNotExists
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__CreateDirectoryIfNotExists (System_String_o* filePath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$CreateDirectoryIfNotExists
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__CreateDirectoryIfNotExists
   (System_String_o* filePath, const MethodInfo* method); */

ulong Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__CreateDirectoryIfNotExists_3e0b8f4
                (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_05808bd0;
  if ((bRam0000000005c38058 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0);
    bRam0000000005c38058 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = System_IO_Path__GetDirectoryName_35742b4(param_1,0);
  uVar6 = System_String__IsNullOrEmpty_1ed04ac(lVar5,0);
  if (((uVar6 & 1) == 0) && (uVar6 = System_IO_Directory__Exists_3481cbc(lVar5,0), (uVar6 & 1) == 0)
     ) {
    if ((bRam0000000005c32773 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05808e50,0);
      FUN_012d0dc8(PTR_DAT_05808bd0);
      bRam0000000005c32773 = 1;
    }
    puVar1 = PTR_DAT_05808e50;
    if (lVar5 == 0) {
      thunk_FUN_0136d790(PTR_DAT_057c1ad0);
      uVar3 = thunk_FUN_01320e48();
      FUN_0103b554();
      uVar2 = thunk_FUN_0136d790(PTR_DAT_057f0c80);
      System_ArgumentNullException___ctor_211d594(uVar3,uVar2,0);
    }
    else {
      if (*(int *)(lVar5 + 0x10) != 0) {
        if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = System_IO_Path__GetFullPath_3574658(lVar5,0);
        System_IO_FileSystem__CreateDirectory_3481680();
        uVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (uVar6 != 0) {
          System_IO_FileSystemInfo___ctor_3483048();
          System_IO_DirectoryInfo__Init_34830bc(uVar6,uVar2,0,0,0);
          return uVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      thunk_FUN_0136d790(PTR_DAT_057a2cc8);
      uVar3 = thunk_FUN_01320e48();
      FUN_0103b554();
      uVar2 = thunk_FUN_0136d790(PTR_DAT_0575f6f8);
      uVar4 = thunk_FUN_0136d790(PTR_DAT_057f0c80);
      System_ArgumentException___ctor_211d60c(uVar3,uVar2,uVar4,0);
    }
    uVar2 = thunk_FUN_0136d790(PTR_DAT_057addf0);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar2);
  }
  return uVar6;
}

