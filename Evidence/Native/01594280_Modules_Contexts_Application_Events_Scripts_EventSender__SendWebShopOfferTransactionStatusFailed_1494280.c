/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferTransactionStatusFailed
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatusFailed (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, System_String_o* transactionStatus, int32_t statusCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferTransactionStatusFailed
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatusFailed
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   System_String_o* transactionStatus, int32_t statusCode, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatusFailed_1494280
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_057c8a60;
  uStack_64 = param_4;
  if ((bRam0000000005c2387f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d93d8);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057aa8d8);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_057780a0);
    FUN_012d0dc8(PTR_DAT_057d68c8);
    bRam0000000005c2387f = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057d68c8;
  if (lVar8 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar8,*(undefined8 *)PTR_DAT_057780a0,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar1,param_3,0);
    puVar7 = PTR_DAT_05812a50;
    puVar6 = PTR_DAT_057e93f8;
    puVar5 = PTR_DAT_057e7b98;
    puVar4 = PTR_DAT_057e3618;
    puVar3 = PTR_DAT_057d93d8;
    puVar2 = PTR_DAT_057aa8d8;
    puVar1 = PTR_DAT_057a12e0;
    if (param_2 != 0) {
      uStack_80 = *(undefined8 *)PTR_DAT_057e7b98;
      uStack_70 = *(undefined4 *)(param_2 + 0x28);
      uStack_78 = 0xffffffffffffffff;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_80,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar6,uVar9,0);
      uStack_98 = *(undefined8 *)puVar7;
      uStack_88 = *(undefined4 *)(param_2 + 0x30);
      uStack_90 = 0xffffffffffffffff;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_98,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar4,uVar9,0);
      uStack_b0 = *(undefined8 *)puVar3;
      uStack_a0 = *(undefined4 *)(param_2 + 0x2c);
      uStack_a8 = 0xffffffffffffffff;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_b0,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar1,uVar9,0);
      uVar9 = System_Int32__ToString_26c9768(&uStack_64,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar2,uVar9,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x18),0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)PTR_DAT_057a32a0,*(undefined8 *)(param_2 + 0x20),0);
      uStack_c8 = *(undefined8 *)puVar5;
      uStack_b8 = *(undefined4 *)(param_2 + 0x28);
      uStack_c0 = 0xffffffffffffffff;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_c8,0);
      uStack_e0 = *(undefined8 *)puVar7;
      uStack_d0 = *(undefined4 *)(param_2 + 0x30);
      uStack_d8 = 0xffffffffffffffff;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_e0,0);
      uStack_f8 = *(undefined8 *)puVar3;
      uStack_e8 = *(undefined4 *)(param_2 + 0x2c);
      uStack_f0 = 0xffffffffffffffff;
      uVar11 = System_Enum__ToString_23a4eac(&uStack_f8,0);
      uVar12 = System_Int32__ToString_26c9768(&uStack_64,0);
      uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferStatusFailed_2dbac94
                        (param_3,uVar9,uVar10,uVar11,uVar12,*(undefined8 *)(param_2 + 0x18),
                         *(undefined8 *)(param_2 + 0x20),0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

