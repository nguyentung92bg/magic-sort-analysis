/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPurchaseButtonSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseButtonSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, int32_t iapOrigin, int32_t iapReason, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPurchaseButtonSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseButtonSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   int32_t iapOrigin, int32_t iapReason, int32_t context, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendPurchaseButtonSelected_149488c
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
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
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
  
  puVar1 = PTR_DAT_0576aae0;
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
  lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_057f83f8);
    lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar16 != 0) &&
       ((lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0 &&
        (plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar16,*(undefined8 *)PTR_DAT_057a1e60),
        puVar1 = PTR_DAT_057c8a60, lVar15 != 0)))) {
      bVar8 = Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__CanShowWebShopOffer_31616d8
                        (lVar15,param_2,0);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar15 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar15,*(undefined8 *)PTR_DAT_05815c38,0);
        puVar7 = PTR_DAT_05800b30;
        puVar6 = PTR_DAT_057e3618;
        puVar5 = PTR_DAT_057db748;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057b4910;
        puVar2 = PTR_DAT_057a12e0;
        puVar1 = PTR_DAT_05774800;
        if (plVar10 != (long *)0x0) {
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01594afc;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01594afc:
          uStack_64 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar4,uVar12,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar7,param_2,0);
          uStack_80 = *(undefined8 *)PTR_DAT_057e7b98;
          uStack_78 = 0xffffffffffffffff;
          uStack_70 = param_3;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar1,uVar12,0);
          uStack_98 = *(undefined8 *)PTR_DAT_05812a50;
          uStack_90 = 0xffffffffffffffff;
          uStack_88 = param_4;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_98,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar6,uVar12,0);
          uStack_b0 = *(undefined8 *)PTR_DAT_057d93d8;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_5;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar2,uVar12,0);
          abStack_b4[0] = bVar8 & 1;
          uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,abStack_b4);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)PTR_DAT_0578ecd8,uVar12,0);
          lVar16 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01594c80;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01594c80:
          iVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          uStack_d0 = *(undefined8 *)PTR_DAT_057e7b98;
          uStack_c8 = 0xffffffffffffffff;
          uStack_c0 = param_3;
          uVar12 = System_Enum__ToString_23a4eac(&uStack_d0,0);
          uStack_e8 = *(undefined8 *)PTR_DAT_05812a50;
          uStack_e0 = 0xffffffffffffffff;
          uStack_d8 = param_4;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_e8,0);
          uStack_100 = *(undefined8 *)PTR_DAT_057d93d8;
          uStack_f8 = 0xffffffffffffffff;
          uStack_f0 = param_5;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_100,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapButtonSelected_2dbb340
                             ((long)iVar9,param_2,uVar12,uVar13,uVar14,bVar8 & 1,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

