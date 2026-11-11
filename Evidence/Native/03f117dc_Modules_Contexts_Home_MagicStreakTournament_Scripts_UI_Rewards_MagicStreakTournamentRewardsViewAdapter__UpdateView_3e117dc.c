/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$UpdateView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView_3e117dc
               (long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 uStack_34;
  
  if ((bRam0000000005c38087 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2920);
    FUN_012d0dc8(PTR_DAT_0575e4c8);
    bRam0000000005c38087 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_057a2920),
     param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0575e4c8 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0575e4c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  uStack_34 = 0;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__RecycleCurrencyView_3e1142c
            ();
  if ((lVar6 != 0) && (param_2[7] != 0)) {
    UnityEngine_GameObject__SetActive_408e318(param_2[7],*(undefined1 *)(lVar6 + 0x18),0);
    if (*(char *)(lVar6 + 0x18) == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(lVar6 + 0x1b) != '\0';
    }
    if (param_2[8] != 0) {
      UnityEngine_GameObject__SetActive_408e318(param_2[8],bVar3,0);
      if (*(char *)(lVar6 + 0x1b) == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(lVar6 + 0x18) == '\0';
      }
      if (param_2[10] != 0) {
        UnityEngine_GameObject__SetActive_408e318(param_2[10],bVar3,0);
        if (*(char *)(lVar6 + 0x18) == '\0') {
          bVar3 = *(char *)(lVar6 + 0x1b) == '\0';
        }
        else {
          bVar3 = false;
        }
        if (param_2[9] != 0) {
          UnityEngine_GameObject__SetActive_408e318(param_2[9],bVar3,0);
          if (param_2[0xf] != 0) {
            UnityEngine_GameObject__SetActive_408e318
                      (param_2[0xf],*(char *)(lVar6 + 0x19) == '\0',0);
            if (param_2[0xb] != 0) {
              UnityEngine_GameObject__SetActive_408e318
                        (param_2[0xb],*(char *)(lVar6 + 0x1b) == '\0',0);
              if (param_2[0xc] != 0) {
                UnityEngine_GameObject__SetActive_408e318
                          (param_2[0xc],*(undefined1 *)(lVar6 + 0x1a),0);
                if (param_2[0xd] != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (param_2[0xd],*(undefined1 *)(lVar6 + 0x1b),0);
                  if (param_2[0xe] != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (param_2[0xe],*(char *)(lVar6 + 0x1b) == '\0',0);
                    uStack_34 = *(undefined4 *)(lVar6 + 0x1c);
                    plVar9 = (long *)param_2[0x10];
                    uVar4 = System_Int32__ToString_26c9768(&uStack_34,0);
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x558))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x560));
                      if (*(char *)(lVar6 + 0x1b) != '\0') {
                        return;
                      }
                      if ((*(long *)(lVar6 + 0x10) != 0) &&
                         (plVar9 = (long *)param_2[6], plVar9 != (long *)0x0)) {
                        lVar5 = (**(code **)(*plVar9 + 0x1c8))
                                          (plVar9,*(undefined4 *)(*(long *)(lVar6 + 0x10) + 0x10),
                                           *(undefined8 *)(*plVar9 + 0x1d0));
                        plVar9 = param_2 + 0x12;
                        *plVar9 = lVar5;
                        FUN_012d0d74(plVar9,lVar5);
                        if ((*plVar9 != 0) &&
                           (lVar5 = UnityEngine_Component__get_transform_408b444(*plVar9,0),
                           lVar5 != 0)) {
                          UnityEngine_Transform__SetParent_409352c(lVar5,param_2[0x11],0);
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230aa = '\x01';
                          }
                          puVar2 = PTR_DAT_05805c10;
                          puVar7 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                          UnityEngine_Transform__set_localPosition_4092ce0
                                    (*puVar7,puVar7[1],puVar7[2],lVar5,0);
                          if (cRam0000000005c230a9 == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230a9 = '\x01';
                          }
                          lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                                     *(undefined4 *)(lVar8 + 0x14),lVar5,0);
                          if (*plVar9 != 0) {
                            Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                                      (*plVar9,*(undefined8 *)(lVar6 + 0x10),0);
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

