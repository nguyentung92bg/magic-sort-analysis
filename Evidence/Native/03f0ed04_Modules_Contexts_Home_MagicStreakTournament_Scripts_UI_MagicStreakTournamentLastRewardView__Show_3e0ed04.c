/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentLastRewardView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__Show_3e0ed04
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  
  if ((bRam0000000005c3806e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057db678);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3806e = 1;
  }
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__RecycleCurrentCurrencyView_3e0f5e8
            (param_1);
  if (param_2 == 0) {
    if ((bRam0000000005c38070 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05789dd8);
      FUN_012d0dc8(PTR_DAT_057606c8);
      FUN_012d0dc8(PTR_DAT_057984e0);
      FUN_012d0dc8(PTR_DAT_057874c0);
      bRam0000000005c38070 = 1;
    }
    plVar7 = (long *)(param_1 + 0x50);
    if (*plVar7 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
    }
    puVar4 = PTR_DAT_057874c0;
    puVar3 = PTR_DAT_057606c8;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar9 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar9 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*puVar12,puVar12[1],puVar12[2],*(undefined4 *)(param_1 + 0x38),uVar9,0);
      uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar9,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar4);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_057984e0;
      if (lVar8 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_1,*(undefined8 *)PTR_DAT_05789dd8,0);
        uVar9 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                          (uVar9,lVar8,*(undefined8 *)puVar3);
        *(undefined8 *)(param_1 + 0x50) = uVar9;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x1c8))
                      (plVar7,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)(*plVar7 + 0x1d0));
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar8;
    FUN_012d0d74(plVar7,lVar8);
    if ((*plVar7 != 0) &&
       (lVar8 = UnityEngine_Component__get_transform_408b444(*plVar7,0), lVar8 != 0)) {
      UnityEngine_Transform__SetParent_409352c(lVar8,*(undefined8 *)(param_1 + 0x20),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar3 = PTR_DAT_05805c10;
      puVar12 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localPosition_4092ce0(*puVar12,puVar12[1],puVar12[2],lVar8,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar13 + 0xc),*(undefined4 *)(lVar13 + 0x10),
                 *(undefined4 *)(lVar13 + 0x14),lVar8,0);
      if (*plVar7 != 0) {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                  (*plVar7,param_2,0);
        if ((*plVar7 != 0) &&
           (lVar8 = UnityEngine_Component__get_gameObject_408b480(*plVar7,0), lVar8 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar8 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x18),0),
             lVar8 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
            if (*(long *)(param_1 + 0x18) != 0) {
              lVar8 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              if (lVar8 != 0) {
                puVar12 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (*puVar12,puVar12[1],puVar12[2],lVar8,0);
                lVar8 = *(long *)(param_1 + 0x50);
                if (lVar8 != 0) {
                  DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar8,0,0);
                }
                puVar5 = PTR_DAT_0578b048;
                puVar4 = PTR_DAT_057874c0;
                if (*(long *)(param_1 + 0x18) != 0) {
                  uVar9 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0)
                  ;
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(PTR_DAT_05805c10);
                    cRam0000000005c230a9 = '\x01';
                  }
                  lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                  uVar9 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                    (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                                     *(undefined4 *)(lVar8 + 0x14),*(undefined4 *)(param_1 + 0x38),
                                     uVar9,0);
                  uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar9,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar4);
                  *(undefined8 *)(param_1 + 0x50) = uVar9;
                  FUN_012d0d74((long *)(param_1 + 0x50),uVar9);
                  lVar13 = *(long *)(param_1 + 0x30);
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                  if ((lVar8 != 0) &&
                     (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_057db678,0),
                     lVar13 != 0)) {
                    if ((bRam0000000005c3941f & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_0578b048,lVar8,0);
                      bRam0000000005c3941f = 1;
                    }
                    puVar3 = PTR_DAT_0578b048;
                    plVar7 = (long *)(lVar13 + 0x38);
                    lVar13 = *plVar7;
                    while ((plVar10 = (long *)System_Delegate__Combine_23e3964(lVar13,lVar8,0),
                           plVar10 == (long *)0x0 || (*plVar10 == *(long *)puVar3))) {
                      lVar11 = FUN_01351224(plVar7,plVar10,lVar13);
                      bVar6 = lVar13 == lVar11;
                      lVar13 = lVar11;
                      if (bVar6) {
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d1288(plVar10);
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

