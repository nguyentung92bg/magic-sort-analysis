/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$Dispose
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__Dispose (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$Dispose
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__Dispose
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__Dispose_411a938
               (long *param_1)

{
  DG_Tweening_TweenExtensions__Kill_1edd6a4(param_1[0x17],1,0);
  DG_Tweening_TweenExtensions__Kill_1edd6a4(param_1[0x18],1,0);
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__Dispose_4109428(param_1);
                    /* WARNING: Could not recover jumptable at 0x0421a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  return;
}

