/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$GetSfxTypeForButton
int32_t Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__GetSfxTypeForButton (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Tab$$GetSfxTypeForButton
   int32_t Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__GetSfxTypeForButton
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab_o* __this, const MethodInfo* method);
    */

undefined4
Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__GetSfxTypeForButton_2aefdb8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x30) - 1;
  if (uVar1 < 3) {
    return *(undefined4 *)(&UNK_04394cb0 + (long)(int)uVar1 * 4);
  }
  return 5;
}

