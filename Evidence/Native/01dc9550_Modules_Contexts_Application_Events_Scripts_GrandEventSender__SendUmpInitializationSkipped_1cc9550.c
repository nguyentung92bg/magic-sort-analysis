/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendUmpInitializationSkipped
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendUmpInitializationSkipped (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, System_String_o* extraMessage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendUmpInitializationSkipped
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendUmpInitializationSkipped
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, System_String_o*
   extraMessage, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendUmpInitializationSkipped_1cc9550
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057d4800;
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c277d6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057c5d88);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057d4800);
    bRam0000000005c277d6 = 1;
  }
  uVar3 = System_String__Concat_1ec3580(*(undefined8 *)puVar2,param_2,0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057c5d88;
  puVar1 = PTR_DAT_057b8520;
  if (lVar4 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c(lVar4,uVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x20);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),lVar4,0,*(undefined8 *)(lVar5 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

