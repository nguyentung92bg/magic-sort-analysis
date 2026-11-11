/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroductionPopup$$.ctor
void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup___ctor (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroductionPopup$$.ctor
   void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup___ctor
   (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroductionPopup___ctor_1e9cae4(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _UNK_04369f10;
  *(undefined8 *)(param_1 + 0x40) = _UNK_04369f18;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = 0xc10a72b0;
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

