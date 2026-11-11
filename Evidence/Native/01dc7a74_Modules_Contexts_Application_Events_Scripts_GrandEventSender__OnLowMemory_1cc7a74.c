/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$OnLowMemory
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnLowMemory (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$OnLowMemory
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnLowMemory
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__OnLowMemory_1cc7a74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (5 < *(int *)(param_1 + 0x38)) {
    return;
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c277c9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057c5a40);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05786a98);
    bRam0000000005c277c9 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057c5a40;
  puVar1 = PTR_DAT_057b8520;
  if (lVar3 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar3,*(undefined8 *)PTR_DAT_05786a98);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

