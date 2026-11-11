/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$MoveToTween
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__MoveToTween (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t index, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$MoveToTween
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__MoveToTween
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t index, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__MoveToTween_38caad4
          (undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar11 = param_3 & 0xffffffff;
  if ((bRam0000000005c393bd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4bd0,param_3,0);
    FUN_012d0dc8(PTR_DAT_057ce708);
    FUN_012d0dc8(PTR_DAT_0575c150);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    bRam0000000005c393bd = 1;
  }
  puVar3 = PTR_DAT_057b4bd0;
  plVar12 = *(long **)(lVar5 + 0x30);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057b4bd0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_04106598;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057b4bd0,1);
LAB_04106598:
    iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if (iVar4 <= (int)(uint)param_3) {
      return 0;
    }
    if (*(long *)(lVar5 + 0x60) != 0) {
      *(undefined4 *)(*(long *)(lVar5 + 0x60) + 0x10) = 0;
      lVar8 = *(long *)(lVar5 + 0x78);
      if (lVar8 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar8,0,0);
      }
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
              goto LAB_04106630;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar3,5);
LAB_04106630:
        uVar9 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar9 & 1) != 0) {
          plVar12 = *(long **)(lVar5 + 0x30);
          if (plVar12 == (long *)0x0) goto LAB_04106810;
          lVar8 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_04106698;
              }
              uVar11 = uVar11 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar3,1);
LAB_04106698:
          iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          uVar11 = (ulong)(iVar4 + ~(uint)param_3);
        }
        plVar12 = *(long **)(lVar5 + 0x30);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04106700;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar3,0);
LAB_04106700:
          lVar8 = (*(code *)*puVar6)(plVar12,uVar11,puVar6[1]);
          iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                            (lVar5);
          puVar3 = PTR_DAT_057cc518;
          if (lVar8 != 0) {
            lVar1 = 0x14;
            if (iVar4 != 1) {
              lVar1 = 0x10;
            }
            fVar13 = -*(float *)(lVar8 + lVar1);
            fVar14 = *(float *)(lVar5 + 0x6c);
            if (fVar13 <= *(float *)(lVar5 + 0x6c)) {
              fVar14 = fVar13;
            }
            fVar2 = fVar14;
            if (fVar13 < *(float *)(lVar5 + 0x70)) {
              fVar2 = *(float *)(lVar5 + 0x70);
            }
            if (*(long *)(lVar5 + 0x28) != 0) {
              fVar13 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                        (*(long *)(lVar5 + 0x28),0);
              iVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                (lVar5);
              lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_057f65b8;
              if (lVar8 != 0) {
                puVar6 = (undefined8 *)PTR_DAT_057ce708;
                if (iVar4 != 1) {
                  puVar6 = (undefined8 *)PTR_DAT_0575c150;
                }
                if (iVar4 != 1) {
                  fVar14 = fVar13;
                }
                DG_Tweening_TweenCallback_float____ctor_341f244(lVar8,lVar5,*puVar6,0);
                uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(fVar14,fVar2,param_1,lVar8,0);
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                  (uVar7,9,*(undefined8 *)puVar3);
                *(undefined8 *)(lVar5 + 0x78) = uVar7;
                FUN_012d0d74((long *)(lVar5 + 0x78),uVar7);
                return *(undefined8 *)(lVar5 + 0x78);
              }
            }
          }
        }
      }
    }
  }
LAB_04106810:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

