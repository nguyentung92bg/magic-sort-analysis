/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRefillPurchasedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPurchasedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRefillPurchasedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPurchasedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPurchasedEvent_144a508
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23755 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a7c60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0579d8f0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05778278);
    FUN_012d0dc8(PTR_DAT_057f58e8);
    FUN_012d0dc8(PTR_DAT_057e5de8);
    bRam0000000005c23755 = 1;
  }
  uStack_34 = 0;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057e5de8;
  puVar3 = PTR_DAT_0579d8f0;
  puVar1 = PTR_DAT_0576aae0;
  if (lVar4 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar4,*(undefined8 *)PTR_DAT_057f58e8,0);
    uStack_40 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
    uStack_50 = *(undefined8 *)puVar3;
    uStack_48 = 0xffffffffffffffff;
    uVar5 = System_Enum__ToString_23a4eac(&uStack_50,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar2,uVar5,0);
    if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) &&
        (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar6,*(undefined8 *)PTR_DAT_057a7c60), lVar6 != 0)) &&
       (lVar6 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                          (lVar6,0), puVar2 = PTR_DAT_05778278, puVar1 = PTR_DAT_0575f9f0,
       lVar6 != 0)) {
      uStack_54 = *(undefined4 *)(lVar6 + 0x10);
      uStack_34 = uStack_54;
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar4,*(undefined8 *)puVar2,uVar5,0);
      uStack_60 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
      uStack_70 = *(undefined8 *)puVar3;
      uStack_68 = 0xffffffffffffffff;
      uVar5 = System_Enum__ToString_23a4eac(&uStack_70,0);
      uVar7 = System_Int32__ToString_26c9768(&uStack_34,0);
      uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__RefillPurchased_2db7c30
                        (uVar7,uVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

