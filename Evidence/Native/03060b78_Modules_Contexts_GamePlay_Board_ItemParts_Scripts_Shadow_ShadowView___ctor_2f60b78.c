/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.Shadow.ShadowView$$.ctor
void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView___ctor (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.Shadow.ShadowView$$.ctor
   void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView___ctor
   (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowView___ctor_2f60b78(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  uVar4 = _UNK_04397ce8;
  uVar3 = _UNK_04397ce0;
  uVar2 = _UNK_0438e618;
  uVar1 = _UNK_0438e610;
  auVar6 = NEON_fmov(0x3f800000,4);
  *(long *)(param_1 + 0x30) = auVar6._8_8_;
  *(long *)(param_1 + 0x28) = auVar6._0_8_;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  puVar5 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

