/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendLevelEvent
void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendLevelEvent (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, int32_t levelState, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.GrandEventSender$$SendLevelEvent
   void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendLevelEvent
   (Modules_Contexts_Application_Events_Scripts_GrandEventSender_o* __this, int32_t levelState,
   int32_t progress, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_GrandEventSender__SendLevelEvent_1cc89d0
               (undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000005c277c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057623c8);
    FUN_012d0dc8(PTR_DAT_05780110);
    FUN_012d0dc8(PTR_DAT_0577c768);
    FUN_012d0dc8(PTR_DAT_0578d2c8);
    FUN_012d0dc8(PTR_DAT_057b22a0);
    FUN_012d0dc8(PTR_DAT_0581b9c8);
    FUN_012d0dc8(PTR_DAT_057b94d8);
    FUN_012d0dc8(PTR_DAT_057f35e8);
    FUN_012d0dc8(PTR_DAT_05773808);
    bRam0000000005c277c4 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  puVar1 = PTR_DAT_057623c8;
  puVar5 = (undefined8 *)PTR_DAT_057b22a0;
  if (param_2 - 1U < 7) {
    puVar5 = *(undefined8 **)(&UNK_054cc258 + (long)(int)(param_2 - 1U) * 8);
  }
  uVar6 = *puVar5;
  uStack_24 = param_3;
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
  uVar3 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar3,0);
  uVar3 = System_String__Concat_1ec3580(uVar6,uVar3,0);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c(lVar4,uVar3);
  return;
}

