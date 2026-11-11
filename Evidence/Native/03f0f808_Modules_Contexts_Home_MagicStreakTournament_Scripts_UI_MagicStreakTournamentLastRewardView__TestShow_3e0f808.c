/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$TestShow
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__TestShow (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$TestShow
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__TestShow
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__TestShow_3e0f808
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_0575eb20;
  if ((bRam0000000005c3806f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057db678);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3806f = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = _UNK_0435ac28;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__RecycleCurrentCurrencyView_3e0f5e8
              (param_1);
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x1c8))
                        (plVar6,*(undefined4 *)(lVar5 + 0x10),*(undefined8 *)(*plVar6 + 0x1d0));
      plVar6 = (long *)(param_1 + 0x58);
      *plVar6 = lVar7;
      FUN_012d0d74(plVar6,lVar7);
      if ((*plVar6 != 0) &&
         (lVar7 = UnityEngine_Component__get_transform_408b444(*plVar6,0), lVar7 != 0)) {
        UnityEngine_Transform__SetParent_409352c(lVar7,*(undefined8 *)(param_1 + 0x20),0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        puVar1 = PTR_DAT_05805c10;
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localPosition_4092ce0(*puVar10,puVar10[1],puVar10[2],lVar7,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        lVar11 = *(long *)(*(long *)puVar1 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                   *(undefined4 *)(lVar11 + 0x14),lVar7,0);
        if (*plVar6 != 0) {
          Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                    (*plVar6,lVar5,0);
          if ((*plVar6 != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject_408b480(*plVar6,0), lVar5 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar5 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x18),0),
               lVar5 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
              if (*(long *)(param_1 + 0x18) != 0) {
                lVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230aa = '\x01';
                }
                if (lVar5 != 0) {
                  puVar10 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                  UnityEngine_Transform__set_localScale_40932d0
                            (*puVar10,puVar10[1],puVar10[2],lVar5,0);
                  lVar5 = *(long *)(param_1 + 0x50);
                  if (lVar5 != 0) {
                    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
                  }
                  puVar3 = PTR_DAT_0578b048;
                  puVar2 = PTR_DAT_057874c0;
                  if (*(long *)(param_1 + 0x18) != 0) {
                    uVar8 = UnityEngine_GameObject__get_transform_408e25c
                                      (*(long *)(param_1 + 0x18),0);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
                    uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                      (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                                       *(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(param_1 + 0x38)
                                       ,uVar8,0);
                    uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                      (uVar8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar2);
                    *(undefined8 *)(param_1 + 0x50) = uVar8;
                    FUN_012d0d74((long *)(param_1 + 0x50),uVar8);
                    lVar7 = *(long *)(param_1 + 0x30);
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    if ((lVar5 != 0) &&
                       (System_Action___ctor_21239bc
                                  (lVar5,param_1,*(undefined8 *)PTR_DAT_057db678,0), lVar7 != 0)) {
                      if ((bRam0000000005c3941f & 1) == 0) {
                        FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
                        bRam0000000005c3941f = 1;
                      }
                      puVar1 = PTR_DAT_0578b048;
                      plVar6 = (long *)(lVar7 + 0x38);
                      lVar7 = *plVar6;
                      while ((plVar9 = (long *)System_Delegate__Combine_23e3964(lVar7,lVar5,0),
                             plVar9 == (long *)0x0 || (*plVar9 == *(long *)puVar1))) {
                        lVar11 = FUN_01351224(plVar6,plVar9,lVar7);
                        bVar4 = lVar7 == lVar11;
                        lVar7 = lVar11;
                        if (bVar4) {
                          return;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d1288(plVar9);
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

