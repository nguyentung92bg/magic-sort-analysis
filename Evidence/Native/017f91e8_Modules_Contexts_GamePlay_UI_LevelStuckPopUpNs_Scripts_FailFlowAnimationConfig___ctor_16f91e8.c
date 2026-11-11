/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.FailFlowAnimationConfig$$.ctor
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig___ctor (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.FailFlowAnimationConfig$$.ctor
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig___ctor
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig___ctor_16f91e8
               (long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = _UNK_0433a370;
  *(undefined8 *)(param_1 + 0x160) = 0x3f4ccccd3f4ccccd;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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

