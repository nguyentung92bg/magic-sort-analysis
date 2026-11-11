/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendGrandABConfigSnapshotEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendGrandABConfigSnapshotEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_GrandbaseNS_Scripts_GrandABService_o* grandABService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendGrandABConfigSnapshotEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendGrandABConfigSnapshotEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_GrandbaseNS_Scripts_GrandABService_o* grandABService, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendGrandABConfigSnapshotEvent_1448da8
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c23745 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_05799158);
    bRam0000000005c23745 = 1;
  }
  puVar2 = PTR_DAT_05814758;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = System_DateTime__get_UtcNow_2100638(0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  auStack_40 = System_DateTimeOffset__op_Implicit_2106a94(uVar3,0);
  uVar3 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(auStack_40,0);
  puVar1 = PTR_DAT_0575f9f0;
  if (param_2 != 0) {
    uStack_48 = *(undefined4 *)(param_2 + 0x28);
    uStack_58 = *(undefined8 *)PTR_DAT_05799158;
    uStack_50 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString_23a4eac(&uStack_58,0);
    uVar5 = Modules_Contexts_Application_GrandbaseNS_Scripts_GrandABService__ToJson_1cbac24
                      (param_2,0);
    uVar3 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__GrandABConfigSnapshot_2dbed8c
                      (uVar4,uVar5,uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

