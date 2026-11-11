/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCatalogFilePath
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCatalogFilePath
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath_3e0b0e8
          (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c38059 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05782240);
    bRam0000000005c38059 = 1;
  }
  puVar1 = PTR_DAT_05782240;
  if (*(char *)(param_1 + 0x52) == '\0') {
    uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath_3e0b038
                      (param_1);
    uVar2 = System_String__Concat_1ec3580(uVar2,*(undefined8 *)puVar1,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    FUN_012d0d74((undefined8 *)(param_1 + 0x28),uVar2);
    *(undefined1 *)(param_1 + 0x52) = 1;
  }
  return *(undefined8 *)(param_1 + 0x28);
}

