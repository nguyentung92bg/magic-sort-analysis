/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdShowStartedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdShowStartedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo, int32_t adRequestSource, int32_t provider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdShowStartedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdShowStartedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo,
   int32_t adRequestSource, int32_t provider, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdShowStartedEvent_14545dc
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

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
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2377d & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05765bf8);
    bRam0000000005c2377d = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar12 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar12 != 0)) {
    plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar12 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar12,*(undefined8 *)PTR_DAT_05765bf8,0), puVar6 = PTR_DAT_057f16f8,
       puVar3 = PTR_DAT_057dbe68, puVar5 = PTR_DAT_05774d00, puVar4 = PTR_DAT_05774390,
       puVar1 = PTR_DAT_0575ecb0, plVar13 != (long *)0x0)) {
      lVar18 = *plVar13;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar14 = (undefined8 *)(lVar18 + (long)(*piVar23 + 0x19) * 0x10 + 0x138);
            goto LAB_0155485c;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,0x19);
LAB_0155485c:
      puVar8 = PTR_DAT_057c52c0;
      puVar2 = PTR_DAT_057c1328;
      uVar9 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar9);
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_a8);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar6,uVar15,0);
      uStack_88 = *(undefined8 *)PTR_DAT_057bbb60;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_3;
      uVar15 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar3,uVar15,0);
      puVar14 = (undefined8 *)(param_2 + 0x10);
      if (param_2 == 0) {
        puVar14 = (undefined8 *)puVar4;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar5,*puVar14,0);
      puVar6 = PTR_DAT_05812618;
      puVar3 = PTR_DAT_057d60e0;
      puVar5 = PTR_DAT_0577ffd0;
      uVar15 = *(undefined8 *)puVar1;
      if (param_2 == 0) {
        uStack_88 = 0;
      }
      else {
        uStack_88 = *(undefined8 *)(param_2 + 0x40);
      }
      uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_88);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar12,uVar15,uVar16,0);
      puVar7 = PTR_DAT_057bfce0;
      puVar2 = PTR_DAT_057636d0;
      puVar1 = PTR_DAT_05759da8;
      if (param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(param_2 + 0x18);
      }
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar8,lVar19,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar6,0);
      if (param_2 == 0) {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar5,0,0);
        lVar18 = 0;
      }
      else {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar5,*(undefined8 *)(param_2 + 0x20),0);
        lVar18 = *(long *)(param_2 + 0x30);
      }
      puVar5 = PTR_DAT_0578d080;
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar1,lVar19,0);
      puVar1 = PTR_DAT_057df550;
      if (param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(param_2 + 0x38);
      }
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar7,lVar19,0);
      puVar3 = PTR_DAT_05772e88;
      if (param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(param_2 + 0x60);
      }
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar5,lVar19,0);
      puVar5 = PTR_DAT_0580e5d8;
      if (param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(param_2 + 0x28);
      }
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar1,lVar19,0);
      puVar1 = PTR_DAT_057d6138;
      if (param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(param_2 + 0x48);
      }
      lVar19 = *(long *)puVar4;
      if (lVar18 != 0) {
        lVar19 = lVar18;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar3,lVar19,0);
      puVar8 = PTR_DAT_057caaf0;
      puVar6 = PTR_DAT_057a8e10;
      puVar3 = PTR_DAT_05786ff8;
      uVar15 = *(undefined8 *)puVar5;
      if (param_2 == 0) {
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(undefined8 *)(param_2 + 0x58);
      }
      uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar12,uVar15,uVar16,0);
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar2;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_01554b70;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_0131971c(plVar13,lVar18,1);
LAB_01554b70:
      uStack_8c = (*(code *)*puVar14)(plVar13,puVar14[1]);
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_8c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar8,uVar15,0);
      uStack_88 = *(undefined8 *)puVar3;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_4;
      uVar15 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar6,uVar15,0);
      lVar19 = *plVar13;
      lVar18 = *(long *)puVar2;
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar18) {
            puVar14 = (undefined8 *)(lVar19 + (long)(*piVar23 + 0x19) * 0x10 + 0x138);
            goto LAB_01554c30;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_0131971c(plVar13,lVar18,0x19);
LAB_01554c30:
      iVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      uStack_a8 = *(undefined8 *)PTR_DAT_057bbb60;
      uStack_a0 = 0xffffffffffffffff;
      uStack_98 = param_3;
      uVar15 = System_Enum__ToString_23a4eac(&uStack_a8,0);
      puVar1 = PTR_DAT_0575f9f0;
      if (param_2 == 0) {
        lVar25 = *(long *)puVar4;
        uVar16 = 0;
        uStack_c8 = 0;
        lVar22 = lVar25;
        lVar26 = lVar25;
        lVar18 = lVar25;
        lVar19 = lVar25;
        lStack_d8 = lVar25;
        lStack_d0 = lVar25;
        lStack_c0 = lVar25;
      }
      else {
        lStack_c0 = *(long *)(param_2 + 0x10);
        uStack_c8 = *(undefined8 *)(param_2 + 0x58);
        lVar22 = *(long *)puVar4;
        lStack_d8 = lVar22;
        if (*(long *)(param_2 + 0x18) != 0) {
          lStack_d8 = *(long *)(param_2 + 0x18);
        }
        lVar18 = lVar22;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar18 = *(long *)(param_2 + 0x20);
        }
        lStack_d0 = lVar22;
        if (*(long *)(param_2 + 0x30) != 0) {
          lStack_d0 = *(long *)(param_2 + 0x30);
        }
        uVar16 = *(undefined8 *)(param_2 + 0x40);
        lVar19 = lVar22;
        if (*(long *)(param_2 + 0x38) != 0) {
          lVar19 = *(long *)(param_2 + 0x38);
        }
        lVar25 = lVar22;
        if (*(long *)(param_2 + 0x60) != 0) {
          lVar25 = *(long *)(param_2 + 0x60);
        }
        lVar26 = lVar22;
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar26 = *(long *)(param_2 + 0x28);
        }
        if (*(long *)(param_2 + 0x48) != 0) {
          lVar22 = *(long *)(param_2 + 0x48);
        }
      }
      lVar20 = *plVar13;
      uVar24 = *(undefined8 *)PTR_DAT_05812618;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar14 = (undefined8 *)(lVar20 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto LAB_01554d74;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_01554d74:
      iVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      uStack_88 = *(undefined8 *)PTR_DAT_05786ff8;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_4;
      uVar17 = System_Enum__ToString_23a4eac(&uStack_88,0);
      uVar15 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__AdShowStarted_2db5d9c
                         (uVar16,(long)iVar10,uVar15,lStack_c0,lStack_d8,uVar24,lVar18,lStack_d0,
                          lVar19,lVar25,lVar26,lVar22,uStack_c8,(long)iVar11,uVar17,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar15,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

