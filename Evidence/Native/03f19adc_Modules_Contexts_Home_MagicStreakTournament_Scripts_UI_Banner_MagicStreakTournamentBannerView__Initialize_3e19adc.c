/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$Initialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Initialize_3e19adc
               (long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000005c380d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c380d4 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x48),0,0);
  }
  lVar8 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar8 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_1 + 0x30),0);
      puVar5 = PTR_DAT_0576aae0;
      if (lVar8 != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(lVar8,0);
        if (((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
            (lVar8 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar8 != 0)) &&
           (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar8,*(undefined8 *)PTR_DAT_058030e0), lVar8 != 0)) {
          uVar7 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCountForAnimation_411f990
                            (lVar8,0);
          lVar11 = *(long *)(param_1 + 0x38);
                    /* try { // try from 03f19bac to 04019c33 has its CatchHandler @ 03f19bac
                       catch() { ... } // from try @ 03f19bac with catch @ 03f19bac
                       catch() { ... } // from try @ 03f19d24 with catch @ 03f19bac
                       catch() { ... } // from try @ 03f19d60 with catch @ 03f19bac
                       catch() { ... } // from try @ 03f19db8 with catch @ 03f19bac
                       catch() { ... } // from try @ 03f19e08 with catch @ 03f19bac */
          if (lVar11 != 0) {
            uVar10 = *(undefined8 *)(lVar8 + 0x58);
            if (*(long *)(lVar11 + 0x38) != 0) {
              DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar11 + 0x38),0,0);
            }
            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SendMultiplierPositions_3e1a99c
                      (lVar11);
            Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SetStreakCount_3e1a9c0
                      (lVar11,uVar7,uVar10);
            lVar8 = *(long *)(lVar11 + 0x28);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if ((bRam0000000005c380ec & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0579ca58);
              FUN_012d0dc8(PTR_DAT_057c9888);
              FUN_012d0dc8(PTR_DAT_057c2030);
              bRam0000000005c380ec = 1;
            }
            if (*(long *)(lVar8 + 0x18) != 0) {
              fVar13 = (float)UnityEngine_Transform__get_position_4092b08(*(long *)(lVar8 + 0x18),0)
              ;
              puVar6 = PTR_DAT_057c9888;
              puVar5 = PTR_DAT_057c2030;
              lVar11 = *(long *)(lVar8 + 0x28);
              if (lVar11 != 0) {
                iVar12 = 0;
                do {
                  if (*(int *)(lVar11 + 0x18) <= iVar12) {
                    return;
                  }
                  if ((*(long *)(lVar8 + 0x78) == 0) ||
                     (lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (*(long *)(lVar8 + 0x78),iVar12,*(undefined8 *)puVar5),
                     lVar11 == 0)) break;
                  fVar14 = (float)UnityEngine_Transform__get_position_4092b08(lVar11,0);
                  if (*(long *)(lVar8 + 0x28) == 0) break;
                  plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                             (*(long *)(lVar8 + 0x28),iVar12,*(undefined8 *)puVar6);
                  lVar11 = *(long *)(lVar8 + 0x20);
                  if (lVar11 == 0) break;
                  if (fVar13 <= fVar14) {
                    puVar1 = (undefined4 *)(lVar11 + 0x19c);
                    puVar2 = (undefined4 *)(lVar11 + 0x1a0);
                    puVar3 = (undefined4 *)(lVar11 + 0x1a4);
                    puVar4 = (undefined4 *)(lVar11 + 0x1a8);
                  }
                  else {
                    puVar1 = (undefined4 *)(lVar11 + 0x18c);
                    puVar2 = (undefined4 *)(lVar11 + 400);
                    puVar3 = (undefined4 *)(lVar11 + 0x194);
                    puVar4 = (undefined4 *)(lVar11 + 0x198);
                  }
                  if (plVar9 == (long *)0x0) break;
                  (**(code **)(*plVar9 + 0x2a8))
                            (*puVar1,*puVar2,*puVar3,*puVar4,plVar9,*(undefined8 *)(*plVar9 + 0x2b0)
                            );
                  lVar11 = *(long *)(lVar8 + 0x28);
                  iVar12 = iVar12 + 1;
                } while (lVar11 != 0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

