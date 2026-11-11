/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardDividerElementView$$SetViewModel
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardDividerElementView__SetViewModel (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardDividerElementView_o* __this, Modules_Contexts_Home_StrikeShow_Scripts_UI_IStrikeShowLeaderboardRowViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardDividerElementView$$SetViewModel
   void 
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardDividerElementView__SetViewModel
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardDividerElementView_o* __this,
   Modules_Contexts_Home_StrikeShow_Scripts_UI_IStrikeShowLeaderboardRowViewModel_o* viewModel,
   const MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardDividerElementView__SetViewModel_2afbf50
               (long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c2ec09 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cd3b8);
    bRam0000000005c2ec09 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057cd3b8 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057cd3b8))
    {
      if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x38) != 0)) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),(char)param_2[2],0);
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != 0) {
          lVar2 = param_2[2];
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar3,(char)lVar2 == '\0');
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return;
}

