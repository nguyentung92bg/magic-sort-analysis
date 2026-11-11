/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdReviewCreativeIdEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdReviewCreativeIdEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo, System_String_o* adReviewCreativeId, int32_t adRequestSource, int32_t providerType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdReviewCreativeIdEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdReviewCreativeIdEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo,
   System_String_o* adReviewCreativeId, int32_t adRequestSource, int32_t providerType, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdReviewCreativeIdEvent_145663c
               (undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23781 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05786ff8);
    FUN_012d0dc8(PTR_DAT_057bbb60);
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05788d98);
    FUN_012d0dc8(PTR_DAT_057df550);
    FUN_012d0dc8(PTR_DAT_0580e5d8);
    FUN_012d0dc8(PTR_DAT_057a8e10);
    FUN_012d0dc8(PTR_DAT_0575ecb0);
    FUN_012d0dc8(PTR_DAT_05774d00);
    FUN_012d0dc8(PTR_DAT_057c52c0);
    FUN_012d0dc8(PTR_DAT_05772e88);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_05759da8);
    FUN_012d0dc8(PTR_DAT_0577ffd0);
    FUN_012d0dc8(PTR_DAT_0578d080);
    FUN_012d0dc8(PTR_DAT_057bfce0);
    FUN_012d0dc8(PTR_DAT_057db378);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c23781 = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
    plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar11 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar11,*(undefined8 *)PTR_DAT_05788d98,0), puVar7 = PTR_DAT_057f16f8,
       puVar5 = PTR_DAT_057dbe68, puVar8 = PTR_DAT_057db748, puVar2 = PTR_DAT_057db378,
       puVar4 = PTR_DAT_05774d00, puVar3 = PTR_DAT_05774390, puVar1 = PTR_DAT_0575ecb0,
       plVar12 != (long *)0x0)) {
      lVar17 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0x19) * 0x10 + 0x138);
            goto LAB_015568d0;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,0x19);
LAB_015568d0:
      puVar6 = PTR_DAT_057c1328;
      uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar9);
      uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar8,&uStack_a0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar7,uVar14,0);
      uStack_88 = *(undefined8 *)PTR_DAT_057bbb60;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_4;
      uVar14 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar5,uVar14,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar2,param_3,0);
      puVar13 = (undefined8 *)(param_2 + 0x10);
      if (param_2 == 0) {
        puVar13 = (undefined8 *)puVar3;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar4,*puVar13,0);
      puVar8 = PTR_DAT_05812618;
      puVar2 = PTR_DAT_057d60e0;
      puVar4 = PTR_DAT_0577ffd0;
      uVar14 = *(undefined8 *)puVar1;
      if (param_2 == 0) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = *(undefined8 *)(param_2 + 0x40);
      }
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_88);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar11,uVar14,uVar15,0);
      puVar5 = PTR_DAT_057bfce0;
      puVar1 = PTR_DAT_05759da8;
      if (param_2 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x18);
      }
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)PTR_DAT_057c52c0,lVar26,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar8,0);
      if (param_2 == 0) {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar4,0,0);
        lVar17 = 0;
      }
      else {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar11,*(undefined8 *)puVar4,*(undefined8 *)(param_2 + 0x20),0);
        lVar17 = *(long *)(param_2 + 0x30);
      }
      puVar4 = PTR_DAT_0578d080;
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar1,lVar26,0);
      puVar1 = PTR_DAT_057df550;
      if (param_2 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x38);
      }
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar5,lVar26,0);
      puVar2 = PTR_DAT_05772e88;
      if (param_2 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x60);
      }
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar4,lVar26,0);
      puVar4 = PTR_DAT_0580e5d8;
      if (param_2 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x28);
      }
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar1,lVar26,0);
      puVar7 = PTR_DAT_057d6138;
      puVar5 = PTR_DAT_057a8e10;
      puVar1 = PTR_DAT_05786ff8;
      if (param_2 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x48);
      }
      lVar26 = *(long *)puVar3;
      if (lVar17 != 0) {
        lVar26 = lVar17;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar2,lVar26,0);
      uVar14 = *(undefined8 *)puVar4;
      if (param_2 == 0) {
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(undefined8 *)(param_2 + 0x58);
      }
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar11,uVar14,uVar15,0);
      uStack_88 = *(undefined8 *)puVar1;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_5;
      uVar14 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar11,*(undefined8 *)puVar5,uVar14,0);
      lVar17 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar20 + 0x19) * 0x10 + 0x138);
            goto LAB_01556c20;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,0x19);
LAB_01556c20:
      iVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uStack_a0 = *(undefined8 *)PTR_DAT_057bbb60;
      uStack_98 = 0xffffffffffffffff;
      uStack_90 = param_4;
      uVar14 = System_Enum__ToString_23a4eac(&uStack_a0,0);
      if (param_2 == 0) {
        lVar21 = *(long *)puVar3;
        uVar15 = 0;
        uVar28 = 0;
        lVar19 = lVar21;
        lVar22 = lVar21;
        lVar23 = lVar21;
        lVar24 = lVar21;
        lVar25 = lVar21;
        lVar17 = lVar21;
        lVar26 = lVar21;
      }
      else {
        lVar25 = *(long *)(param_2 + 0x10);
        lVar19 = *(long *)puVar3;
        uVar15 = *(undefined8 *)(param_2 + 0x58);
        lVar17 = lVar19;
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar17 = *(long *)(param_2 + 0x18);
        }
        lVar26 = lVar19;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar26 = *(long *)(param_2 + 0x20);
        }
        uVar28 = *(undefined8 *)(param_2 + 0x40);
        lVar22 = lVar19;
        if (*(long *)(param_2 + 0x30) != 0) {
          lVar22 = *(long *)(param_2 + 0x30);
        }
        lVar23 = lVar19;
        if (*(long *)(param_2 + 0x38) != 0) {
          lVar23 = *(long *)(param_2 + 0x38);
        }
        lVar21 = lVar19;
        if (*(long *)(param_2 + 0x60) != 0) {
          lVar21 = *(long *)(param_2 + 0x60);
        }
        lVar24 = lVar19;
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar24 = *(long *)(param_2 + 0x28);
        }
        if (*(long *)(param_2 + 0x48) != 0) {
          lVar19 = *(long *)(param_2 + 0x48);
        }
      }
      uVar27 = *(undefined8 *)puVar8;
      uStack_88 = *(undefined8 *)PTR_DAT_05786ff8;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_5;
      uVar16 = System_Enum__ToString_23a4eac(&uStack_88,0);
      uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__AdReviewCidGenerated_2db58bc
                         (uVar28,(long)iVar10,uVar14,param_3,lVar25,lVar17,uVar27,lVar26,lVar22,
                          lVar23,lVar21,lVar24,lVar19,uVar15,uVar16,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

