/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$OnTabSelected
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__OnTabSelected (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamArenaLeaderboardController$$OnTabSelected
   void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__OnTabSelected
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* selectedTab, const MethodInfo*
   method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamArenaLeaderboardController__OnTabSelected_2969894
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((bRam0000000005c2d670 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057ec6e8);
    bRam0000000005c2d670 = 1;
  }
  plVar4 = (long *)(param_1 + 0x60);
  *plVar4 = param_2;
  FUN_012d0d74(plVar4,param_2);
  puVar2 = PTR_DAT_0576c200;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar5 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        lVar6 = *plVar4;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = UnityEngine_Object__op_Equality_407f288(lVar5,lVar6,0);
        if (lVar5 == 0) goto LAB_02a699f4;
        if ((uVar3 & 1) == 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c(lVar5,0);
        }
        else {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Select_2ae9f48(lVar5,0);
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 != 0) {
      if (param_2 == 0) goto LAB_02a699f4;
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(param_2 + 0x50),
                 *(undefined8 *)(lVar7 + 0x28));
    }
    if (*plVar4 != 0) {
      uVar3 = System_String__op_Equality_1ec12e0
                        (*(undefined8 *)(*plVar4 + 0x50),*(undefined8 *)PTR_DAT_057ec6e8,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),1,0);
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 != 0) goto code_r0x0418e318;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),1,0);
        lVar7 = *(long *)(param_1 + 0x28);
        if (lVar7 != 0) {
code_r0x0418e318:
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar7,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_02a699f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

