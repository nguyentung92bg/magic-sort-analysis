/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentMultiplierProgressView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView_o* __this, System_Collections_Generic_List_int__o* multipliers, int32_t currentMultiplierIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentMultiplierProgressView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView_o*
   __this, System_Collections_Generic_List_int__o* multipliers, int32_t currentMultiplierIndex,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentMultiplierProgressView__Show_3e0e94c
               (long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000005c38074 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b19a8);
    FUN_012d0dc8(PTR_DAT_0575a060);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_0575d710);
    bRam0000000005c38074 = 1;
  }
  puVar4 = PTR_DAT_057db748;
  puVar3 = PTR_DAT_0577a308;
  puVar2 = PTR_DAT_0575d710;
  puVar1 = PTR_DAT_0575a060;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        return;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar8,*(undefined8 *)puVar1);
      if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) break;
      if (param_3 == iVar8) {
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        if (((*(long *)(lVar5 + 0x20) == 0) ||
            (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x20),0),
            lVar6 == 0)) || (UnityEngine_GameObject__SetActive_408e318(lVar6,0,0), param_2 == 0))
        break;
        plVar9 = *(long **)(lVar5 + 0x18);
        uStack_54 = System_Collections_Generic_List_int___get_Item_204edf0
                              (param_2,param_3,*(undefined8 *)puVar3);
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
        uVar7 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar7,0);
        if (plVar9 == (long *)0x0) break;
        (**(code **)(*plVar9 + 0x558))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x560));
      }
      else {
        UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
        if (param_2 == 0) break;
        plVar9 = *(long **)(lVar5 + 0x20);
        uStack_58 = System_Collections_Generic_List_int___get_Item_204edf0
                              (param_2,iVar8,*(undefined8 *)puVar3);
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_58);
        uVar7 = System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar7,0);
        if (plVar9 == (long *)0x0) break;
        (**(code **)(*plVar9 + 0x558))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x560));
        if ((*(long *)(lVar5 + 0x20) == 0) ||
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x20),0),
           lVar5 == 0)) break;
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
      }
      lVar5 = *(long *)(param_1 + 0x18);
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

