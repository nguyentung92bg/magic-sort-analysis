/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetGameState
int32_t Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetGameState
   int32_t Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

undefined4 Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_0576c200;
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23778 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23778 = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar5 = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[3];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar6,uVar5,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    uVar5 = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[2];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Equality_407f288(uVar6,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar6 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      uVar5 = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[4];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = UnityEngine_Object__op_Equality_407f288(uVar6,uVar5,0);
      uVar4 = 3;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}

