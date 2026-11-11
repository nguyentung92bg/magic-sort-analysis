/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardElementView$$Recycle
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView__Recycle (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardElementView$$Recycle
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView__Recycle
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardElementView__Recycle_2afc054
               (long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_Transform__SetParent_409352c(lVar1,0,0);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bfc090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),param_1,*(undefined8 *)(lVar1 + 0x28))
    ;
    return;
  }
  return;
}

