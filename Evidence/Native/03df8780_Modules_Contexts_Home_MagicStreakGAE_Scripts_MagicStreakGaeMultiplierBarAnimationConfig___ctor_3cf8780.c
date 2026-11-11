/* IL2CPP: Modules.Contexts.Home.MagicStreakGAE.Scripts.MagicStreakGaeMultiplierBarAnimationConfig$$.ctor
void Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeMultiplierBarAnimationConfig___ctor (Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeMultiplierBarAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakGAE.Scripts.MagicStreakGaeMultiplierBarAnimationConfig$$.ctor
   void 
   Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeMultiplierBarAnimationConfig___ctor
   (Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeMultiplierBarAnimationConfig_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeMultiplierBarAnimationConfig___ctor_3cf8780
               (undefined8 param_1)

{
  undefined *puVar1;
  
                    /* try { // try from 03df8780 to 03ef8783 has its CatchHandler @ 03df8790 */
  puVar1 = PTR_DAT_0576c200;
                    /* try { // try from 03df8784 to 03ef87ab has its CatchHandler @ 03df86d4 */
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

