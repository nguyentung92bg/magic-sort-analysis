/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$Awake
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__Awake (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$Awake
   void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__Awake
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__Awake_16eb2a0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c24b1f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05796410);
    bRam0000000005c24b1f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_05796410,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar3,lVar2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x30) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

