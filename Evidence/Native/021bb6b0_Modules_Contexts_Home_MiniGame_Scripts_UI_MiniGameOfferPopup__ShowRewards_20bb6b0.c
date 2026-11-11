/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$ShowRewards
void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__ShowRewards (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$ShowRewards
   void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__ShowRewards
   (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this,
   System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__ShowRewards_20bb6b0
               (long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  puVar3 = PTR_DAT_0579b840;
  if ((bRam0000000005c2959e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05819570);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_057f7c00);
    FUN_012d0dc8(PTR_DAT_057d8668);
    FUN_012d0dc8(PTR_DAT_05793f20);
    FUN_012d0dc8(PTR_DAT_05779580);
    FUN_012d0dc8(PTR_DAT_0579b840);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_0578af90);
    bRam0000000005c2959e = 1;
  }
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057f7c00);
    lVar8 = *(long *)(param_1 + 0x50);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_021bbcdc:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      if ((*(long *)(lVar8 + 0x20) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar8 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
        lVar8 = *(long *)(param_1 + 0x50);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_021bbcdc;
          if ((*(long *)(lVar8 + 0x28) != 0) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x28) + 0x20), lVar8 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
            lVar8 = *(long *)(param_1 + 0x50);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_021bbcdc;
              if (((*(long *)(lVar8 + 0x30) != 0) &&
                  (lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x20), lVar8 != 0)) &&
                 (UnityEngine_GameObject__SetActive_408e318(lVar8,0,0), puVar4 = PTR_DAT_05819570,
                 puVar3 = PTR_DAT_0575bcf8, param_2 != 0)) {
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_f0,param_2,*(undefined8 *)PTR_DAT_057a6288);
                uStack_c0 = CONCAT44(uStack_ec,uStack_f0);
                lStack_b0 = CONCAT44(uStack_dc,uStack_e0);
                lStack_b8 = lStack_e8;
LAB_021bb88c:
                uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_c0,*(undefined8 *)PTR_DAT_057b3a70);
                lVar8 = lStack_b0;
                if ((uVar6 & 1) != 0) {
                  lVar15 = *(long *)(param_1 + 0x50);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
                    uVar6 = 0;
                    uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                    do {
                      if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef8();
                      }
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      iVar13 = *(int *)(lVar8 + 0x10);
                      lVar12 = *(long *)(lVar15 + 0x20 + uVar6 * 8);
                      if (iVar13 == 1) {
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        if (*(int *)(lVar12 + 0x10) == 1) {
                          plVar14 = *(long **)(lVar12 + 0x18);
                          uVar1 = *(undefined4 *)(lVar8 + 0x14);
                          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          uVar7 = Modules_Infrastructure_Utils_PriceFormatter__FormatNumberWithSpaces_3de4a04
                                            (uVar1,0);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0(uVar7,uVar7);
                          }
                          (**(code **)(*plVar14 + 0x558))
                                    (plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x560));
                          lVar10 = *(long *)(lVar5 + 0x10);
                          lVar11 = *(long *)puVar4;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar2 = *(uint *)(lVar5 + 0x18);
                          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                            plVar14 = (long *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar14 = lVar12;
                            FUN_012d0d74(plVar14,lVar12);
                          }
                          else {
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58
                                                  ) + 8))(lVar5,lVar12);
                          }
                          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar12 + 0x20),1,0);
                        }
                      }
                      else if (iVar13 == 2) {
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        if (*(int *)(lVar12 + 0x10) == 2) {
                          plVar14 = *(long **)(lVar12 + 0x18);
                          uVar7 = Modules_Infrastructure_Utils_TimeFormatter__ShortFormat_3de6cdc
                                            (*(undefined8 *)(lVar8 + 0x18),0);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0(uVar7,uVar7);
                          }
                          (**(code **)(*plVar14 + 0x558))
                                    (plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x560));
                          lVar8 = *(long *)(lVar5 + 0x10);
                          lVar15 = *(long *)puVar4;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar2 = *(uint *)(lVar5 + 0x18);
                          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                            plVar14 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar14 = lVar12;
                            FUN_012d0d74(plVar14,lVar12);
                          }
                          else {
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58
                                                  ) + 8))(lVar5,lVar12);
                          }
                          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar12 + 0x20),1,0);
                          break;
                        }
                      }
                      else if (iVar13 == 0x11) {
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        if (*(int *)(lVar12 + 0x10) == 0x11) {
                          plVar14 = *(long **)(lVar12 + 0x18);
                          uStack_f0 = *(undefined4 *)(lVar8 + 0x14);
                          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_f0);
                          uVar7 = System_String__Format_1ec10a8
                                            (*(undefined8 *)PTR_DAT_0578af90,uVar7,0);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0(uVar7,uVar7);
                          }
                          (**(code **)(*plVar14 + 0x558))
                                    (plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x560));
                          lVar8 = *(long *)(lVar5 + 0x10);
                          lVar15 = *(long *)puVar4;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar2 = *(uint *)(lVar5 + 0x18);
                          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                            plVar14 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar14 = lVar12;
                            FUN_012d0d74(plVar14,lVar12);
                          }
                          else {
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58
                                                  ) + 8))(lVar5,lVar12);
                          }
                          if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar12 + 0x20),1,0);
                          break;
                        }
                      }
                      uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
                      uVar6 = uVar6 + 1;
                    } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
                  }
                  goto LAB_021bb88c;
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_c0,*(undefined8 *)PTR_DAT_05811f10);
                puVar4 = PTR_DAT_05793f20;
                puVar3 = PTR_DAT_05779580;
                Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup__GetConfig_20bc088
                          (&uStack_f0,param_1,*(undefined4 *)(lVar5 + 0x18));
                if (0 < *(int *)(lVar5 + 0x18)) {
                  iVar13 = 0;
                  do {
                    lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                      (lVar5,iVar13,*(undefined8 *)puVar3);
                    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) ||
                       ((lVar8 = UnityEngine_GameObject__get_transform_408e25c
                                           (*(long *)(lVar8 + 0x20),0), lStack_e8 == 0 ||
                        (System_Collections_Generic_List_Vector3___get_Item_2275a94
                                   (lStack_e8,iVar13,*(undefined8 *)puVar4), lVar8 == 0))))
                    goto LAB_021bbcbc;
                    UnityEngine_Transform__set_localPosition_4092ce0(lVar8,0);
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < *(int *)(lVar5 + 0x18));
                }
                if (*(long *)(param_1 + 0x20) != 0) {
                  UnityEngine_SpriteRenderer__set_size_4095cb8
                            (uStack_e0,uStack_dc,*(long *)(param_1 + 0x20),0);
                  if ((*(long *)(param_1 + 0x28) != 0) &&
                     (lVar5 = UnityEngine_GameObject__get_transform_408e25c
                                        (*(long *)(param_1 + 0x28),0), lVar5 != 0)) {
                    UnityEngine_Transform__set_localPosition_4092ce0
                              (uStack_d8,uStack_d4,uStack_d0,lVar5,0);
                    if ((*(long *)(param_1 + 0x58) != 0) &&
                       (lVar5 = UnityEngine_GameObject__get_transform_408e25c
                                          (*(long *)(param_1 + 0x58),0), lVar5 != 0)) {
                      UnityEngine_Transform__set_localScale_40932d0
                                (uStack_cc,uStack_c8,uStack_c4,lVar5,0);
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
LAB_021bbcbc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

