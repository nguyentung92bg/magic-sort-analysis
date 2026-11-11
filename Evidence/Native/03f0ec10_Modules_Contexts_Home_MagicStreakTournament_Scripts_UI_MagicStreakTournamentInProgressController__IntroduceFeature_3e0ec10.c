/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$IntroduceFeature
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__IntroduceFeature (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o* __this, int32_t magicStreakTournamentPopupStateType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentInProgressController$$IntroduceFeature
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__IntroduceFeature
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController_o*
   __this, int32_t magicStreakTournamentPopupStateType, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentInProgressController__IntroduceFeature_3e0ec10
               (long param_1,int param_2)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  
  if ((bRam0000000005c3806d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3806d = 1;
  }
  if (param_2 != 2) {
    return;
  }
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
    Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentJoinedEvent_14504d4
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnFeatureIntroduced_411ebc8
                (*(long *)(param_1 + 0x58),0);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarAllRewards_411faa8
                            (*(long *)(param_1 + 0x58),0), lVar7 != 0)) {
        if (*(int *)(lVar7 + 0x18) == 0) {
          return;
        }
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar7,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)PTR_DAT_057a2920);
        if ((lVar7 != 0) && (lVar12 = *(long *)(param_1 + 0x40), lVar12 != 0)) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((bRam0000000005c3806e & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048);
            FUN_012d0dc8(PTR_DAT_057db678);
            FUN_012d0dc8(PTR_DAT_057874c0);
            bRam0000000005c3806e = 1;
          }
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentLastRewardView__RecycleCurrentCurrencyView_3e0f5e8
                    (lVar12);
          if (lVar7 != 0) {
            plVar8 = *(long **)(lVar12 + 0x28);
            if (plVar8 != (long *)0x0) {
              lVar9 = (**(code **)(*plVar8 + 0x1c8))
                                (plVar8,*(undefined4 *)(lVar7 + 0x10),
                                 *(undefined8 *)(*plVar8 + 0x1d0));
              plVar8 = (long *)(lVar12 + 0x58);
              *plVar8 = lVar9;
              FUN_012d0d74(plVar8,lVar9);
              if ((*plVar8 != 0) &&
                 (lVar9 = UnityEngine_Component__get_transform_408b444(*plVar8,0), lVar9 != 0)) {
                UnityEngine_Transform__SetParent_409352c(lVar9,*(undefined8 *)(lVar12 + 0x20),0);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230aa = '\x01';
                }
                puVar3 = PTR_DAT_05805c10;
                puVar13 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localPosition_4092ce0
                          (*puVar13,puVar13[1],puVar13[2],lVar9,0);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230a9 = '\x01';
                }
                lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10),
                           *(undefined4 *)(lVar14 + 0x14),lVar9,0);
                if (*plVar8 != 0) {
                  Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                            (*plVar8,lVar7,0);
                  if ((*plVar8 != 0) &&
                     (lVar7 = UnityEngine_Component__get_gameObject_408b480(*plVar8,0), lVar7 != 0))
                  {
                    UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
                    if ((*(long *)(lVar12 + 0x18) != 0) &&
                       (lVar7 = UnityEngine_GameObject__get_gameObject_408e764
                                          (*(long *)(lVar12 + 0x18),0), lVar7 != 0)) {
                      UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
                      if (*(long *)(lVar12 + 0x18) != 0) {
                        lVar7 = UnityEngine_GameObject__get_transform_408e25c
                                          (*(long *)(lVar12 + 0x18),0);
                        if (cRam0000000005c230aa == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230aa = '\x01';
                        }
                        if (lVar7 != 0) {
                          puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*puVar13,puVar13[1],puVar13[2],lVar7,0);
                          lVar7 = *(long *)(lVar12 + 0x50);
                          if (lVar7 != 0) {
                            DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar7,0,0);
                          }
                          puVar5 = PTR_DAT_0578b048;
                          puVar4 = PTR_DAT_057874c0;
                          if (*(long *)(lVar12 + 0x18) != 0) {
                            uVar10 = UnityEngine_GameObject__get_transform_408e25c
                                               (*(long *)(lVar12 + 0x18),0);
                            if (cRam0000000005c230a9 == '\0') {
                              FUN_012d0dc8(PTR_DAT_05805c10);
                              cRam0000000005c230a9 = '\x01';
                            }
                            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
                            uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                               (*(undefined4 *)(lVar7 + 0xc),
                                                *(undefined4 *)(lVar7 + 0x10),
                                                *(undefined4 *)(lVar7 + 0x14),
                                                *(undefined4 *)(lVar12 + 0x38),uVar10,0);
                            uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                               (uVar10,*(undefined8 *)(lVar12 + 0x40),
                                                *(undefined8 *)puVar4);
                            *(undefined8 *)(lVar12 + 0x50) = uVar10;
                            FUN_012d0d74((long *)(lVar12 + 0x50),uVar10);
                            lVar9 = *(long *)(lVar12 + 0x30);
                            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                            if ((lVar7 != 0) &&
                               (System_Action___ctor_21239bc
                                          (lVar7,lVar12,*(undefined8 *)PTR_DAT_057db678,0),
                               lVar9 != 0)) {
                              if ((bRam0000000005c3941f & 1) == 0) {
                                FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
                                bRam0000000005c3941f = 1;
                              }
                              puVar3 = PTR_DAT_0578b048;
                              plVar8 = (long *)(lVar9 + 0x38);
                              lVar12 = *plVar8;
                              while ((plVar11 = (long *)System_Delegate__Combine_23e3964
                                                                  (lVar12,lVar7,0),
                                     plVar11 == (long *)0x0 || (*plVar11 == *(long *)puVar3))) {
                                lVar9 = FUN_01351224(plVar8,plVar11,lVar12);
                                bVar6 = lVar12 == lVar9;
                                lVar12 = lVar9;
                                if (bVar6) {
                                  return;
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_012d1288(plVar11);
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
          if ((bRam0000000005c38070 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05789dd8);
            FUN_012d0dc8(PTR_DAT_057606c8);
            FUN_012d0dc8(PTR_DAT_057984e0);
            FUN_012d0dc8(PTR_DAT_057874c0);
            bRam0000000005c38070 = 1;
          }
          plVar8 = (long *)(lVar12 + 0x50);
          if (*plVar8 != 0) {
            DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
          }
          puVar4 = PTR_DAT_057874c0;
          puVar3 = PTR_DAT_057606c8;
          if (*(long *)(lVar12 + 0x18) != 0) {
            uVar10 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar12 + 0x18),0);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            puVar13 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
            uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                               (*puVar13,puVar13[1],puVar13[2],*(undefined4 *)(lVar12 + 0x38),uVar10
                                ,0);
            uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                               (uVar10,*(undefined8 *)(lVar12 + 0x48),*(undefined8 *)puVar4);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            puVar3 = PTR_DAT_057984e0;
            if (lVar7 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar7,lVar12,*(undefined8 *)PTR_DAT_05789dd8,0);
              uVar10 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                 (uVar10,lVar7,*(undefined8 *)puVar3);
              *(undefined8 *)(lVar12 + 0x50) = uVar10;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar2 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar6) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

