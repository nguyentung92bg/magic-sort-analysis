/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$ShowReward
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__ShowReward (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$ShowReward
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__ShowReward
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__ShowReward_3e10bd0
               (long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__RecycleCurrentCurrencyView_3e10b04
            ();
  if ((param_2 != 0) && (plVar2 = *(long **)(param_1 + 0x30), plVar2 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x1c8))
                      (plVar2,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)(*plVar2 + 0x1d0));
    plVar2 = (long *)(param_1 + 0x38);
    *plVar2 = lVar3;
    FUN_012d0d74(plVar2,lVar3);
    if ((*plVar2 != 0) &&
       (lVar3 = UnityEngine_Component__get_transform_408b444(*plVar2,0), lVar3 != 0)) {
      UnityEngine_Transform__SetParent_409352c(lVar3,*(undefined8 *)(param_1 + 0x28),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localPosition_4092ce0(*puVar4,puVar4[1],puVar4[2],lVar3,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                 *(undefined4 *)(lVar5 + 0x14),lVar3,0);
      if (*plVar2 != 0) {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                  (*plVar2,param_2,0);
        if ((*plVar2 != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*plVar2,0), lVar3 != 0)) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar3,1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

