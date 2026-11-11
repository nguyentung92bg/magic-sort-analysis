/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleRevealAnimationConfig$$.ctor
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleRevealAnimationConfig___ctor (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleRevealAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleRevealAnimationConfig$$.ctor
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleRevealAnimationConfig___ctor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleRevealAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleRevealAnimationConfig___ctor_22fb950
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_057ecee0;
  if ((bRam0000000005c2a5f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ecee0);
    bRam0000000005c2a5f3 = 1;
  }
  uVar2 = UnityEngine_Shader__PropertyToID_383f05c(*(undefined8 *)puVar1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
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

