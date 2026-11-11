/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendInAppPurchaseEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o price, int32_t iapOrigin, int32_t iapReason, int32_t context, System_String_o* webProductId, bool fromWeb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendInAppPurchaseEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   System_String_o* productType, int32_t productRank, System_String_o* currency, System_Decimal_o
   price, int32_t iapOrigin, int32_t iapReason, int32_t context, System_String_o* webProductId, bool
   fromWeb, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendInAppPurchaseEvent_144b6b4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11,byte param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  byte abStack_e4 [4];
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar2 = PTR_DAT_0576aae0;
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000005c2375a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057d93d8);
    FUN_012d0dc8(PTR_DAT_057e7b98);
    FUN_012d0dc8(PTR_DAT_05812a50);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05811c00);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_057712b8);
    FUN_012d0dc8(PTR_DAT_0577df58);
    FUN_012d0dc8(PTR_DAT_0579f560);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e93f8);
    FUN_012d0dc8(PTR_DAT_05789ea8);
    FUN_012d0dc8(PTR_DAT_057c4f88);
    FUN_012d0dc8(PTR_DAT_0578d930);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_0577c0a8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e9310);
    bRam0000000005c2375a = 1;
  }
  lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0)) {
    plVar14 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar19,*(undefined8 *)PTR_DAT_057a1e60);
    lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar19 != 0) &&
       ((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 &&
        (lVar19 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar19,*(undefined8 *)PTR_DAT_057c2940), puVar2 = PTR_DAT_057c8a60,
        lVar19 != 0)))) {
      iVar9 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetJoinStateForAnalyticsEvents_3b2ea7c
                        (lVar19,0);
      iVar10 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                         (lVar19,0);
      iVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                         (lVar19,0);
      lVar19 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar8 = PTR_DAT_05811c00;
      puVar7 = PTR_DAT_05800b30;
      puVar6 = PTR_DAT_057e7b98;
      puVar5 = PTR_DAT_057db748;
      puVar4 = PTR_DAT_057d60e0;
      puVar3 = PTR_DAT_0577df58;
      puVar2 = PTR_DAT_05765ce8;
      if (lVar19 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar19,*(undefined8 *)PTR_DAT_05789ea8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar7,param_2,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar8,param_3,0);
        iStack_8c = param_4;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_8c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar3,uVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)puVar4,param_5,0);
        uStack_88 = param_6;
        uStack_80 = param_7;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_88);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)PTR_DAT_057712b8,uVar15,0);
        uStack_a8 = *(undefined8 *)puVar6;
        uStack_a0 = 0xffffffffffffffff;
        uStack_98 = param_8;
        uVar15 = System_Enum__ToString_23a4eac(&uStack_a8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)PTR_DAT_057e93f8,uVar15,0);
        uStack_c0 = *(undefined8 *)PTR_DAT_05812a50;
        uStack_b0 = param_9;
        uStack_b8 = 0xffffffffffffffff;
        uVar15 = System_Enum__ToString_23a4eac(&uStack_c0,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)PTR_DAT_057ab1a0,uVar15,0);
        uStack_d8 = *(undefined8 *)PTR_DAT_057d93d8;
        uStack_c8 = param_10;
        uStack_d0 = 0xffffffffffffffff;
        uVar15 = System_Enum__ToString_23a4eac(&uStack_d8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar19,*(undefined8 *)PTR_DAT_057a12e0,uVar15,0);
        lVar21 = lVar19;
        if (plVar14 == (long *)0x0) {
          lVar21 = 0;
        }
        uVar15 = *(undefined8 *)PTR_DAT_057caaf0;
        if (plVar14 == (long *)0x0) {
          uVar12 = 0;
          lVar21 = lVar19;
        }
        else {
          lVar20 = *plVar14;
          uVar22 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar22 != 0) {
            piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0154bb2c;
              }
              uVar22 = uVar22 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar22 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1);
LAB_0154bb2c:
          uVar12 = (*(code *)*puVar16)(plVar14,puVar16[1]);
        }
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar12);
        uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_88);
        puVar6 = PTR_DAT_057e9310;
        puVar4 = PTR_DAT_057c4f88;
        puVar3 = PTR_DAT_057b4910;
        puVar2 = PTR_DAT_0577c0a8;
        if (lVar21 != 0) {
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar21,uVar15,uVar17,0)
          ;
          iStack_8c = iVar9;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_8c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar6,uVar15,0);
          iStack_dc = iVar10;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_dc);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar4,uVar15,0);
          iStack_e0 = iVar11;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_e0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)puVar2,uVar15,0);
          abStack_e4[0] = param_12 & 1;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,abStack_e4);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)PTR_DAT_0579f560,uVar15,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar19,*(undefined8 *)PTR_DAT_0578d930,param_11,0);
          if (*(int *)(*(long *)PTR_DAT_05765ce8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar24 = System_Decimal__op_Explicit_2a96218(param_6,param_7,0);
          uStack_a8 = *(undefined8 *)PTR_DAT_057e7b98;
          uStack_a0 = 0xffffffffffffffff;
          uStack_98 = param_8;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_a8,0);
          uStack_c0 = *(undefined8 *)PTR_DAT_05812a50;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = param_9;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_c0,0);
          uStack_d8 = *(undefined8 *)PTR_DAT_057d93d8;
          uStack_d0 = 0xffffffffffffffff;
          uStack_c8 = param_10;
          uVar18 = System_Enum__ToString_23a4eac(&uStack_d8,0);
          puVar2 = PTR_DAT_0575f9f0;
          if (plVar14 == (long *)0x0) {
            lVar21 = 0;
          }
          else {
            lVar21 = *plVar14;
            uVar22 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar16 = (undefined8 *)(lVar21 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                  goto LAB_0154bdc0;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar16 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_057636d0,1,param_5);
LAB_0154bdc0:
            iVar13 = (*(code *)*puVar16)(plVar14,puVar16[1]);
            lVar21 = (long)iVar13;
          }
          uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__InAppPurchase_2db7414
                             (uVar24,param_2,param_3,(long)param_4,param_5,uVar15,uVar17,lVar21,
                              (long)iVar9,(long)iVar10,(long)iVar11,uVar18,param_12 & 1,param_11,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar19)
          ;
          if (*(long *)(lVar1 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

