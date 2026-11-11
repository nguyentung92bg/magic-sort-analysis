/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$UpdateView
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__UpdateView_3e1189c
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_34;
  
  if ((bRam0000000005c38088 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aed18);
    FUN_012d0dc8(PTR_DAT_0575e4c8);
    bRam0000000005c38088 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_0575e4c8 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0575e4c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057aed18 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057aed18))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
  }
  uStack_34 = 0;
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardElement__RecycleCurrencyView_3e1142c
            ();
  if ((param_3 != (long *)0x0) && (param_2[7] != 0)) {
    UnityEngine_GameObject__SetActive_408e318(param_2[7],(char)param_3[3],0);
    if ((char)param_3[3] == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_3 + 0x1b) != '\0';
    }
    if (param_2[8] != 0) {
      UnityEngine_GameObject__SetActive_408e318(param_2[8],bVar3,0);
      if (*(char *)((long)param_3 + 0x1b) == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = (char)param_3[3] == '\0';
      }
      if (param_2[10] != 0) {
        UnityEngine_GameObject__SetActive_408e318(param_2[10],bVar3,0);
        if ((char)param_3[3] == '\0') {
          bVar3 = *(char *)((long)param_3 + 0x1b) == '\0';
        }
        else {
          bVar3 = false;
        }
        if (param_2[9] != 0) {
          UnityEngine_GameObject__SetActive_408e318(param_2[9],bVar3,0);
          if (param_2[0xf] != 0) {
            UnityEngine_GameObject__SetActive_408e318
                      (param_2[0xf],*(char *)((long)param_3 + 0x19) == '\0',0);
            if (param_2[0xb] != 0) {
              UnityEngine_GameObject__SetActive_408e318
                        (param_2[0xb],*(char *)((long)param_3 + 0x1b) == '\0',0);
              if (param_2[0xc] != 0) {
                UnityEngine_GameObject__SetActive_408e318
                          (param_2[0xc],*(undefined1 *)((long)param_3 + 0x1a),0);
                if (param_2[0xd] != 0) {
                  UnityEngine_GameObject__SetActive_408e318
                            (param_2[0xd],*(undefined1 *)((long)param_3 + 0x1b),0);
                  if (param_2[0xe] != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (param_2[0xe],*(char *)((long)param_3 + 0x1b) == '\0',0);
                    uStack_34 = *(undefined4 *)((long)param_3 + 0x1c);
                    plVar8 = (long *)param_2[0x10];
                    uVar4 = System_Int32__ToString_26c9768(&uStack_34,0);
                    if (plVar8 != (long *)0x0) {
                      (**(code **)(*plVar8 + 0x558))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 0x560));
                      if (*(char *)((long)param_3 + 0x1b) != '\0') {
                        return;
                      }
                      if ((param_3[2] != 0) && (plVar8 = (long *)param_2[6], plVar8 != (long *)0x0))
                      {
                        lVar5 = (**(code **)(*plVar8 + 0x1c8))
                                          (plVar8,*(undefined4 *)(param_3[2] + 0x10),
                                           *(undefined8 *)(*plVar8 + 0x1d0));
                        plVar8 = param_2 + 0x12;
                        *plVar8 = lVar5;
                        FUN_012d0d74(plVar8,lVar5);
                        if ((*plVar8 != 0) &&
                           (lVar5 = UnityEngine_Component__get_transform_408b444(*plVar8,0),
                           lVar5 != 0)) {
                          UnityEngine_Transform__SetParent_409352c(lVar5,param_2[0x11],0);
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230aa = '\x01';
                          }
                          puVar2 = PTR_DAT_05805c10;
                          puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                          UnityEngine_Transform__set_localPosition_4092ce0
                                    (*puVar6,puVar6[1],puVar6[2],lVar5,0);
                          if (cRam0000000005c230a9 == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230a9 = '\x01';
                          }
                          lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                                     *(undefined4 *)(lVar7 + 0x14),lVar5,0);
                          if (*plVar8 != 0) {
                            Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                                      (*plVar8,param_3[2],0);
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

