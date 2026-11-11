/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$OnDestroy
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__OnDestroy (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.LevelTextAnimationHandler$$OnDestroy
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__OnDestroy
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_LevelTextAnimationHandler__OnDestroy_16f96bc
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c24b97 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0576d428);
    FUN_012d0dc8(PTR_DAT_05808b98);
    FUN_012d0dc8(PTR_DAT_05808d38);
    FUN_012d0dc8(PTR_DAT_057a8738);
    FUN_012d0dc8(PTR_DAT_057a6c18);
    FUN_012d0dc8(PTR_DAT_057be240);
    FUN_012d0dc8(PTR_DAT_05777cb8);
    FUN_012d0dc8(PTR_DAT_057e40e0);
    FUN_012d0dc8(PTR_DAT_057c0e48);
    FUN_012d0dc8(PTR_DAT_05792c38);
    FUN_012d0dc8(PTR_DAT_0581aa60);
    FUN_012d0dc8(PTR_DAT_057b8c98);
    FUN_012d0dc8(PTR_DAT_057e2760);
    FUN_012d0dc8(PTR_DAT_057952f0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0578d5f8);
    bRam0000000005c24b97 = 1;
  }
  puVar3 = PTR_DAT_057b8c98;
  puVar2 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057a6c18,0),
     puVar1 = PTR_DAT_057e2760, lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057be240,0),
       puVar1 = PTR_DAT_057c0e48, lVar4 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar5 != 0) &&
         (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05808b98,0),
         puVar1 = PTR_DAT_05792c38, lVar4 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05808d38,0),
           puVar1 = PTR_DAT_057952f0, lVar4 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar5 != 0) &&
             (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05777cb8,0),
             puVar1 = PTR_DAT_057e40e0, lVar4 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar4,lVar5,0);
            lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar5 != 0) &&
               (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_0576d428,0),
               puVar2 = PTR_DAT_0581aa60, puVar1 = PTR_DAT_0577f3c8, lVar4 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                        (lVar4,lVar5,0);
              lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar2);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if ((lVar5 != 0) &&
                 (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057a8738,0)
                 , lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0578d5f8 + 0x20) + 0xc0)
                                      + 0x10) + 8))(lVar4,lVar5);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

