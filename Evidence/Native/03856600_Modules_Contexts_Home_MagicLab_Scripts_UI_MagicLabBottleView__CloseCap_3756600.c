/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$CloseCap
void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__CloseCap (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicLab.Scripts.UI.MagicLabBottleView$$CloseCap
   void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__CloseCap
   (Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicLab_Scripts_UI_MagicLabBottleView__CloseCap_3756600(long param_1)

{
  long lVar1;
  
                    /* try { // try from 03856608 to 03956613 has its CatchHandler @ 0385665c */
                    /* try { // try from 03856614 to 0395661f has its CatchHandler @ 03856660 */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0), lVar1 != 0
     )) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03856628 to 0395662b has its CatchHandler @ 03856658 */
  FUN_012d0ef0();
}

