/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCacheFileTempPathFromUrl
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFileTempPathFromUrl (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, System_String_o* fileName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetCacheFileTempPathFromUrl
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFileTempPathFromUrl
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   System_String_o* fileName, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFileTempPathFromUrl_3e0bc10
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000005c38057 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0);
    FUN_012d0dc8(PTR_DAT_05784098);
    bRam0000000005c38057 = 1;
  }
  uStack_24 = 0;
  uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetTempPathDirectory_3e0bcd4
                    (param_1);
  puVar2 = PTR_DAT_05808bd0;
  puVar1 = PTR_DAT_05784098;
  if (param_2 != (long *)0x0) {
    uStack_24 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    System_IO_Path__Combine_357a894(uVar3,*(undefined8 *)puVar1,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

