/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$SetTeamData
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__SetTeamData (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o* data, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$SetTeamData
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__SetTeamData
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this,
   Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o* data, int32_t rank, const MethodInfo*
   method); */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__SetTeamData_345e388
               (long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  int iStack_34;
  
  iStack_34 = param_3;
  if ((bRam0000000005c3261b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c3261b = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x10);
    FUN_012d0d74((undefined8 *)(param_1 + 0x78));
    lVar8 = *(long *)(param_1 + 0x30);
    uVar4 = System_Int32__ToString_26c9768(&iStack_34,0);
    if (lVar8 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar4,1,0);
      puVar3 = PTR_DAT_057db748;
      if (*(long *)(param_1 + 0x38) != 0) {
        TMPro_TMP_Text__SetText_3dc1ab4
                  (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x18),1,0);
        uStack_38 = *(undefined4 *)(param_2 + 0x20);
        lVar8 = *(long *)(param_1 + 0x40);
        uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_38);
        puVar2 = PTR_DAT_057c0628;
        if (*(long *)(param_1 + 0x70) != 0) {
          uStack_54 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetTeamCapacity_35b2178
                                (*(long *)(param_1 + 0x70),0);
                    /* try { // try from 0355e480 to 0365e62f has its CatchHandler @ 0355e480
                       catch() { ... } // from try @ 0355e480 with catch @ 0355e480
                       catch() { ... } // from try @ 0355e698 with catch @ 0355e480
                       catch() { ... } // from try @ 0355e6ac with catch @ 0355e480
                       catch() { ... } // from try @ 0355e6e8 with catch @ 0355e480
                       catch() { ... } // from try @ 0355e730 with catch @ 0355e480 */
          uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
          uVar4 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar4,uVar5,0);
          if (lVar8 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar4,1,0);
            uStack_50 = *(undefined8 *)(param_2 + 0x28);
            lVar8 = *(long *)(param_1 + 0x48);
            uVar4 = System_Int64__ToString_26ca87c(&uStack_50,0);
            if (lVar8 != 0) {
              TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar4,1,0);
              lVar8 = *(long *)(param_1 + 0x58);
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (0 < (int)uVar1) {
                  uVar9 = 0;
                  do {
                    if (uVar1 <= uVar9) goto LAB_0355e5b4;
                    lVar6 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
                    if (lVar6 == 0) goto LAB_0355e5b0;
                    UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar1);
                }
                if (iStack_34 < 4) {
                  lVar8 = *(long *)(param_1 + 0x58);
                  if (lVar8 == 0) goto LAB_0355e5b0;
                  if (*(uint *)(lVar8 + 0x18) <= iStack_34 - 1U) {
LAB_0355e5b4:
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef8();
                  }
                  lVar8 = *(long *)(lVar8 + (long)(int)(iStack_34 - 1U) * 8 + 0x20);
                  if (lVar8 == 0) goto LAB_0355e5b0;
                  UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
                }
                if (*(long *)(param_1 + 0x60) != 0) {
                  uVar7 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite_2efa8d0
                                    (*(long *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x30),
                                     &uStack_48,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0355e5b0;
                    UnityEngine_SpriteRenderer__set_sprite_4095b64
                              (*(long *)(param_1 + 0x50),uStack_48,0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0355e5b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

