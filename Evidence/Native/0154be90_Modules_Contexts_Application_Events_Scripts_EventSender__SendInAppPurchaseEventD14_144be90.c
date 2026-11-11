/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendInAppPurchaseEventD14
void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEventD14 (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o price, int32_t iapOrigin, int32_t iapReason, bool fromWeb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendInAppPurchaseEventD14
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEventD14
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o
   price, int32_t iapOrigin, int32_t iapReason, bool fromWeb, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEventD14_144be90
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 in_w7;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined4 in_stack_00000000;
  undefined1 in_stack_00000008;
  ulong auStack_a0 [2];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2375b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_05811c00);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057c9128);
    FUN_012d0dc8(PTR_DAT_0577df58);
    FUN_012d0dc8(PTR_DAT_0579f560);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_05774ef8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2375b = 1;
  }
  uStack_64 = 0;
  lVar10 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
    lVar10 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar10 != 0) &&
       ((lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0 &&
        (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar10,*(undefined8 *)PTR_DAT_0581b878), puVar1 = PTR_DAT_057c8a60,
        lVar10 != 0)))) {
      Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetDollarEquivalentByProductId_138c3c4
                (lVar10,param_2,&uStack_64,0);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar4 = PTR_DAT_05811c00;
      puVar3 = PTR_DAT_05800b30;
      puVar2 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_0577df58;
      if (lVar10 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_05774ef8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar3,param_2,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,param_3,0);
        uStack_68 = param_4;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar1,uVar7,0);
        uStack_6c = uStack_64;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057c9128,uVar7,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057d60e0,*(undefined8 *)PTR_DAT_05812618,0);
        uStack_88 = *(undefined8 *)PTR_DAT_057e7b98;
        uStack_80 = 0xffffffffffffffff;
        uStack_78 = in_w7;
        uVar7 = System_Enum__ToString_23a4eac(&uStack_88,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057e93f8,uVar7,0);
        uStack_90 = in_stack_00000000;
        auStack_a0[0] = *(ulong *)PTR_DAT_05812a50;
        auStack_a0[1] = 0xffffffffffffffff;
        uVar7 = System_Enum__ToString_23a4eac(auStack_a0,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_057ab1a0,uVar7,0);
        lVar14 = 0;
        if (plVar6 != (long *)0x0) {
          lVar14 = lVar10;
        }
        uVar7 = *(undefined8 *)PTR_DAT_057caaf0;
        if (plVar6 != (long *)0x0) {
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_0154c240;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,1);
LAB_0154c240:
          uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        }
        else {
          uVar5 = 0;
          lVar14 = lVar10;
        }
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar5);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_88);
        puVar2 = PTR_DAT_057b4910;
        puVar1 = PTR_DAT_0579f560;
        if (lVar14 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar14,uVar7,uVar9,0);
          auStack_a0[0] = CONCAT71(auStack_a0[0]._1_7_,in_stack_00000008) & 0xffffffffffffff01;
          uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,auStack_a0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar10,*(undefined8 *)puVar1,uVar7,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

