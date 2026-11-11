/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$CloseAndOpenStuckAreYouSurePopUp
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__CloseAndOpenStuckAreYouSurePopUp (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$CloseAndOpenStuckAreYouSurePopUp
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__CloseAndOpenStuckAreYouSurePopUp
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__CloseAndOpenStuckAreYouSurePopUp_160b374
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2442f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b7e78);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_057be8a0);
    bRam0000000005c2442f = 1;
  }
  puVar3 = PTR_DAT_057f0e20;
  puVar1 = PTR_DAT_057b7e78;
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__ClosePopUp_160b460();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057be8a0;
  if (lVar5 != 0) {
    Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar2;
    FUN_012d0d74();
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) + 0x20)
                    + 8))(*(long *)(lVar4 + 0x10),lVar5);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

