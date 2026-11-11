/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$<InitializeInternal>b__22_0
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService___InitializeInternal_b__22_0 (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$<InitializeInternal>b__22_0
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService___InitializeInternal_b__22_0
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* o,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService___InitializeInternal_b__22_0_3e0bd2c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar5 = *(long **)(param_2 + 0x10);
  if ((bRam0000000005c38056 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b3be8);
    bRam0000000005c38056 = 1;
  }
  uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCacheFolderPath_3e0b038
                    (param_1);
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057b3be8;
  if (plVar5 != (long *)0x0) {
    uStack_24 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
    uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_24);
    uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar4,0);
    System_String__Concat_1ec3580(uVar3,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

