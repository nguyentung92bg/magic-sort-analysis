/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$OnDestroy
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__OnDestroy (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$OnDestroy
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__OnDestroy
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__OnDestroy_160d5a0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c24448 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c4540);
    FUN_012d0dc8(PTR_DAT_05817aa8);
    FUN_012d0dc8(PTR_DAT_057e0210);
    FUN_012d0dc8(PTR_DAT_0576b028);
    FUN_012d0dc8(PTR_DAT_0581aa60);
    FUN_012d0dc8(PTR_DAT_057983e0);
    FUN_012d0dc8(PTR_DAT_057d4020);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0578d5f8);
    bRam0000000005c24448 = 1;
  }
  puVar3 = PTR_DAT_0578b048;
  puVar1 = PTR_DAT_0576b028;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_05817aa8;
  if (lVar5 != 0) {
    System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05817aa8,0);
    puVar1 = PTR_DAT_057e0210;
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar5 != 0) &&
         (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0),
         puVar1 = PTR_DAT_057d4020, lVar4 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0),
           puVar1 = PTR_DAT_057983e0, lVar4 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar5 != 0) &&
             (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar2,0),
             puVar1 = PTR_DAT_0581aa60, puVar2 = PTR_DAT_0577f3c8, lVar4 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar4,lVar5,0);
            lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar5 != 0) &&
               (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057c4540,0),
               lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0578d5f8 + 0x20) + 0xc0) +
                                    0x10) + 8))(lVar4,lVar5);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

