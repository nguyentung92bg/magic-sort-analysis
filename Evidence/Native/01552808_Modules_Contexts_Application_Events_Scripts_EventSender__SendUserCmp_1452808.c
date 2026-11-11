/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUserCmp
void Modules_Contexts_Application_Events_Scripts_EventSender__SendUserCmp (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo, int32_t loadedAdRank, int32_t adRequestSource, int32_t provider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUserCmp
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendUserCmp
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo,
   int32_t loadedAdRank, int32_t adRequestSource, int32_t provider, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendUserCmp_1452808
               (undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  
  puVar8 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23779 & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_05774d00);
    FUN_012d0dc8(PTR_DAT_057c52c0);
    FUN_012d0dc8(PTR_DAT_05772e88);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_0580a7d8);
    FUN_012d0dc8(PTR_DAT_05759da8);
    FUN_012d0dc8(PTR_DAT_057c9128);
    FUN_012d0dc8(PTR_DAT_0577ffd0);
    FUN_012d0dc8(PTR_DAT_05764b90);
    FUN_012d0dc8(PTR_DAT_0578d080);
    FUN_012d0dc8(PTR_DAT_057bfce0);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057a70f8);
    FUN_012d0dc8(PTR_DAT_057d75a0);
    bRam0000000005c23779 = 1;
  }
  puVar9 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar8 + 0xb8) != 0) &&
     (lVar17 = *(long *)(**(long **)(*(long *)puVar8 + 0xb8) + 0x18), lVar17 != 0)) {
    plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
    lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar9);
    puVar13 = PTR_DAT_0580a7d8;
    puVar12 = PTR_DAT_057dbe68;
    puVar9 = PTR_DAT_057bbb60;
    puVar8 = PTR_DAT_057a70f8;
    if (lVar17 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar17,*(undefined8 *)PTR_DAT_057d75a0,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar17,*(undefined8 *)puVar8,*(undefined8 *)puVar13,0);
      uStack_88 = *(undefined8 *)puVar9;
      uStack_80 = 0xffffffffffffffff;
      uStack_78 = param_4;
      uVar19 = System_Enum__ToString_23a4eac(&uStack_88,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar17,*(undefined8 *)puVar12,uVar19,0);
      puVar14 = PTR_DAT_05812618;
      puVar11 = PTR_DAT_057df550;
      puVar10 = PTR_DAT_057d60e0;
      puVar13 = PTR_DAT_057c9128;
      puVar12 = PTR_DAT_057c52c0;
      puVar9 = PTR_DAT_057c1328;
      puVar8 = PTR_DAT_05774d00;
      if (param_2 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_0577ffd0,*(undefined8 *)(param_2 + 0x20),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar8,*(undefined8 *)(param_2 + 0x10),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar12,*(undefined8 *)(param_2 + 0x18),0);
        uStack_68 = *(undefined8 *)(param_2 + 0x40);
        uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar9,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar13,uVar19,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar10,*(undefined8 *)puVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar11,*(undefined8 *)(param_2 + 0x28),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_05759da8,*(undefined8 *)(param_2 + 0x30),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_057bfce0,*(undefined8 *)(param_2 + 0x38),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_0578d080,*(undefined8 *)(param_2 + 0x60),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_05772e88,*(undefined8 *)(param_2 + 0x48),0);
        uStack_90 = *(undefined8 *)(param_2 + 0x58);
        uVar19 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_90);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)PTR_DAT_0580e5d8,uVar19,0);
        puVar13 = PTR_DAT_057f16f8;
        puVar12 = PTR_DAT_057db748;
        puVar9 = PTR_DAT_05764b90;
        puVar8 = PTR_DAT_057636d0;
        if (plVar18 != (long *)0x0) {
          lVar23 = *plVar18;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar20 = (undefined8 *)(lVar23 + (long)(*piVar25 + 0x19) * 0x10 + 0x138);
                goto LAB_01552c78;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar20 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_057636d0,0x19);
LAB_01552c78:
          puVar14 = PTR_DAT_057caaf0;
          puVar11 = PTR_DAT_057a8e10;
          puVar10 = PTR_DAT_05786ff8;
          uStack_94 = (*(code *)*puVar20)(plVar18,puVar20[1]);
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar13,uVar19,0);
          iStack_98 = param_3;
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_98);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar9,uVar19,0);
          lVar23 = *plVar18;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)puVar8) {
                puVar20 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                goto LAB_01552d3c;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar20 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar8,1);
LAB_01552d3c:
          uStack_9c = (*(code *)*puVar20)(plVar18,puVar20[1]);
          uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar14,uVar19,0);
          uStack_b8 = *(undefined8 *)puVar10;
          uStack_b0 = 0xffffffffffffffff;
          uStack_a8 = param_5;
          uVar19 = System_Enum__ToString_23a4eac(&uStack_b8,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar11,uVar19,0);
          uStack_d0 = *(undefined8 *)PTR_DAT_057bbb60;
          uStack_c8 = 0xffffffffffffffff;
          uStack_c0 = param_4;
          uVar21 = System_Enum__ToString_23a4eac(&uStack_d0,0);
          lVar23 = *plVar18;
          uVar19 = *(undefined8 *)(param_2 + 0x10);
          uVar4 = *(undefined8 *)(param_2 + 0x18);
          uVar27 = *(undefined8 *)(param_2 + 0x40);
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          uVar2 = *(undefined8 *)(param_2 + 0x30);
          uVar6 = *(undefined8 *)(param_2 + 0x38);
          uVar3 = *(undefined8 *)(param_2 + 0x58);
          uVar7 = *(undefined8 *)(param_2 + 0x60);
          uVar26 = *(undefined8 *)(param_2 + 0x48);
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)puVar8) {
                puVar20 = (undefined8 *)(lVar23 + (long)(*piVar25 + 0x19) * 0x10 + 0x138);
                goto LAB_01552e38;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar20 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar8,0x19);
LAB_01552e38:
          iVar15 = (*(code *)*puVar20)(plVar18,puVar20[1]);
          lVar23 = *plVar18;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)puVar8) {
                puVar20 = (undefined8 *)(lVar23 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                goto LAB_01552e98;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar20 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar8,1);
LAB_01552e98:
          iVar16 = (*(code *)*puVar20)(plVar18,puVar20[1]);
          uStack_e8 = *(undefined8 *)PTR_DAT_05786ff8;
          uStack_e0 = 0xffffffffffffffff;
          uStack_d8 = param_5;
          uVar22 = System_Enum__ToString_23a4eac(&uStack_e8,0);
          uVar19 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UserCpm_2db622c
                             (uVar27,*(undefined8 *)PTR_DAT_0580a7d8,uVar21,uVar1,uVar19,uVar4,
                              *(undefined8 *)PTR_DAT_05812618,uVar5,uVar2,uVar6,uVar7,uVar26,uVar3,
                              (long)iVar15,(long)param_3,(long)iVar16,uVar22,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar19,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar17)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

