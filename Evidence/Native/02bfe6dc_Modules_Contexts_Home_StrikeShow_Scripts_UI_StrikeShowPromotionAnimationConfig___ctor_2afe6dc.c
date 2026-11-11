/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowPromotionAnimationConfig$$.ctor
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowPromotionAnimationConfig___ctor (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowPromotionAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowPromotionAnimationConfig$$.ctor
   void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowPromotionAnimationConfig___ctor
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowPromotionAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowPromotionAnimationConfig___ctor_2afe6dc
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar3 = _UNK_04394cf8;
  uVar2 = _UNK_04394cf0;
  uVar1 = _UNK_04394ce0;
  *(undefined8 *)(param_1 + 0x20) = _UNK_04394ce8;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar4 = _UNK_04394d08;
  uVar1 = _UNK_04394d00;
  *(undefined8 *)(param_1 + 0x48) = 0x3dcccccd3e800000;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0x3e800000;
  puVar5 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
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

