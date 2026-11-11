/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$OnFriendRequestSent
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnFriendRequestSent (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, System_String_o* userId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$OnFriendRequestSent
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnFriendRequestSent
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, System_String_o*
   userId, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnFriendRequestSent_2aed44c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  float fVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = Modules_Contexts_Home_Friends_Scripts_UI_FriendsScrollViewAdapter__GetIndexByUserId_1b91b00
                      (*(long *)(param_1 + 0x38),param_2,0);
    if (iVar2 < 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      Modules_Contexts_Home_Friends_Scripts_UI_FriendsScrollViewAdapter__RemoveViewModelAt_1b91a0c
                (*(long *)(param_1 + 0x38),iVar2,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__RemoveItemFromScroll_40086bc
                  (*(long *)(param_1 + 0x30),iVar2,0);
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__CalculateMaxMin_400999c
                    (lVar4,0);
          if ((bRam0000000005c393bf & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057b4bd0);
            bRam0000000005c393bf = 1;
          }
          puVar1 = PTR_DAT_057b4bd0;
          plVar10 = *(long **)(lVar4 + 0x30);
          if (plVar10 == (long *)0x0) {
LAB_0410b87c:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          iVar2 = *(int *)(lVar4 + 0x38);
          do {
            lVar6 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0410b5a8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_0410b5a8:
            iVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
            if (iVar3 <= iVar2) {
              plVar10 = *(long **)(lVar4 + 0x30);
              if (plVar10 != (long *)0x0) {
                lVar6 = *plVar10;
                iVar2 = *(int *)(lVar4 + 0x3c);
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
                if (uVar8 == 0) goto LAB_0410b814;
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_0410b7fc;
              }
              goto LAB_0410b87c;
            }
            plVar10 = *(long **)(lVar4 + 0x30);
            if (plVar10 == (long *)0x0) goto LAB_0410b87c;
            lVar6 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0410b610;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,0);
LAB_0410b610:
            lVar6 = (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
            if ((lVar6 == 0) || (plVar10 = *(long **)(lVar4 + 0x30), plVar10 == (long *)0x0))
            goto LAB_0410b87c;
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0410b67c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,0);
LAB_0410b67c:
            lVar7 = (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
            if (lVar7 == 0) goto LAB_0410b87c;
            fVar11 = (float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar4 + 0x50) >> 0x20);
            UnityEngine_Bounds__set_center_383763c
                      (CONCAT44(fVar11,(float)*(undefined8 *)(lVar7 + 0x10) +
                                       (float)*(undefined8 *)(lVar4 + 0x50)),fVar11,
                       *(float *)(lVar7 + 0x18) + *(float *)(lVar4 + 0x58),lVar6 + 0x1c,0);
            plVar10 = *(long **)(lVar4 + 0x30);
            if (plVar10 == (long *)0x0) goto LAB_0410b87c;
            lVar6 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0410b70c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,0);
LAB_0410b70c:
            lVar6 = (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
            if (lVar6 == 0) goto LAB_0410b87c;
            uStack_50 = *(undefined8 *)(lVar4 + 0x90);
            uStack_58 = *(undefined8 *)(lVar4 + 0x88);
            uStack_60 = *(undefined8 *)(lVar4 + 0x80);
            uVar8 = UnityEngine_Bounds__Intersects_3837898(lVar6 + 0x1c,&uStack_60,0);
            if ((uVar8 & 1) != 0) {
              plVar10 = *(long **)(lVar4 + 0x30);
              iVar3 = iVar2;
              if (*(int *)(lVar4 + 0x38) <= iVar2) {
                iVar3 = *(int *)(lVar4 + 0x38);
              }
              *(int *)(lVar4 + 0x38) = iVar3;
              iVar3 = iVar2;
              if (iVar2 <= *(int *)(lVar4 + 0x3c)) {
                iVar3 = *(int *)(lVar4 + 0x3c);
              }
              *(int *)(lVar4 + 0x3c) = iVar3;
              if (plVar10 == (long *)0x0) goto LAB_0410b87c;
              lVar6 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_0410b7b8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,3);
LAB_0410b7b8:
              (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
            }
            plVar10 = *(long **)(lVar4 + 0x30);
            iVar2 = iVar2 + 1;
            if (plVar10 == (long *)0x0) goto LAB_0410b87c;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0410b7fc:
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
      goto LAB_0410b834;
    }
  }
LAB_0410b814:
  puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_0410b834:
  iVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
  if (iVar3 + -1 <= iVar2) {
    iVar2 = iVar3 + -1;
  }
  *(int *)(lVar4 + 0x3c) = iVar2;
  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollAdapterViews_400a8bc
            (lVar4,*(undefined4 *)(lVar4 + 0x38),iVar2,*(undefined4 *)(lVar4 + 0x38),iVar2);
  return;
}

