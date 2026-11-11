/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetTempPathDirectory
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetTempPathDirectory (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetTempPathDirectory
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetTempPathDirectory
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetTempPathDirectory_3e0bcd4
          (long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar1 = UnityEngine_Application__get_temporaryCachePath_383a9f0(0);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar1);
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return *(undefined8 *)(param_1 + 0x30);
}

