/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFirebaseConfigNotFetchedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFirebaseConfigNotFetchedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendFirebaseConfigNotFetchedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFirebaseConfigNotFetchedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFirebaseConfigNotFetchedEvent_1449048
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23747 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0579d8f0);
    FUN_012d0dc8(PTR_DAT_057a2b08);
    bRam0000000005c23747 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_0579d8f0;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar3 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar3,*(undefined8 *)PTR_DAT_057a2b08,0);
    uStack_38 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
    uStack_48 = *(undefined8 *)puVar2;
    uStack_40 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString_23a4eac(&uStack_48,0);
    uVar4 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__FirebaseConfigNotFetched_2daa798
                      (uVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar4,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_1,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

