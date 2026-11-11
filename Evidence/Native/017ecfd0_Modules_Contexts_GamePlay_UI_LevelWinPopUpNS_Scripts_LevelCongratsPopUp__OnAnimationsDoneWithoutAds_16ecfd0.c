/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$OnAnimationsDoneWithoutAds
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__OnAnimationsDoneWithoutAds (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$OnAnimationsDoneWithoutAds
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__OnAnimationsDoneWithoutAds
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__OnAnimationsDoneWithoutAds_16ecfd0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c24b33 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580fa90);
    FUN_012d0dc8(PTR_DAT_0576f7d8);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_05782ef8);
    bRam0000000005c24b33 = 1;
  }
  puVar1 = PTR_DAT_0576f7d8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0580fa90;
  puVar2 = PTR_DAT_057f0e20;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_05782ef8;
    if (lVar4 != 0) {
      Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar2;
      FUN_012d0d74();
      if (*(long *)(param_1 + 0x68) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28);
        FUN_012d0d74();
        lVar5 = *(long *)(param_1 + 0x68);
        if (lVar5 != 0) {
          *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(lVar5 + 0x30);
          *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar5 + 0x34);
          if (lVar3 != 0) {
            if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) +
                                    0x20) + 8))(*(long *)(lVar3 + 0x10),lVar4);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

