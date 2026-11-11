/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetCompletedText
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetCompletedText (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetCompletedText
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetCompletedText
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetCompletedText_3761688
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_057bc5e8;
  if ((bRam0000000005c33bd1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057a6010);
    bRam0000000005c33bd1 = 1;
  }
  puVar1 = PTR_DAT_057a6010;
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar1,0);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03861710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

