/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkAnimationConfig$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkAnimationConfig___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkAnimationConfig$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkAnimationConfig___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkAnimationConfig___ctor_2752ab0
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  uVar2 = _UNK_0438f398;
  uVar1 = _UNK_0438f390;
  *(undefined8 *)(param_1 + 0x94) = 0x408000003fc00000;
  *(undefined4 *)(param_1 + 0x9c) = 0x40c00000;
  *(undefined4 *)(param_1 + 0xa8) = 0x44070000;
  *(undefined8 *)(param_1 + 0x8c) = uVar2;
  *(undefined8 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = 0x3e19999a;
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

