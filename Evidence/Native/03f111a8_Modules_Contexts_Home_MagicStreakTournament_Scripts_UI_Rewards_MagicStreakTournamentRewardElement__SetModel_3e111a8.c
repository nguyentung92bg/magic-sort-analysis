/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardElement$$SetModel
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__SetModel (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakProgressbarRewardElementViewModel_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardElement$$SetModel
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__SetModel
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement_o*
   __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakProgressbarRewardElementViewModel_o*
   model, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__SetModel_3e111a8
               (long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__RecycleCurrencyView_3e1142c
            ();
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    UnityEngine_GameObject__SetActive_408e318
              (*(long *)(param_1 + 0x38),*(undefined1 *)(param_2 + 0x18),0);
    if (*(char *)(param_2 + 0x18) == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_2 + 0x1b) != '\0';
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),bVar2,0);
      if (*(char *)(param_2 + 0x1b) == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = *(char *)(param_2 + 0x18) == '\0';
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x50),bVar2,0);
        if (*(char *)(param_2 + 0x18) == '\0') {
          bVar2 = *(char *)(param_2 + 0x1b) == '\0';
        }
        else {
          bVar2 = false;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),bVar2,0);
          if (*(long *)(param_1 + 0x78) != 0) {
            UnityEngine_GameObject__SetActive_408e318
                      (*(long *)(param_1 + 0x78),*(char *)(param_2 + 0x19) == '\0',0);
            if (*(long *)(param_1 + 0x58) != 0) {
              UnityEngine_GameObject__SetActive_408e318
                        (*(long *)(param_1 + 0x58),*(char *)(param_2 + 0x1b) == '\0',0);
              if (*(long *)(param_1 + 0x60) != 0) {
                UnityEngine_GameObject__SetActive_408e318
                          (*(long *)(param_1 + 0x60),*(undefined1 *)(param_2 + 0x1a),0);
                if (*(long *)(param_1 + 0x68) != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (*(long *)(param_1 + 0x68),*(undefined1 *)(param_2 + 0x1b),0);
                  if (*(long *)(param_1 + 0x70) != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x70),*(char *)(param_2 + 0x1b) == '\0',0);
                    uStack_34 = *(undefined4 *)(param_2 + 0x1c);
                    plVar7 = *(long **)(param_1 + 0x80);
                    uVar3 = System_Int32__ToString_26c9768(&uStack_34,0);
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560));
                      if (*(char *)(param_2 + 0x1b) != '\0') {
                        return;
                      }
                      if ((*(long *)(param_2 + 0x10) != 0) &&
                         (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) {
                        lVar4 = (**(code **)(*plVar7 + 0x1c8))
                                          (plVar7,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x10),
                                           *(undefined8 *)(*plVar7 + 0x1d0));
                        plVar7 = (long *)(param_1 + 0x90);
                        *plVar7 = lVar4;
                        FUN_012d0d74(plVar7,lVar4);
                        if ((*plVar7 != 0) &&
                           (lVar4 = UnityEngine_Component__get_transform_408b444(*plVar7,0),
                           lVar4 != 0)) {
                          UnityEngine_Transform__SetParent_409352c
                                    (lVar4,*(undefined8 *)(param_1 + 0x88),0);
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230aa = '\x01';
                          }
                          puVar1 = PTR_DAT_05805c10;
                          puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                          UnityEngine_Transform__set_localPosition_4092ce0
                                    (*puVar5,puVar5[1],puVar5[2],lVar4,0);
                          if (cRam0000000005c230a9 == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230a9 = '\x01';
                          }
                          lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                                     *(undefined4 *)(lVar6 + 0x14),lVar4,0);
                          if (*plVar7 != 0) {
                            Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                                      (*plVar7,*(undefined8 *)(param_2 + 0x10),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

