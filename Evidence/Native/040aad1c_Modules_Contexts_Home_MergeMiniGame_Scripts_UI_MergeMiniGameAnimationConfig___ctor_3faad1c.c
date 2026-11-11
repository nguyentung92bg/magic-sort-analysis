/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeMiniGameAnimationConfig$$.ctor
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameAnimationConfig___ctor (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeMiniGameAnimationConfig$$.ctor
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameAnimationConfig___ctor
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeMiniGameAnimationConfig___ctor_3faad1c
               (long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_043e8808;
  uVar2 = _UNK_043e8800;
  *(undefined8 *)(param_1 + 0x198) = 0x43ecccccd;
  *(undefined8 *)(param_1 + 400) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
  }
  uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
  uVar1 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x1c0) = _UNK_0438dc28;
  uVar2 = _UNK_043e8810;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3e19999a;
  *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  *(undefined4 *)(param_1 + 0x294) = 5;
  puVar3 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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

