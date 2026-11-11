/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebOfferClaimedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferClaimedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebOfferClaimedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferClaimedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopTransactionDataModel_o* transaction,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebOfferClaimedEvent_1493788
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
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
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
  if ((bRam0000000005c2387c & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_0578f998);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2387c = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) {
    plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar11 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar11,*(undefined8 *)PTR_DAT_0578f998,0);
      puVar9 = PTR_DAT_05812a50;
      puVar8 = PTR_DAT_057e93f8;
      puVar7 = PTR_DAT_057e7b98;
      puVar6 = PTR_DAT_057e3618;
      puVar5 = PTR_DAT_057d93d8;
      puVar4 = PTR_DAT_057a32a0;
      puVar3 = PTR_DAT_057a12e0;
      puVar2 = PTR_DAT_0578def0;
      if (param_2 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)PTR_DAT_05800b30,*(undefined8 *)(param_2 + 0x18),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar4,*(undefined8 *)(param_2 + 0x20),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar2,*(undefined8 *)(param_2 + 0x10),0);
        uStack_78 = *(undefined8 *)puVar7;
        uStack_68 = *(undefined4 *)(param_2 + 0x28);
        uStack_70 = 0xffffffffffffffff;
        uVar13 = System_Enum__ToString_23a4eac(&uStack_78,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar8,uVar13,0);
        uStack_90 = *(undefined8 *)puVar9;
        uStack_80 = *(undefined4 *)(param_2 + 0x30);
        uStack_88 = 0xffffffffffffffff;
        uVar13 = System_Enum__ToString_23a4eac(&uStack_90,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar6,uVar13,0);
        uStack_a8 = *(undefined8 *)puVar5;
        uStack_98 = *(undefined4 *)(param_2 + 0x2c);
        uStack_a0 = 0xffffffffffffffff;
        uVar13 = System_Enum__ToString_23a4eac(&uStack_a8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar3,uVar13,0);
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01593a7c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_01593a7c:
          uStack_ac = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_ac);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar3,uVar13,0);
          uStack_c8 = *(undefined8 *)puVar7;
          uStack_b8 = *(undefined4 *)(param_2 + 0x28);
          uVar13 = *(undefined8 *)(param_2 + 0x10);
          uVar1 = *(undefined8 *)(param_2 + 0x18);
          uVar21 = *(undefined8 *)(param_2 + 0x20);
          uStack_c0 = 0xffffffffffffffff;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_c8,0);
          uStack_e0 = *(undefined8 *)puVar9;
          uStack_d0 = *(undefined4 *)(param_2 + 0x30);
          uStack_d8 = 0xffffffffffffffff;
          uVar16 = System_Enum__ToString_23a4eac(&uStack_e0,0);
          uStack_f8 = *(undefined8 *)puVar5;
          uStack_e8 = *(undefined4 *)(param_2 + 0x2c);
          uStack_f0 = 0xffffffffffffffff;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_f8,0);
          lVar18 = *plVar12;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01593b6c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_01593b6c:
          iVar10 = (*(code *)*puVar14)(plVar12,puVar14[1]);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferClaimed_2dbaa18
                             (uVar1,uVar21,uVar13,uVar15,uVar16,uVar17,(long)iVar10,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar11)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

