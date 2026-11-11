/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottleAnimationController$$StartWaterFallAnimation
void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__StartWaterFallAnimation (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottleAnimationController$$StartWaterFallAnimation
   void 
   Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__StartWaterFallAnimation
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottleAnimationController__StartWaterFallAnimation_2983324
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

