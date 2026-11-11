/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferTransactionStatus
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatus (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, System_String_o* transactionStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopOfferTransactionStatus
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatus
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   System_String_o* transactionStatus, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferTransactionStatus_1493f8c
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_057c8a60;
  if ((bRam0000000005c2387e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d93d8);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_057fcd88);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_057d68c8);
    bRam0000000005c2387e = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057d68c8;
  if (lVar9 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar9,*(undefined8 *)PTR_DAT_057fcd88,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar2,param_3,0);
    puVar8 = PTR_DAT_05812a50;
    puVar7 = PTR_DAT_057e93f8;
    puVar6 = PTR_DAT_057e7b98;
    puVar5 = PTR_DAT_057e3618;
    puVar4 = PTR_DAT_057d93d8;
    puVar3 = PTR_DAT_057a32a0;
    puVar2 = PTR_DAT_057a12e0;
    if (param_2 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x18),0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar3,*(undefined8 *)(param_2 + 0x20),0);
      uStack_78 = *(undefined8 *)puVar6;
      uStack_68 = *(undefined4 *)(param_2 + 0x28);
      uStack_70 = 0xffffffffffffffff;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar7,uVar10,0);
      uStack_90 = *(undefined8 *)puVar8;
      uStack_80 = *(undefined4 *)(param_2 + 0x30);
      uStack_88 = 0xffffffffffffffff;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_90,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,uVar10,0);
      uStack_a8 = *(undefined8 *)puVar4;
      uStack_98 = *(undefined4 *)(param_2 + 0x2c);
      uStack_a0 = 0xffffffffffffffff;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_a8,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,uVar10,0);
      uStack_b0 = *(undefined4 *)(param_2 + 0x28);
      uStack_c0 = *(undefined8 *)puVar6;
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      uStack_b8 = 0xffffffffffffffff;
      uVar11 = System_Enum__ToString_23a4eac(&uStack_c0,0);
      uStack_d8 = *(undefined8 *)puVar8;
      uStack_c8 = *(undefined4 *)(param_2 + 0x30);
      uStack_d0 = 0xffffffffffffffff;
      uVar12 = System_Enum__ToString_23a4eac(&uStack_d8,0);
      uStack_f0 = *(undefined8 *)puVar4;
      uStack_e0 = *(undefined4 *)(param_2 + 0x2c);
      uStack_e8 = 0xffffffffffffffff;
      uVar13 = System_Enum__ToString_23a4eac(&uStack_f0,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferStatus_2dbab60
                         (param_3,uVar10,uVar1,uVar11,uVar12,uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

