/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendTutorialSplitEvent
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendTutorialSplitEvent (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendTutorialSplitEvent
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendTutorialSplitEvent
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, int32_t i, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendTutorialSplitEvent_1cc8b20
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_057c8a60;
  puVar1 = PTR_DAT_057b56f8;
  if ((bRam0000000005c277c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b56f8);
    bRam0000000005c277c5 = 1;
  }
  uStack_34 = param_2;
  uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_34);
  uVar4 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar4,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c(lVar5,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

