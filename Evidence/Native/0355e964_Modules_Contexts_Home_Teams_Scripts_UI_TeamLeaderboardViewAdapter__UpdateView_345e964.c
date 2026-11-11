/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$UpdateView
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__UpdateView_345e964
               (long param_1,long *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000005c32621 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d1730);
    FUN_012d0dc8(PTR_DAT_0580e550);
    bRam0000000005c32621 = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_057d1730),
     param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0580e550 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar2) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0580e550)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  iStack_34 = param_3 + 1;
  if ((bRam0000000005c3261b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c3261b = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar9 != 0) {
    param_2[0xf] = *(long *)(lVar9 + 0x10);
    FUN_012d0d74(param_2 + 0xf);
    lVar10 = param_2[6];
    uVar5 = System_Int32__ToString_26c9768(&iStack_34,0);
    if (lVar10 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar10,uVar5,1,0);
      puVar4 = PTR_DAT_057db748;
      if (param_2[7] != 0) {
        TMPro_TMP_Text__SetText_3dc1ab4(param_2[7],*(undefined8 *)(lVar9 + 0x18),1,0);
        uStack_38 = *(undefined4 *)(lVar9 + 0x20);
        lVar10 = param_2[8];
        uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_38);
        puVar3 = PTR_DAT_057c0628;
        if (param_2[0xe] != 0) {
          uStack_54 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetTeamCapacity_35b2178
                                (param_2[0xe],0);
          uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
          uVar5 = System_String__Format_1ed15b8(*(undefined8 *)puVar3,uVar5,uVar6,0);
          if (lVar10 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar10,uVar5,1,0);
            uStack_50 = *(undefined8 *)(lVar9 + 0x28);
            lVar10 = param_2[9];
            uVar5 = System_Int64__ToString_26ca87c(&uStack_50,0);
            if (lVar10 != 0) {
              TMPro_TMP_Text__SetText_3dc1ab4(lVar10,uVar5,1,0);
              lVar10 = param_2[0xb];
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (0 < (int)uVar1) {
                  uVar11 = 0;
                  do {
                    if (uVar1 <= uVar11) goto LAB_0355e5b4;
                    lVar7 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
                    if (lVar7 == 0) goto LAB_0355e5b0;
                    UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < (int)uVar1);
                }
                if (iStack_34 < 4) {
                  lVar10 = param_2[0xb];
                  if (lVar10 == 0) goto LAB_0355e5b0;
                  if (*(uint *)(lVar10 + 0x18) <= iStack_34 - 1U) {
LAB_0355e5b4:
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef8();
                  }
                  lVar10 = *(long *)(lVar10 + (long)(int)(iStack_34 - 1U) * 8 + 0x20);
                  if (lVar10 == 0) goto LAB_0355e5b0;
                  UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
                }
                if (param_2[0xc] != 0) {
                  uVar8 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite_2efa8d0
                                    (param_2[0xc],*(undefined4 *)(lVar9 + 0x30),&uStack_48,0);
                  if ((uVar8 & 1) != 0) {
                    if (param_2[10] == 0) goto LAB_0355e5b0;
                    UnityEngine_SpriteRenderer__set_sprite_4095b64(param_2[10],uStack_48,0);
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

