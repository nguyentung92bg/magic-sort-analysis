/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.TeamQuestTournamentCacheModel$$.ctor
void Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestTournamentCacheModel___ctor (Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestTournamentCacheModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.TeamQuestTournamentCacheModel$$.ctor
   void Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestTournamentCacheModel___ctor
   (Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestTournamentCacheModel_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_TeamQuest_Scripts_TeamQuestTournamentCacheModel___ctor_2f0e97c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_05804ad0;
  if ((bRam0000000005c30646 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f68b8);
    FUN_012d0dc8(PTR_DAT_0575e748);
    FUN_012d0dc8(PTR_DAT_05804ad0);
    FUN_012d0dc8(PTR_DAT_05763268);
    bRam0000000005c30646 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05763268;
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_0575e748);
    *(long *)(param_1 + 0x20) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar2);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057f68b8);
      *(long *)(param_1 + 0x28) = lVar2;
      FUN_012d0d74((long *)(param_1 + 0x28),lVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1;
      return auVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

