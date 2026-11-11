/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCacheFolderPath
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCacheFolderPath
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath_3e0b038
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c38055 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0);
    FUN_012d0dc8(PTR_DAT_05784098);
    bRam0000000005c38055 = 1;
  }
  puVar2 = PTR_DAT_05808bd0;
  puVar1 = PTR_DAT_05784098;
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar3 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    uVar3 = System_IO_Path__Combine_35789fc(uVar3,*(undefined8 *)puVar1,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    FUN_012d0d74((undefined8 *)(param_1 + 0x20),uVar3);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return *(undefined8 *)(param_1 + 0x20);
}

