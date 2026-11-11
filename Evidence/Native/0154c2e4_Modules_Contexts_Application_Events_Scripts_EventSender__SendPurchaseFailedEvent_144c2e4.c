/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPurchaseFailedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseFailedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o price, System_String_o* reason, int32_t iapReason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPurchaseFailedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseFailedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o
   price, System_String_o* reason, int32_t iapReason, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseFailedEvent_144c2e4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
               undefined4 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_057c8a60;
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  uStack_78 = param_6;
  uStack_70 = param_7;
  if ((bRam0000000005c2375c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05811c00);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_057c1210);
    FUN_012d0dc8(PTR_DAT_0577df58);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_0578db98);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    bRam0000000005c2375c = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar8 = PTR_DAT_05811c00;
  puVar7 = PTR_DAT_05800b30;
  puVar6 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_057d60e0;
  puVar5 = PTR_DAT_0577df58;
  puVar4 = PTR_DAT_057712b8;
  puVar3 = PTR_DAT_05765ce8;
  if (lVar9 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar9,*(undefined8 *)PTR_DAT_057c1210,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar7,param_2,0);
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_90);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar4,uVar10,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar8,param_3,0);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,param_4);
    uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_a8);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar5,uVar10,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar2,param_5,0);
    uVar11 = System_String__IsNullOrEmpty_1ed04ac(param_8,0);
    puVar5 = PTR_DAT_05812a50;
    puVar4 = PTR_DAT_057e3618;
    puVar3 = PTR_DAT_057ab1a0;
    lVar12 = *(long *)PTR_DAT_0578db98;
    if ((uVar11 & 1) == 0) {
      lVar12 = param_8;
    }
    if (lVar12 != 0) {
      if (100 < *(int *)(lVar12 + 0x10)) {
        lVar12 = System_String__Substring_1ed2740(lVar12,0,0x5f,0);
      }
      puVar2 = PTR_DAT_0575f9f0;
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar4,lVar12,0);
      uStack_90 = *(undefined8 *)puVar5;
      uStack_88 = 0xffffffffffffffff;
      uStack_80 = param_9;
      uVar10 = System_Enum__ToString_23a4eac(&uStack_90,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar3,uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_05765ce8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar10 = System_Decimal__ToString_2a93c78(&uStack_78,0);
      uStack_a8 = *(undefined8 *)puVar5;
      uStack_a0 = 0xffffffffffffffff;
      uStack_98 = param_9;
      uVar13 = System_Enum__ToString_23a4eac(&uStack_a8,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PurchaseFailed_2db77c4
                         (param_2,uVar10,param_3,(long)param_4,param_5,lVar12,uVar13,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
      if (*(long *)(lVar1 + 0x28) == lStack_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

