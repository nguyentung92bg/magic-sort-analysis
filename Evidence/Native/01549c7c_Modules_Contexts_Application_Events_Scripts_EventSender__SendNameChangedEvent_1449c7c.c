/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNameChangedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendNameChangedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* previousName, System_String_o* newName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendNameChangedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendNameChangedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   previousName, System_String_o* newName, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendNameChangedEvent_1449c7c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c2374f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0579d8f0);
    FUN_012d0dc8(PTR_DAT_057cf068);
    FUN_012d0dc8(PTR_DAT_057f75c8);
    FUN_012d0dc8(PTR_DAT_057e5de8);
    FUN_012d0dc8(PTR_DAT_057b8210);
    bRam0000000005c2374f = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar5 = PTR_DAT_057e5de8;
  puVar4 = PTR_DAT_057cf068;
  puVar3 = PTR_DAT_057b8210;
  puVar2 = PTR_DAT_0579d8f0;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar6 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar6,*(undefined8 *)PTR_DAT_057f75c8,0);
    uStack_68 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
    uStack_78 = *(undefined8 *)puVar2;
    uStack_70 = 0xffffffffffffffff;
    uVar7 = System_Enum__ToString_23a4eac(&uStack_78,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar6,*(undefined8 *)puVar5,uVar7,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar6,*(undefined8 *)puVar4,param_2,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar6,*(undefined8 *)puVar3,param_3,0);
    uStack_80 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
    uStack_90 = *(undefined8 *)puVar2;
    uStack_88 = 0xffffffffffffffff;
    uVar7 = System_Enum__ToString_23a4eac(&uStack_90,0);
    uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__NameChanged_2db6d80
                      (param_2,param_3,uVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

