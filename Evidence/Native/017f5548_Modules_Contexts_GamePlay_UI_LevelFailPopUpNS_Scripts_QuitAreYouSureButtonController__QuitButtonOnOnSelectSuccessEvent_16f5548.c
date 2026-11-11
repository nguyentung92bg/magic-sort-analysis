/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.QuitAreYouSureButtonController$$QuitButtonOnOnSelectSuccessEvent
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__QuitButtonOnOnSelectSuccessEvent (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.QuitAreYouSureButtonController$$QuitButtonOnOnSelectSuccessEvent
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__QuitButtonOnOnSelectSuccessEvent
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_QuitAreYouSureButtonController__QuitButtonOnOnSelectSuccessEvent_16f5548
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c24b65 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    bRam0000000005c24b65 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b3270 + 0x20) + 0xc0) +
                                  0x38) + 8))(*(long *)(param_1 + 0x18),1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = System_ThrowHelper__GetResourceName_26a4a88(0x2e,0);
    uVar2 = System_Environment__GetResourceString_23dfe54(uVar2,0);
    thunk_FUN_0136d790(PTR_DAT_057ccb70);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    System_InvalidOperationException___ctor_26cc060(uVar3,uVar2,0);
    uVar2 = thunk_FUN_0136d790(PTR_DAT_0579d8b8);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

