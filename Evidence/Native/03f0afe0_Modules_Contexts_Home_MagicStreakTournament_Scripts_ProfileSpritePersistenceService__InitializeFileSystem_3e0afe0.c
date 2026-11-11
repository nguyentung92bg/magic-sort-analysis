/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$InitializeFileSystem
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__InitializeFileSystem (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$InitializeFileSystem
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__InitializeFileSystem
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__InitializeFileSystem_3e0afe0
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath_3e0b038
                    ();
  uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath_3e0b0e8
                    (param_1);
  System_IO_Directory__CreateDirectory_3481530(uVar1,0);
  plVar3 = (long *)System_IO_File__Create_348471c(uVar2,0);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f0b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

