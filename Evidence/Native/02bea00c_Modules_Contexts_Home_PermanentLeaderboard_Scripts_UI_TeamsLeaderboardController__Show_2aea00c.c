/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Show
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Show (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.TeamsLeaderboardController$$Show
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Show
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Show_2aea00c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2eba3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d69c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2eba3 = 1;
  }
  lVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_0576c200;
  if (lVar5 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = UnityEngine_Object__op_Equality_407f288(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057d69c8);
      if ((bRam0000000005c2eba4 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057fcc38);
        FUN_012d0dc8(PTR_DAT_057ff728);
        FUN_012d0dc8(PTR_DAT_057b82d8);
        FUN_012d0dc8(PTR_DAT_05796750);
        FUN_012d0dc8(PTR_DAT_0576c200);
        FUN_012d0dc8(PTR_DAT_057fff60);
        bRam0000000005c2eba4 = 1;
      }
      uStack_68 = 0;
      lStack_60 = 0;
      uStack_70 = 0;
      plVar8 = (long *)(param_1 + 0x60);
      *plVar8 = lVar5;
      FUN_012d0d74(plVar8,lVar5);
      puVar4 = PTR_DAT_057fff60;
      puVar3 = PTR_DAT_057ff728;
      puVar2 = PTR_DAT_057fcc38;
      puVar1 = PTR_DAT_0576c200;
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_88,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_70,*(undefined8 *)puVar3), lVar5 = lStack_60,
              (uVar6 & 1) != 0) {
          lVar9 = *plVar8;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar6 = UnityEngine_Object__op_Equality_407f288(lVar5,lVar9,0);
          if ((uVar6 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar5);
          }
          else {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar5);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar6 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__IsEnabled_35b1d64
                            (*(long *)(param_1 + 0x58),0);
          lVar5 = *(long *)(param_1 + 0x50);
          if (lVar5 != 0) {
            if ((uVar6 & 1) == 0) {
              UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
            }
            else {
              UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
              if (*plVar8 == 0) goto LAB_02bf021c;
              uVar6 = System_String__op_Equality_1ec12e0
                                (*(undefined8 *)(*plVar8 + 0x50),*(undefined8 *)puVar4,0);
              if ((uVar6 & 1) == 0) {
                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowCountryLeaderboard_2af035c
                          (param_1);
              }
              else {
                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__ShowWorldLeaderboard_2af029c
                          (param_1);
              }
            }
            return;
          }
        }
      }
LAB_02bf021c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

