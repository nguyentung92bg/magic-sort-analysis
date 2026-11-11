/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnFriendsInitializationCompletedSignal
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnFriendsInitializationCompletedSignal (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnFriendsInitializationCompletedSignal
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnFriendsInitializationCompletedSignal
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnFriendsInitializationCompletedSignal_2aedc98
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),0,0);
  if ((bRam0000000005c2eb8c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d69c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2eb8c = 1;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  lVar7 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar7 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_02bea2f4;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),0,0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_02bea2f4;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),0,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_02bea2f4;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),0,0);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_02bea2f4;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x48),0,0);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) goto LAB_02bea2f4;
    Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendsImpressionEvent_148d6b8
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_02bea2f4;
    uVar8 = Modules_Contexts_Home_Friends_Scripts_FriendsService__IsEnabled_1c7997c
                      (*(long *)(param_1 + 0x90),0);
    if ((uVar8 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x38);
    }
    else {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_02bea2f4;
      iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x74);
      if (iVar1 == 3) {
        lVar7 = *(long *)(param_1 + 0x40);
        if (lVar7 == 0) goto LAB_02bea2f4;
        goto LAB_02bea20c;
      }
      if (iVar1 != 1) {
        if (*(long *)(param_1 + 0x30) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),1,0);
          puVar2 = PTR_DAT_057d69c8;
          if (*(long *)(param_1 + 0x90) != 0) {
            uVar8 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasUnseenRequests_1c7ab48
                              (*(long *)(param_1 + 0x90),0);
            if ((uVar8 & 1) == 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x88);
              if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar8 = UnityEngine_Object__op_Equality_407f288(uVar9,0,0);
              if ((uVar8 & 1) == 0) {
                return;
              }
              if (*(long *)(param_1 + 0x90) != 0) {
                uVar8 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyFriends_1c7a97c
                                  (*(long *)(param_1 + 0x90),0);
                if ((uVar8 & 1) == 0) {
                  if (*(long *)(param_1 + 0x90) == 0) goto LAB_02bea2f4;
                  uVar6 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnySuggestions_1c7c158
                                    (*(long *)(param_1 + 0x90),0);
                  uVar6 = uVar6 & 1;
                }
                else {
                  uVar6 = 0;
                }
                lVar7 = *(long *)(param_1 + 0x18);
                if (lVar7 != 0) {
                  uVar9 = *(undefined8 *)puVar2;
                  goto LAB_02bea2dc;
                }
              }
            }
            else {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 != 0) {
                uVar9 = *(undefined8 *)puVar2;
                uVar6 = 0;
LAB_02bea2dc:
                lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar7,uVar6,uVar9)
                ;
                if ((bRam0000000005c2eb8e & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_057fcc38);
                  FUN_012d0dc8(PTR_DAT_057ff728);
                  FUN_012d0dc8(PTR_DAT_057b82d8);
                  FUN_012d0dc8(PTR_DAT_05796750);
                  FUN_012d0dc8(PTR_DAT_0576c200);
                  FUN_012d0dc8(PTR_DAT_0580a9a8);
                  bRam0000000005c2eb8e = 1;
                }
                uStack_68 = 0;
                lStack_60 = 0;
                uStack_70 = 0;
                plVar10 = (long *)(param_1 + 0x88);
                *plVar10 = lVar7;
                FUN_012d0d74(plVar10,lVar7);
                puVar5 = PTR_DAT_0580a9a8;
                puVar4 = PTR_DAT_057ff728;
                puVar3 = PTR_DAT_057fcc38;
                puVar2 = PTR_DAT_0576c200;
                if (*(long *)(param_1 + 0x18) != 0) {
                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                            (&uStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
                  uStack_68 = uStack_80;
                  uStack_70 = uStack_88;
                  lStack_60 = lStack_78;
                  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                           (&uStack_70,*(undefined8 *)puVar4), lVar7 = lStack_60,
                        (uVar8 & 1) != 0) {
                    lVar11 = *plVar10;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar8 = UnityEngine_Object__op_Equality_407f288(lVar7,lVar11,0);
                    if ((uVar8 & 1) == 0) {
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c
                                (lVar7);
                    }
                    else {
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48
                                (lVar7);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_70,*(undefined8 *)puVar3);
                  if (*plVar10 != 0) {
                    uVar8 = System_String__op_Equality_1ec12e0
                                      (*(undefined8 *)(*plVar10 + 0x50),*(undefined8 *)puVar5,0);
                    if ((uVar8 & 1) == 0) {
                      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowAddFriends_2aedfa8
                                (param_1);
                    }
                    else {
                      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowFriendsLeaderboard_2aedf70
                                (param_1);
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
        goto LAB_02bea2f4;
      }
      lVar7 = *(long *)(param_1 + 0x48);
    }
    if (lVar7 != 0) {
LAB_02bea20c:
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar7,1);
      return;
    }
  }
LAB_02bea2f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

