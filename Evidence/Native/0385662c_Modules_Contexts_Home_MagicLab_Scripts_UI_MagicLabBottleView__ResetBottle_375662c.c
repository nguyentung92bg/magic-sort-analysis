/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$ResetBottle
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__ResetBottle (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$ResetBottle
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__ResetBottle
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__ResetBottle_375662c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0385662c to 039566c7 has its CatchHandler @ 03855f90 */
                    /* catch() { ... } // from try @ 03856620 with catch @ 03856640 */
  if ((bRam0000000005c33b58 & 1) == 0) {
                    /* catch() { ... } // from try @ 038565e4 with catch @ 03856644 */
                    /* catch() { ... } // from try @ 038565e0 with catch @ 03856648 */
                    /* catch() { ... } // from try @ 038565dc with catch @ 0385664c */
    FUN_012d0dc8(PTR_DAT_057ef9a0);
                    /* catch() { ... } // from try @ 038565d8 with catch @ 03856650 */
                    /* catch() { ... } // from try @ 038565d4 with catch @ 03856654 */
    bRam0000000005c33b58 = 1;
  }
                    /* catch() { ... } // from try @ 038565fc with catch @ 03856658
                       catch() { ... } // from try @ 03856628 with catch @ 03856658 */
  lVar1 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 03856608 with catch @ 0385665c
                       catch() { ... } // from try @ 03856624 with catch @ 0385665c */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 038565d0 with catch @ 03856660
                       catch() { ... } // from try @ 03856614 with catch @ 03856660 */
                    /* catch() { ... } // from try @ 038565e8 with catch @ 03856664 */
                    /* catch() { ... } // from try @ 038564b0 with catch @ 03856668 */
                    /* catch() { ... } // from try @ 03856320 with catch @ 0385666c */
                    /* catch() { ... } // from try @ 03856290 with catch @ 03856670 */
    uVar2 = *(undefined8 *)PTR_DAT_057ef9a0;
                    /* catch() { ... } // from try @ 038563bc with catch @ 03856674 */
                    /* catch() { ... } // from try @ 03856368 with catch @ 03856678 */
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 038562ec with catch @ 0385667c */
  FUN_012d0ef0();
}

