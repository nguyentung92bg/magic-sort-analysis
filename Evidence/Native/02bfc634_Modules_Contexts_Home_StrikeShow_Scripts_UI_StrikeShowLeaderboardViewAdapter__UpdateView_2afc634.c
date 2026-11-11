/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$UpdateView
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__UpdateView_2afc634
               (long param_1,long *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c2ec0d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057da770);
    FUN_012d0dc8(PTR_DAT_057bffd8);
    bRam0000000005c2ec0d = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_057da770),
     param_2 != (long *)0x0)) {
    lVar2 = *(long *)PTR_DAT_057bffd8;
    if ((*(byte *)(lVar2 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 300) * 8 + -8) == lVar2)) {
      lVar3 = *param_2;
      if ((*(byte *)(lVar2 + 300) <= *(byte *)(lVar3 + 300)) &&
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar2 + 300) * 8 + -8) == lVar2)) {
                    /* WARNING: Could not recover jumptable at 0x02bfc710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x1c8))(param_2,uVar1,*(undefined8 *)(lVar3 + 0x1d0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

