/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShopOpenedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendShopOpenedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t storePopUpSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendShopOpenedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendShopOpenedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t storePopUpSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendShopOpenedEvent_144a718
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23756 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0579c098);
    FUN_012d0dc8(PTR_DAT_0579e380);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    bRam0000000005c23756 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_057ab1a0;
  puVar2 = PTR_DAT_0579c098;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar4 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar4,*(undefined8 *)PTR_DAT_0579e380,0);
    uStack_58 = *(undefined8 *)puVar2;
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = param_2;
    uVar5 = System_Enum__ToString_23a4eac(&uStack_58,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar3,uVar5,0);
    uStack_70 = *(undefined8 *)puVar2;
    uStack_68 = 0xffffffffffffffff;
    uStack_60 = param_2;
    uVar5 = System_Enum__ToString_23a4eac(&uStack_70,0);
    uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ShopOpened_2db7a80(uVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

