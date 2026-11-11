/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimationConfig$$.ctor
void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimationConfig___ctor (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.ScrollItemsEnterAnimationConfig$$.ctor
   void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimationConfig___ctor
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_ScrollItemsEnterAnimationConfig___ctor_246ab18
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 0x3e4ccccd;
  puVar1 = PTR_DAT_0576c200;
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

