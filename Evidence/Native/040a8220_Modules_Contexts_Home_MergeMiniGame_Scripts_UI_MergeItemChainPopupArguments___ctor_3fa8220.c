/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopupArguments$$.ctor
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments___ctor (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments_o* __this, bool isProgressPopup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopupArguments$$.ctor
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments___ctor
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments_o* __this, bool
   isProgressPopup, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments___ctor_3fa8220
               (long param_1,byte param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_05762600;
  if ((bRam0000000005c39004 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05762600);
    bRam0000000005c39004 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar1;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10));
  *(byte *)(param_1 + 0x21) = param_2 & 1;
  return;
}

