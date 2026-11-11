/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Awake
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Awake (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Awake
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Awake
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Awake_1e96c30
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((bRam0000000005c2815a & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_057f5390);
    FUN_012d0dc8(PTR_DAT_057b7ab0);
    bRam0000000005c2815a = 1;
  }
  if (*(long *)(param_5 + 0x18) != 0) {
    uVar7 = UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x18),0);
    plVar4 = *(long **)(param_5 + 0x48);
    *(undefined4 *)(param_5 + 0x20) = uVar7;
    *(undefined4 *)(param_5 + 0x24) = param_2;
    *(undefined4 *)(param_5 + 0x28) = param_3;
    *(undefined4 *)(param_5 + 0x2c) = param_4;
    if (plVar4 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      *(undefined4 *)(param_5 + 0x30) = uVar7;
      *(undefined4 *)(param_5 + 0x34) = param_2;
      *(undefined4 *)(param_5 + 0x38) = param_3;
      *(undefined4 *)(param_5 + 0x3c) = param_4;
      puVar3 = PTR_DAT_057b8520;
      puVar1 = PTR_DAT_0577d6c0;
      puVar2 = PTR_DAT_0576ee20;
      if (*(long *)(param_5 + 0x40) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_5 + 0x40),0,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar6 != 0) &&
           (System_Action_Int32Enum____ctor_1646b94(lVar6,param_5,*(undefined8 *)PTR_DAT_05809908,0)
           , puVar1 = PTR_DAT_057d4168, puVar2 = PTR_DAT_0578b048, lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                    (lVar5,lVar6,*(undefined8 *)PTR_DAT_057f5390);
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar1 = PTR_DAT_057651c8;
          if (lVar6 != 0) {
            System_Action___ctor_21239bc(lVar6,param_5,*(undefined8 *)PTR_DAT_057651c8,0);
            puVar3 = PTR_DAT_057771c0;
            if (lVar5 != 0) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                        (lVar5,lVar6,0);
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar3);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if ((lVar6 != 0) &&
                 (System_Action___ctor_21239bc(lVar6,param_5,*(undefined8 *)puVar1,0),
                 puVar1 = PTR_DAT_05766250, lVar5 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                          (lVar5,lVar6,0);
                lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar1);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if ((lVar6 != 0) &&
                   (System_Action___ctor_21239bc(lVar6,param_5,*(undefined8 *)PTR_DAT_057b1830,0),
                   puVar1 = PTR_DAT_0581aa60, puVar2 = PTR_DAT_0577f3c8, lVar5 != 0)) {
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                            (lVar5,lVar6,0);
                  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar1);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if ((lVar6 != 0) &&
                     (System_Action_int____ctor_1646aac
                                (lVar6,param_5,*(undefined8 *)PTR_DAT_057e9838,0), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b7ab0 + 0x20) +
                                                    0xc0) + 8) + 8))(lVar5,lVar6);
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

