/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamsBadgeConfig$$TryGetBadgeSprite
bool Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite (Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig_o* __this, int32_t id, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamsBadgeConfig$$TryGetBadgeSprite
   bool Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig_o* __this, int32_t id,
   UnityEngine_Sprite_o** sprite, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Teams_Scripts_UI_TeamsBadgeConfig__TryGetBadgeSprite_2efa8d0
          (long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 02ffa8d4 to 030fa967 has its CatchHandler @ 02ffa9e0 */
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
LAB_02ffa958:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(lVar2 + 0x18)) {
    lVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 0x20 + lVar1 * 8);
      if (lVar3 == 0) goto LAB_02ffa958;
      if (*(int *)(lVar3 + 0x10) == param_2) {
        *param_3 = *(undefined8 *)(lVar3 + 0x18);
        FUN_012d0d74(param_3);
        return 1;
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(lVar2 + 0x18));
  }
  return 0;
}

