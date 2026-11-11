/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup___ctor (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.UI.MiniGameOfferPopup$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_MiniGame_Scripts_UI_MiniGameOfferPopup___ctor_20bc148(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_057b86f0;
  if ((bRam0000000005c2959f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b86f0);
    bRam0000000005c2959f = 1;
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)puVar1;
  FUN_012d0d74();
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

