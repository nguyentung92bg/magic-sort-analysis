/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendClientFirstTouchEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendClientFirstTouchEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendClientFirstTouchEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendClientFirstTouchEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendClientFirstTouchEvent_1448a04
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23743 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057f3b80);
    FUN_012d0dc8(PTR_DAT_05763b70);
    bRam0000000005c23743 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar4 = PTR_DAT_05814758;
  puVar1 = PTR_DAT_0580b9d0;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_057f3b80,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar3 = PTR_DAT_057d6138;
    puVar2 = PTR_DAT_05763b70;
    puVar1 = PTR_DAT_0575f9f0;
    uVar6 = System_DateTime__get_UtcNow_2100638(0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    auStack_50 = System_DateTimeOffset__op_Implicit_2106a94(uVar6,0);
    uVar6 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(auStack_50,0);
    uStack_38 = uVar6;
    uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_38);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar2,uVar7,0);
    uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ClientFirstTouch_2db64a8(uVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

