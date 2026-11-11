/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPHandler$$SendPurchaseFailed
void Modules_Contexts_Application_IAP_Scripts_IAPHandler__SendPurchaseFailed (Modules_Contexts_Application_IAP_Scripts_IAPHandler_o* __this, System_String_o* productId, int32_t iapReason, Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* purchaseResult, int32_t iapOrigin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPHandler$$SendPurchaseFailed
   void Modules_Contexts_Application_IAP_Scripts_IAPHandler__SendPurchaseFailed
   (Modules_Contexts_Application_IAP_Scripts_IAPHandler_o* __this, System_String_o* productId,
   int32_t iapReason, Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* purchaseResult,
   int32_t iapOrigin, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPHandler__SendPurchaseFailed_1386bc8
               (undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2305e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_057b7a50);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057b7100);
    bRam0000000005c2305e = 1;
  }
  lStack_70 = 0;
  lStack_68 = 0;
  lVar9 = **(long **)(*(long *)puVar3 + 0xb8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_0581b878);
    lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
    if ((lVar10 != 0) &&
       ((lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0 &&
        (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar10,*(undefined8 *)PTR_DAT_057b7a50), lVar9 != 0)))) {
      uVar4 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                        (lVar9,param_2,&lStack_68);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (lVar10 != 0) {
        Modules_Contexts_Home_Store_Scripts_StoreModelService__TryGetSpecialStoreBundle_2461ca0
                  (lVar10,param_2,&lStack_70,0);
        if (lStack_70 == 0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = *(undefined4 *)(lStack_70 + 0x24);
        }
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        if (lStack_68 != 0) {
          uStack_78 = *(undefined4 *)(lStack_68 + 0x18);
          lVar9 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
          uStack_88 = *(undefined8 *)PTR_DAT_057b7100;
          uStack_80 = 0xffffffffffffffff;
          uVar5 = System_Enum__ToString_23a4eac(&uStack_88,0);
          if ((((lStack_68 != 0) && (plVar6 = *(long **)(lStack_68 + 0x38), plVar6 != (long *)0x0))
              && (uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)),
                 lStack_68 != 0)) && (param_4 != 0)) {
            uVar1 = *(undefined8 *)(lStack_68 + 0x40);
            uVar2 = *(undefined8 *)(lStack_68 + 0x48);
            uVar8 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__GetFailReason_1386ea8
                              (param_4);
            if (lVar9 != 0) {
              Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseFailedEvent_144c2e4
                        (lVar9,param_2,uVar5,uVar11,uVar7,uVar1,uVar2,uVar8,param_3,0);
              if (param_3 == 0xd) {
                if (cRam0000000005c230a8 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ece38);
                    /* try { // try from 01486dd0 to 01586e1f has its CatchHandler @ 01486dd0
                       catch() { ... } // from try @ 01486dd0 with catch @ 01486dd0
                       catch() { ... } // from try @ 01486e98 with catch @ 01486dd0
                       catch() { ... } // from try @ 01486f84 with catch @ 01486dd0 */
                  cRam0000000005c230a8 = '\x01';
                }
                lVar9 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
                uVar5 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__GetFailReason_1386ea8
                                  (param_4);
                if ((lStack_68 == 0) || (lVar9 == 0)) goto LAB_01486e34;
                Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreePurchaseFailedEvent_1470fb8
                          (lVar9,uVar5,*(undefined8 *)(lStack_68 + 0x10),param_5,0);
              }
                    /* try { // try from 01486e20 to 01586e2f has its CatchHandler @ 01486fd8 */
              return;
            }
          }
        }
      }
    }
  }
LAB_01486e34:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

