/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$UpdateView
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject*
   viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView_2afc720
               (undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c2ec0e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05767738);
    FUN_012d0dc8(PTR_DAT_057bffd8);
    bRam0000000005c2ec0e = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)PTR_DAT_057bffd8;
    if ((*(byte *)(lVar1 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
      lVar2 = *param_2;
      if ((*(byte *)(lVar1 + 300) <= *(byte *)(lVar2 + 300)) &&
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
        if (param_3 == 0) {
          lVar1 = 0;
        }
        else {
          uVar3 = *(undefined8 *)PTR_DAT_05767738;
          lVar1 = thunk_FUN_01320d5c(param_3,uVar3);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(param_3,uVar3);
          }
          lVar2 = *param_2;
        }
                    /* WARNING: Could not recover jumptable at 0x02bfc7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x1c8))(param_2,lVar1,*(undefined8 *)(lVar2 + 0x1d0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

