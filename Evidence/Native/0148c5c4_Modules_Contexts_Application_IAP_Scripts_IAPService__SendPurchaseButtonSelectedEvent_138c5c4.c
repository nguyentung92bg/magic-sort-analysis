/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$SendPurchaseButtonSelectedEvent
void Modules_Contexts_Application_IAP_Scripts_IAPService__SendPurchaseButtonSelectedEvent (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId, int32_t iapOrigin, int32_t iapReason, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$SendPurchaseButtonSelectedEvent
   void Modules_Contexts_Application_IAP_Scripts_IAPService__SendPurchaseButtonSelectedEvent
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId,
   int32_t iapOrigin, int32_t iapReason, int32_t context, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPService__SendPurchaseButtonSelectedEvent_138c5c4
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  byte abStack_b4 [4];
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
  
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  puVar1 = PTR_DAT_0576aae0;
  lVar10 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c23883 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d93d8);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_05774800);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_0578ecd8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05815c38);
    bRam0000000005c23883 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057f83f8);
    lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar17 != 0) &&
       ((lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0 &&
        (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar17,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar16 != 0)))) {
      bVar8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__CanShowWebShopOffer_31616d8
                        (lVar16,param_2,0);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar16 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar16,*(undefined8 *)PTR_DAT_05815c38,0);
        puVar7 = PTR_DAT_05800b30;
        puVar6 = PTR_DAT_057e3618;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057b4910;
        puVar2 = PTR_DAT_057a12e0;
        puVar1 = PTR_DAT_05774800;
        if (plVar11 != (long *)0x0) {
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01594afc;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01594afc:
          uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar4,uVar13,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar7,param_2,0);
          uStack_80 = *(undefined8 *)PTR_DAT_057e7b98;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = param_3;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar1,uVar13,0);
          uStack_98 = *(undefined8 *)PTR_DAT_05812a50;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = param_4;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_98,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar6,uVar13,0);
          uStack_b0 = *(undefined8 *)PTR_DAT_057d93d8;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_5;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar2,uVar13,0);
          abStack_b4[0] = bVar8 & 1;
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,abStack_b4);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)PTR_DAT_0578ecd8,uVar13,0);
          lVar17 = *plVar11;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01594c80;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01594c80:
          iVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          uStack_d0 = *(undefined8 *)PTR_DAT_057e7b98;
          uStack_c8 = 0xffffffffffffffff;
          uStack_c0 = param_3;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_d0,0);
          uStack_e8 = *(undefined8 *)PTR_DAT_05812a50;
          uStack_e0 = 0xffffffffffffffff;
          uStack_d8 = param_4;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_e8,0);
          uStack_100 = *(undefined8 *)PTR_DAT_057d93d8;
          uStack_f8 = 0xffffffffffffffff;
          uStack_f0 = param_5;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_100,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapButtonSelected_2dbb340
                             ((long)iVar9,param_2,uVar13,uVar14,uVar15,bVar8 & 1,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(lVar10,lVar16);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

