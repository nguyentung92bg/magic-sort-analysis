/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$OnDestroy
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__OnDestroy (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$OnDestroy
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__OnDestroy
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__OnDestroy_1e97624
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c28160 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d6c0);
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057b1830);
    FUN_012d0dc8(PTR_DAT_057651c8);
    FUN_012d0dc8(PTR_DAT_057e9838);
    FUN_012d0dc8(PTR_DAT_05809908);
    FUN_012d0dc8(PTR_DAT_057771c0);
    FUN_012d0dc8(PTR_DAT_057d4168);
    FUN_012d0dc8(PTR_DAT_05766250);
    FUN_012d0dc8(PTR_DAT_0576ee20);
    FUN_012d0dc8(PTR_DAT_0581aa60);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0578d5f8);
    FUN_012d0dc8(PTR_DAT_057b9b88);
    bRam0000000005c28160 = 1;
  }
  puVar2 = PTR_DAT_0577d6c0;
  puVar1 = PTR_DAT_0576ee20;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (System_Action_Int32Enum____ctor_1646b94(lVar5,param_1,*(undefined8 *)PTR_DAT_05809908,0),
     puVar1 = PTR_DAT_057d4168, puVar3 = PTR_DAT_0578b048, lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Unsubscribe_333d1cc
              (lVar4,lVar5,*(undefined8 *)PTR_DAT_057b9b88);
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar1 = PTR_DAT_057651c8;
    if (lVar5 != 0) {
      System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057651c8,0);
      puVar2 = PTR_DAT_057771c0;
      if (lVar4 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar5 != 0) &&
           (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar1,0),
           puVar1 = PTR_DAT_05766250, lVar4 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar5 != 0) &&
             (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057b1830,0),
             puVar1 = PTR_DAT_0581aa60, puVar3 = PTR_DAT_0577f3c8, lVar4 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar4,lVar5,0);
            lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar5 != 0) &&
               (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057e9838,0),
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

