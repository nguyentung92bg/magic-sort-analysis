/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<DestroyGenerator>b__22_1
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_1 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<DestroyGenerator>b__22_1
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_1
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_1_411ab30
               (long *param_1)

{
  long lVar1;
  
  if ((param_1[0x11] != 0) && (lVar1 = *(long *)(param_1[0x11] + 0x60), lVar1 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar1,param_1,0);
    if (param_1[0x11] != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__RemoveItem_410964c
                (param_1[0x11],param_1);
                    /* WARNING: Could not recover jumptable at 0x0421ab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

