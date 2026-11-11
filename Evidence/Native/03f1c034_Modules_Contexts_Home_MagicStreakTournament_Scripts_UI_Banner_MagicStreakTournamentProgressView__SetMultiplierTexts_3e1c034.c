/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetMultiplierTexts
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierTexts (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetMultiplierTexts
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierTexts
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierTexts_3e1c034
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uStack_44;
  
  if ((bRam0000000005c380e2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 03f1c070 to 0401c1a7 has its CatchHandler @ 03f1c070
                       catch() { ... } // from try @ 03f1c070 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1c830 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1c93c with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1c9c0 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1ca58 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1cb08 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1cb84 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1cbb4 with catch @ 03f1c070
                       catch() { ... } // from try @ 03f1cc24 with catch @ 03f1c070 */
    FUN_012d0dc8(PTR_DAT_057c9888);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_0575d710);
    bRam0000000005c380e2 = 1;
  }
  puVar4 = PTR_DAT_057db748;
  puVar3 = PTR_DAT_057c9888;
  puVar2 = PTR_DAT_0577a308;
  puVar1 = PTR_DAT_0575d710;
  iVar7 = 0;
  while ((*(long *)(param_1 + 0x28) != 0 &&
         (plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(param_1 + 0x28),iVar7,*(undefined8 *)puVar3),
         param_2 != 0))) {
    uStack_44 = System_Collections_Generic_List_int___get_Item_204edf0
                          (param_2,iVar7,*(undefined8 *)puVar2);
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
    uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar6,0);
    if (plVar5 == (long *)0x0) break;
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
    iVar7 = iVar7 + 1;
    if (iVar7 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

