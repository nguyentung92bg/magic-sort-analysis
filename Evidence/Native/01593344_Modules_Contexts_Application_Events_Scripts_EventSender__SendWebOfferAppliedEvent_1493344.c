/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebOfferAppliedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferAppliedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebOfferAppliedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferAppliedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferAppliedEvent_1493344
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2387b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d93d8);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_058054f0);
    bRam0000000005c2387b = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar10 != 0)) {
    plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar10 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar10,*(undefined8 *)PTR_DAT_058054f0,0), puVar8 = PTR_DAT_05812a50,
       puVar7 = PTR_DAT_057e93f8, puVar6 = PTR_DAT_057e7b98, puVar5 = PTR_DAT_057e3618,
       puVar4 = PTR_DAT_057d93d8, puVar3 = PTR_DAT_057a32a0, puVar2 = PTR_DAT_057a12e0, param_2 != 0
       )) {
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x18),0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar3,*(undefined8 *)(param_2 + 0x20),0);
      uStack_78 = *(undefined8 *)puVar6;
      uStack_68 = *(undefined4 *)(param_2 + 0x28);
      uStack_70 = 0xffffffffffffffff;
      uVar12 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar7,uVar12,0);
      uStack_90 = *(undefined8 *)puVar8;
      uStack_80 = *(undefined4 *)(param_2 + 0x30);
      uStack_88 = 0xffffffffffffffff;
      uVar12 = System_Enum__ToString_23a4eac(&uStack_90,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar5,uVar12,0);
      uStack_a8 = *(undefined8 *)puVar4;
      uStack_98 = *(undefined4 *)(param_2 + 0x2c);
      uStack_a0 = 0xffffffffffffffff;
      uVar12 = System_Enum__ToString_23a4eac(&uStack_a8,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar2,uVar12,0);
      puVar5 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_057caaf0;
      puVar2 = PTR_DAT_057636d0;
      if (plVar11 != (long *)0x0) {
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01593614;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01593614:
        uStack_ac = (*(code *)*puVar13)(plVar11,puVar13[1]);
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_ac);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar3,uVar12,0);
        uStack_c8 = *(undefined8 *)puVar6;
        uStack_b8 = *(undefined4 *)(param_2 + 0x28);
        uVar12 = *(undefined8 *)(param_2 + 0x18);
        uVar1 = *(undefined8 *)(param_2 + 0x20);
        uStack_c0 = 0xffffffffffffffff;
        uVar14 = System_Enum__ToString_23a4eac(&uStack_c8,0);
        uStack_e0 = *(undefined8 *)puVar8;
        uStack_d0 = *(undefined4 *)(param_2 + 0x30);
        uStack_d8 = 0xffffffffffffffff;
        uVar15 = System_Enum__ToString_23a4eac(&uStack_e0,0);
        uStack_f8 = *(undefined8 *)puVar4;
        uStack_e8 = *(undefined4 *)(param_2 + 0x2c);
        uStack_f0 = 0xffffffffffffffff;
        uVar16 = System_Enum__ToString_23a4eac(&uStack_f8,0);
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01593700;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar2,1);
LAB_01593700:
        iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferApplied_2dba8f0
                           (uVar12,uVar1,uVar14,uVar15,uVar16,(long)iVar9,0);
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

