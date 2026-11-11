/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$PlayBottlePourAnimation
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottlePourAnimation (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$PlayBottlePourAnimation
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottlePourAnimation
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__PlayBottlePourAnimation_3756540
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iStack_24;
  
  puVar1 = PTR_DAT_05816390;
  if ((bRam0000000005c33b56 & 1) == 0) {
    iStack_24 = param_2;
    FUN_012d0dc8(PTR_DAT_05816390);
    bRam0000000005c33b56 = 1;
  }
  iStack_24 = param_2 + 1;
  uVar2 = System_Int32__ToString_26c9768(&iStack_24,0);
  uVar2 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,uVar2,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Animation__Play_1f7a100(*(long *)(param_1 + 0x28),uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038565d0 to 039565d3 has its CatchHandler @ 03856660 */
  FUN_012d0ef0();
}

