/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassAnimationConfig$$.ctor
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassAnimationConfig___ctor (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassAnimationConfig$$.ctor
   void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassAnimationConfig___ctor
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassAnimationConfig_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassAnimationConfig___ctor_38e1db4
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar5 = _UNK_043b43d8;
  uVar4 = _UNK_043b43d0;
  uVar3 = _UNK_043b43c8;
  uVar2 = _UNK_043b43c0;
  uVar1 = _UNK_043b43b0;
  *(undefined8 *)(param_1 + 0x20) = _UNK_043b43b8;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar6 = _UNK_043b43e8;
  uVar1 = _UNK_043b43e0;
  *(undefined8 *)(param_1 + 0x38) = 0x3ecccccd3e4ccccd;
  *(undefined8 *)(param_1 + 100) = uVar6;
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  uVar6 = _UNK_043b43f8;
  uVar1 = _UNK_043b43f0;
  *(undefined8 *)(param_1 + 0x54) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x4c) = uVar5;
  *(undefined8 *)(param_1 + 0x44) = uVar4;
  *(undefined8 *)(param_1 + 0x74) = uVar6;
  *(undefined8 *)(param_1 + 0x6c) = uVar1;
  *(undefined8 *)(param_1 + 0x7c) = 0x3dcccccd3f000000;
  puVar7 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
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

