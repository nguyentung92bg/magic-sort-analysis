/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$Awake
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__Awake (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$Awake
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__Awake
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__Awake_160d244
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24447 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057f6990);
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c4540);
    FUN_012d0dc8(PTR_DAT_05817aa8);
    FUN_012d0dc8(PTR_DAT_057e0210);
    FUN_012d0dc8(PTR_DAT_0576b028);
    FUN_012d0dc8(PTR_DAT_0581aa60);
    FUN_012d0dc8(PTR_DAT_057983e0);
    FUN_012d0dc8(PTR_DAT_057d4020);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b7ab0);
    bRam0000000005c24447 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057f6990);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    FUN_012d0d74();
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_0580d478);
      *(undefined8 *)(param_1 + 0x50) = uVar6;
      FUN_012d0d74();
      puVar4 = PTR_DAT_057b8520;
      puVar3 = PTR_DAT_0578b048;
      puVar2 = PTR_DAT_0576b028;
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
        uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_057a0c88);
        *(undefined8 *)(param_1 + 0x58) = uVar6;
        FUN_012d0d74();
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        puVar1 = PTR_DAT_05817aa8;
        if (lVar7 != 0) {
          System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_05817aa8,0);
          puVar2 = PTR_DAT_057e0210;
          if (lVar5 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar7,0);
            lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar2);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar7 != 0) &&
               (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar1,0),
               puVar2 = PTR_DAT_057d4020, lVar5 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                        (lVar5,lVar7,0);
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar2);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if ((lVar7 != 0) &&
                 (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar1,0),
                 puVar2 = PTR_DAT_057983e0, lVar5 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                          (lVar5,lVar7,0);
                lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar2);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if ((lVar7 != 0) &&
                   (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar1,0),
                   puVar2 = PTR_DAT_0581aa60, puVar1 = PTR_DAT_0577f3c8, lVar5 != 0)) {
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                            (lVar5,lVar7,0);
                  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar2);
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if ((lVar7 != 0) &&
                     (System_Action_int____ctor_1646aac
                                (lVar7,param_1,*(undefined8 *)PTR_DAT_057c4540,0), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b7ab0 + 0x20) +
                                                    0xc0) + 8) + 8))(lVar5,lVar7);
                    return;
                  }
                }
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

