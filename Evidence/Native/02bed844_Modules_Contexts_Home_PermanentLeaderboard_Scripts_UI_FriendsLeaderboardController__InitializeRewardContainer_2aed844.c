/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$InitializeRewardContainer
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__InitializeRewardContainer (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$InitializeRewardContainer
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__InitializeRewardContainer
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__InitializeRewardContainer_2aed844
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uStack_24;
  
  if ((bRam0000000005c2eb8f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d5940);
    bRam0000000005c2eb8f = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar4 = Modules_Contexts_Home_Friends_Scripts_FriendsService__CanClaimSyncReward_1c7c3fc
                      (*(long *)(param_1 + 0x90),0);
    if ((uVar4 & 1) == 0) {
      bVar3 = false;
    }
    else {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_02bed9f0;
      lVar5 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetSyncReward_1c7c4e8
                        (*(long *)(param_1 + 0x90),0);
      bVar3 = lVar5 != 0;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x58),bVar3,0);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x68),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,bVar3,0);
        if (bVar3 == false) {
          if (*(long *)(param_1 + 0x70) != 0) {
            UnityEngine_RectTransform__get_sizeDelta_4094e94(*(long *)(param_1 + 0x70),0);
            lVar5 = *(long *)(param_1 + 0x70);
            if (lVar5 != 0) {
              if (pcRam0000000005c3a708 == (code *)0x0) {
                pcRam0000000005c3a708 = (code *)FUN_012d0d84(&UNK_043ef830,0);
              }
              (*pcRam0000000005c3a708)(lVar5,&stack0xffffffffffffffe8);
              return;
            }
          }
        }
        else if (*(long *)(param_1 + 0x90) != 0) {
          lVar5 = *(long *)(param_1 + 0x60);
          uVar6 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetSyncReward_1c7c4e8
                            (*(long *)(param_1 + 0x90),0);
          puVar2 = PTR_DAT_057d5940;
          puVar1 = PTR_DAT_057bc5e8;
          if (lVar5 != 0) {
            Modules_Contexts_Home_Friends_Scripts_UI_FacebookSignInRewardView__SetReward_1b8cffc
                      (lVar5,uVar6,0);
            lVar5 = *(long *)(param_1 + 0x68);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                              (*(undefined8 *)puVar2,0);
            if ((*(long *)(param_1 + 0x90) != 0) &&
               (lVar7 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetSyncReward_1c7c4e8
                                  (*(long *)(param_1 + 0x90),0), lVar7 != 0)) {
              uStack_24 = *(undefined4 *)(lVar7 + 0x14);
              uVar8 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
              uVar6 = System_String__Format_1ec10a8(uVar6,uVar8,0);
              if (lVar5 != 0) {
                TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar6,1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02bed9f0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

