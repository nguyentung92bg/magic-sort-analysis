/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$SetWaterRandomOffsetTime
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__SetWaterRandomOffsetTime (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$SetWaterRandomOffsetTime
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__SetWaterRandomOffsetTime
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__SetWaterRandomOffsetTime_375644c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 03856460 to 03956487 has its CatchHandler @ 03856694 */
  if ((bRam0000000005c33b57 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e670);
    bRam0000000005c33b57 = 1;
  }
  puVar2 = PTR_DAT_0577e670;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = UnityEngine_Renderer__get_material_40828f4(*(long *)(param_1 + 0x20),0);
                    /* try { // try from 03856494 to 039564af has its CatchHandler @ 0385669c */
    uVar4 = UnityEngine_Random__Range_383a610(0,0x3f800000,0);
                    /* try { // try from 038564b0 to 039564bf has its CatchHandler @ 03856668 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (lVar3 != 0) {
                    /* try { // try from 038564c0 to 039565cf has its CatchHandler @ 03855f90 */
      uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
      if (pcRam0000000005c34748 == (code *)0x0) {
        pcRam0000000005c34748 = (code *)FUN_012d0d84(&UNK_043b3a01);
      }
                    /* WARNING: Could not recover jumptable at 0x0393f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c34748)(uVar4,lVar3,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

