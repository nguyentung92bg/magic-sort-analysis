/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$OnDestroy
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OnDestroy (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fdd788) */
/* WARNING: Removing unreachable block (ram,0x01fdd794) */
/* WARNING: Removing unreachable block (ram,0x01fdd798) */
/* WARNING: Removing unreachable block (ram,0x01fdd7b4) */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$OnDestroy
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OnDestroy
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OnDestroy_3e15090
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c380a9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0578afd8);
    FUN_012d0dc8(PTR_DAT_057863f0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c380a9 = 1;
  }
  puVar4 = PTR_DAT_0578b048;
  puVar2 = PTR_DAT_057863f0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar10 == 0) ||
     (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_0578afd8,0), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar9,lVar10,0);
  puVar3 = PTR_DAT_057815e0;
  plVar11 = *(long **)(param_1 + 0x48);
  if (plVar11 == (long *)0x0) {
    return;
  }
  if ((bRam0000000005c28468 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28468 = 1;
  }
  lVar9 = *(long *)puVar3;
  plVar8 = (long *)PTR_DAT_058163b8;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar9 = *(long *)puVar3;
    plVar8 = (long *)PTR_DAT_058163b8;
  }
  PTR_DAT_058163b8 = (undefined *)plVar8;
  if (((plVar11 != (long *)0x0) && (*(char *)(*(long *)(lVar9 + 0xb8) + 0x90) != '\0')) &&
     ((char)plVar11[0x1d] != '\0')) {
    if (*(char *)((long)plVar11 + 0xe9) == '\0') {
      lVar9 = *plVar8;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *plVar8;
      }
      if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x44) == '\0') {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if ((bRam0000000005c3201b & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05814880,1,0);
          FUN_012d0dc8(PTR_DAT_0575e330);
          FUN_012d0dc8(PTR_DAT_058134a8);
          FUN_012d0dc8(PTR_DAT_057d61f0);
          FUN_012d0dc8(PTR_DAT_058163b8);
          bRam0000000005c3201b = 1;
        }
        if (plVar11 != (long *)0x0) {
          if (plVar11[0x11] != 0) {
            DG_Tweening_Tween__OnTweenCallback_1ee121c(plVar11[0x11],plVar11,0);
          }
          puVar3 = PTR_DAT_058163b8;
          if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          DG_Tweening_Core_TweenManager__RemoveActiveTween_332ffa0(plVar11);
          puVar4 = PTR_DAT_058134a8;
          puVar2 = PTR_DAT_0575e330;
          iVar13 = (int)plVar11[2];
          if (*(char *)((long)plVar11 + 0x9a) == '\0') {
            if (iVar13 == 0) {
              lVar9 = *(long *)puVar3;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar9 = *(long *)puVar3;
              }
              *(int *)(*(long *)(lVar9 + 0xb8) + 0x3c) =
                   *(int *)(*(long *)(lVar9 + 0xb8) + 0x3c) + -1;
            }
            else if (iVar13 == 1) {
              lVar9 = *(long *)puVar3;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar9 = *(long *)puVar3;
              }
              *(int *)(*(long *)(lVar9 + 0xb8) + 0x40) =
                   *(int *)(*(long *)(lVar9 + 0xb8) + 0x40) + -1;
              if (*plVar11 != *(long *)puVar4) {
LAB_03430a3c:
                    /* WARNING: Subroutine does not return */
                FUN_012d1288(plVar11);
              }
              lVar9 = plVar11[0x24];
              if (lVar9 != 0) {
                iVar13 = *(int *)(lVar9 + 0x18);
                if (iVar13 < 1) goto LAB_03430a10;
                iVar15 = 0;
                do {
                  uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar9,iVar15,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar5,0);
                  iVar15 = iVar15 + 1;
                  if (iVar13 == iVar15) goto LAB_03430a10;
                  lVar9 = plVar11[0x24];
                } while (lVar9 != 0);
              }
              goto LAB_03430a34;
            }
          }
          else if (iVar13 == 0) {
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar9 = *(long *)puVar3;
            }
            lVar10 = *(long *)(lVar9 + 0xb8);
            if (*(int *)(lVar10 + 0x84) == -1) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar9 = *(long *)puVar3;
                lVar10 = *(long *)(lVar9 + 0xb8);
              }
              iVar13 = *(int *)(lVar10 + 8) + -1;
              *(int *)(lVar10 + 0x80) = iVar13;
              *(int *)(lVar10 + 0x84) = iVar13;
            }
            iVar13 = *(int *)(lVar9 + 0xe0);
            if (iVar13 == 0) {
              thunk_FUN_0130472c();
              lVar9 = *(long *)puVar3;
              iVar13 = *(int *)(lVar9 + 0xe0);
            }
            lVar10 = *(long *)(lVar9 + 0xb8);
            iVar15 = *(int *)(lVar10 + 8);
            iVar1 = *(int *)(lVar10 + 0x84);
            if (iVar13 == 0) {
              thunk_FUN_0130472c();
              lVar9 = *(long *)puVar3;
              lVar10 = *(long *)(lVar9 + 0xb8);
            }
            if (iVar1 < iVar15 + -1) {
              plVar8 = *(long **)(lVar10 + 0x50);
              if (plVar8 == (long *)0x0) goto LAB_03430a34;
              iVar13 = *(int *)(lVar10 + 0x84);
              lVar9 = thunk_FUN_01320d5c(plVar11,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) {
LAB_03430a44:
                uVar5 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                FUN_012d0eb8(uVar5,0);
              }
              uVar16 = iVar13 + 1;
              if (*(uint *)(plVar8 + 3) <= uVar16) {
LAB_03430a38:
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              plVar8[(long)(int)uVar16 + 4] = (long)plVar11;
              FUN_012d0d74(plVar8 + (long)(int)uVar16 + 4,plVar11);
              lVar9 = *(long *)puVar3;
              lVar10 = *(long *)(lVar9 + 0xb8);
              iVar13 = *(int *)(lVar10 + 0x84) + 1;
              *(int *)(lVar10 + 0x84) = iVar13;
              if (iVar13 < *(int *)(lVar10 + 0x80)) {
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar9 = *(long *)puVar3;
                  lVar10 = *(long *)(lVar9 + 0xb8);
                  iVar13 = *(int *)(lVar10 + 0x84);
                }
                *(int *)(lVar10 + 0x80) = iVar13;
              }
            }
            else {
              uVar16 = *(uint *)(lVar10 + 0x84);
              if (-1 < (int)uVar16) {
                lVar10 = (long)(int)uVar16 * 8 + 0x20;
                do {
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar9 = *(long *)puVar3;
                  }
                  plVar8 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x50);
                  if (plVar8 == (long *)0x0) goto LAB_03430a34;
                  if (*(uint *)(plVar8 + 3) <= uVar16) goto LAB_03430a38;
                  if (*(long *)((long)plVar8 + lVar10) == 0) {
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      plVar8 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                      if (plVar8 == (long *)0x0) goto LAB_03430a34;
                    }
                    lVar9 = thunk_FUN_01320d5c(plVar11,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar9 == 0) goto LAB_03430a44;
                    if (*(uint *)(plVar8 + 3) <= uVar16) goto LAB_03430a38;
                    *(long *)((long)plVar8 + lVar10) = (long)plVar11;
                    FUN_012d0d74((long *)((long)plVar8 + lVar10),plVar11);
                    lVar9 = *(long *)puVar3;
                    lVar10 = *(long *)(lVar9 + 0xb8);
                    if ((int)uVar16 < *(int *)(lVar10 + 0x80)) {
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar9 = *(long *)puVar3;
                        lVar10 = *(long *)(lVar9 + 0xb8);
                      }
                      *(uint *)(lVar10 + 0x80) = uVar16;
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      lVar9 = *(long *)puVar3;
                    }
                    lVar10 = *(long *)(lVar9 + 0xb8);
                    iVar13 = *(int *)(lVar10 + 0x80);
                    if (*(int *)(lVar10 + 0x84) < iVar13) {
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar9 = *(long *)puVar3;
                        lVar10 = *(long *)(lVar9 + 0xb8);
                        iVar13 = *(int *)(lVar10 + 0x80);
                      }
                      *(int *)(lVar10 + 0x84) = iVar13;
                    }
                    break;
                  }
                  uVar16 = uVar16 - 1;
                  lVar10 = lVar10 + -8;
                } while (-1 < (int)uVar16);
              }
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar9 = *(long *)puVar3;
            }
            *(int *)(*(long *)(lVar9 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar9 + 0xb8) + 0x34) + 1;
          }
          else if (iVar13 == 1) {
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x58);
            if (lVar9 != 0) {
              System_Collections_Generic_Stack_object___Push_31249f0
                        (lVar9,plVar11,*(undefined8 *)PTR_DAT_057d61f0);
              *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) =
                   *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) + 1;
              if (*plVar11 != *(long *)puVar4) goto LAB_03430a3c;
              lVar9 = plVar11[0x24];
              if (lVar9 != 0) {
                iVar13 = *(int *)(lVar9 + 0x18);
                if (iVar13 < 1) goto LAB_03430a10;
                iVar15 = 0;
                do {
                  uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar9,iVar15,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar5,0);
                  iVar15 = iVar15 + 1;
                  if (iVar13 == iVar15) goto LAB_03430a10;
                  lVar9 = plVar11[0x24];
                } while (lVar9 != 0);
              }
            }
            goto LAB_03430a34;
          }
LAB_03430a10:
          *(undefined1 *)(plVar11 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x03430a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
          return;
        }
LAB_03430a34:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined1 *)(plVar11 + 0x1d) = 0;
    }
    else {
      if (cRam0000000005c24e31 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ddc60);
        cRam0000000005c24e31 = '\x01';
      }
      puVar3 = PTR_DAT_057ec740;
      if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
        if ((bRam0000000005c3314e & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057ec740,0);
          bRam0000000005c3314e = 1;
        }
        puVar2 = PTR_DAT_057815e0;
        plVar8 = *(long **)puVar3;
        if ((bRam0000000005c33148 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0);
          FUN_012d0dc8(PTR_DAT_05807f60);
          FUN_012d0dc8(PTR_DAT_05797700);
          bRam0000000005c33148 = 1;
        }
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar9 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_05797700;
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x39) == '\0') {
          uVar5 = *(undefined8 *)PTR_DAT_05797700;
          if (plVar8 == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          uVar5 = System_String__Concat_1ec3580(uVar5,uVar17,0);
        }
        else {
          uVar5 = DG_Tweening_Core_Debugger__GetDebugDataMessage_3629bd0(plVar11);
          uVar17 = *(undefined8 *)puVar3;
          if (plVar8 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          }
          uVar5 = System_String__Concat_1ed10d8(uVar17,uVar5,uVar6,0);
        }
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar9 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
        if (lVar10 != 0) {
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
          uVar7 = (**(code **)(lVar10 + 0x18))
                            (*(undefined8 *)(lVar10 + 0x40),2,uVar5,*(undefined8 *)(lVar10 + 0x28));
          if ((uVar7 & 1) == 0) {
            return;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar3 = PTR_DAT_05807f60;
        uVar17 = 0;
        if ((bRam0000000005c3a1b1 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05807f60,0);
          FUN_012d0dc8(PTR_DAT_0578cb58);
          bRam0000000005c3a1b1 = 1;
          uVar17 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          uVar17 = extraout_x1_00;
        }
        if (cRam0000000005c26b67 == '\0') {
          FUN_012d0dc8(PTR_DAT_05807f60,uVar17);
          cRam0000000005c26b67 = '\x01';
        }
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar9 = *(long *)puVar3;
        }
        plVar11 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar9 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0578cb58) {
              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_041801ac;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0578cb58,3);
LAB_041801ac:
                    /* WARNING: Could not recover jumptable at 0x041801c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar12)(plVar11,2,uVar5,puVar12[1]);
        return;
      }
    }
  }
  return;
}

