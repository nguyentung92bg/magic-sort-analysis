/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$Initialize
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Initialize (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.Rewarded2xButton$$Initialize
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Initialize
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_Rewarded2xButton__Initialize_16f0bc4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c24b54 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a4180);
    FUN_012d0dc8(PTR_DAT_057607c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24b54 = 1;
  }
  puVar3 = PTR_DAT_0578b048;
  puVar1 = PTR_DAT_057607c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057a4180,0),
     puVar2 = PTR_DAT_0576aae0, lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar4,lVar5,0);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_057a2938);
      *(undefined8 *)(param_1 + 0x48) = uVar6;
      FUN_012d0d74();
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
        uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_057bc6b0);
        *(undefined8 *)(param_1 + 0x50) = uVar6;
        FUN_012d0d74();
        if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
           (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
          uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar4,*(undefined8 *)PTR_DAT_057a1e60);
          *(undefined8 *)(param_1 + 0x58) = uVar6;
          FUN_012d0d74();
          if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
            uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar4,*(undefined8 *)PTR_DAT_05808828);
            *(undefined8 *)(param_1 + 0x60) = uVar6;
            FUN_012d0d74((undefined8 *)(param_1 + 0x60),uVar6);
            *(undefined1 *)(param_1 + 0x38) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

