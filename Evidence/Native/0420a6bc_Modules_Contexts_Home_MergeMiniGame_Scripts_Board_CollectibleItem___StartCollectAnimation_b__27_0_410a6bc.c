/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$<StartCollectAnimation>b__27_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___StartCollectAnimation_b__27_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.CollectibleItem$$<StartCollectAnimation>b__27_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___StartCollectAnimation_b__27_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_CollectibleItem___StartCollectAnimation_b__27_0_410a6bc
               (long *param_1)

{
  long lVar1;
  
  if ((param_1[0x11] != 0) && (lVar1 = *(long *)(param_1[0x11] + 0x60), lVar1 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar1,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0420a6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

