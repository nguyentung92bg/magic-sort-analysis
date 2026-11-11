/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo, int32_t adRequestSource, int32_t adRank, int32_t provider, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, MaxSdkBase_AdInfo_o* adInfo,
   int32_t adRequestSource, int32_t adRank, int32_t provider, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdImpression_1452f8c
               (undefined8 param_1,long param_2,undefined4 param_3,int param_4,undefined4 param_5)

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
  undefined *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined8 uVar28;
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
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar8 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2377a & 1) == 0) {
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
    FUN_012d0dc8(PTR_DAT_057a7450);
    FUN_012d0dc8(PTR_DAT_0577ffd0);
    FUN_012d0dc8(PTR_DAT_0578d080);
    FUN_012d0dc8(PTR_DAT_057bfce0);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_057ec100);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057a70f8);
    bRam0000000005c2377a = 1;
  }
  puVar10 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar8 + 0xb8) != 0) &&
     (lVar18 = *(long *)(**(long **)(*(long *)puVar8 + 0xb8) + 0x18), lVar18 != 0)) {
    plVar19 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
    lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar10);
    puVar10 = PTR_DAT_0580a7d8;
    puVar8 = PTR_DAT_057a70f8;
    if (lVar18 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar18,*(undefined8 *)PTR_DAT_057ec100,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar18,*(undefined8 *)puVar8,*(undefined8 *)puVar10,0);
      puVar15 = PTR_DAT_05812618;
      puVar14 = PTR_DAT_057df550;
      puVar11 = PTR_DAT_057d60e0;
      puVar9 = PTR_DAT_057c9128;
      puVar13 = PTR_DAT_057c52c0;
      puVar12 = PTR_DAT_057c1328;
      puVar10 = PTR_DAT_057bbb60;
      puVar8 = PTR_DAT_05774d00;
      if (param_2 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_0577ffd0,*(undefined8 *)(param_2 + 0x20),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar8,*(undefined8 *)(param_2 + 0x10),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar13,*(undefined8 *)(param_2 + 0x18),0);
        uStack_68 = *(undefined8 *)(param_2 + 0x40);
        uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar9,uVar20,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar11,*(undefined8 *)puVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar14,*(undefined8 *)(param_2 + 0x28),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_05759da8,*(undefined8 *)(param_2 + 0x30),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057bfce0,*(undefined8 *)(param_2 + 0x38),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_0578d080,*(undefined8 *)(param_2 + 0x60),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_05772e88,*(undefined8 *)(param_2 + 0x48),0);
        uStack_78 = *(undefined8 *)(param_2 + 0x58);
        uVar20 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057d6138,&uStack_78);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_0580e5d8,uVar20,0);
        uStack_90 = *(undefined8 *)puVar10;
        uStack_88 = 0xffffffffffffffff;
        uStack_80 = param_3;
        uVar20 = System_Enum__ToString_23a4eac(&uStack_90,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057dbe68,uVar20,0);
        puVar13 = PTR_DAT_057f16f8;
        puVar12 = PTR_DAT_057db748;
        puVar10 = PTR_DAT_057a7450;
        puVar8 = PTR_DAT_057636d0;
        if (plVar19 != (long *)0x0) {
          lVar24 = *plVar19;
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x19) * 0x10 + 0x138);
                goto LAB_015533fc;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar21 = (undefined8 *)FUN_0131971c(plVar19,*(long *)PTR_DAT_057636d0,0x19);
LAB_015533fc:
          puVar14 = PTR_DAT_057caaf0;
          puVar11 = PTR_DAT_057a8e10;
          puVar9 = PTR_DAT_05786ff8;
          uStack_94 = (*(code *)*puVar21)(plVar19,puVar21[1]);
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar13,uVar20,0);
          iStack_98 = param_4;
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&iStack_98);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar10,uVar20,0);
          lVar24 = *plVar19;
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_015534c0;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar21 = (undefined8 *)FUN_0131971c(plVar19,*(long *)puVar8,1);
LAB_015534c0:
          uStack_9c = (*(code *)*puVar21)(plVar19,puVar21[1]);
          uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar12,&uStack_9c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar14,uVar20,0);
          uStack_b8 = *(undefined8 *)puVar9;
          uStack_b0 = 0xffffffffffffffff;
          uStack_a8 = param_5;
          uVar20 = System_Enum__ToString_23a4eac(&uStack_b8,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar11,uVar20,0);
          uStack_d0 = *(undefined8 *)PTR_DAT_057bbb60;
          uStack_c8 = 0xffffffffffffffff;
          uStack_c0 = param_3;
          uVar22 = System_Enum__ToString_23a4eac(&uStack_d0,0);
          lVar24 = *plVar19;
          uVar20 = *(undefined8 *)(param_2 + 0x10);
          uVar4 = *(undefined8 *)(param_2 + 0x18);
          uVar28 = *(undefined8 *)(param_2 + 0x40);
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          uVar2 = *(undefined8 *)(param_2 + 0x30);
          uVar6 = *(undefined8 *)(param_2 + 0x38);
          uVar3 = *(undefined8 *)(param_2 + 0x58);
          uVar7 = *(undefined8 *)(param_2 + 0x60);
          uVar27 = *(undefined8 *)(param_2 + 0x48);
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 0x19) * 0x10 + 0x138);
                goto LAB_015535b4;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar21 = (undefined8 *)FUN_0131971c(plVar19,*(long *)puVar8,0x19);
LAB_015535b4:
          iVar16 = (*(code *)*puVar21)(plVar19,puVar21[1]);
          lVar24 = *plVar19;
          uVar25 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar25 != 0) {
            piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)puVar8) {
                puVar21 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
                goto LAB_01553614;
              }
              uVar25 = uVar25 - 1;
              piVar26 = piVar26 + 4;
            } while (uVar25 != 0);
          }
          puVar21 = (undefined8 *)FUN_0131971c(plVar19,*(long *)puVar8,1);
LAB_01553614:
          iVar17 = (*(code *)*puVar21)(plVar19,puVar21[1]);
          uStack_e8 = *(undefined8 *)PTR_DAT_05786ff8;
          uStack_e0 = 0xffffffffffffffff;
          uStack_d8 = param_5;
          uVar23 = System_Enum__ToString_23a4eac(&uStack_e8,0);
          uVar20 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__AdImpression_2db5168
                             (uVar28,*(undefined8 *)PTR_DAT_0580a7d8,uVar1,uVar20,uVar4,
                              *(undefined8 *)PTR_DAT_05812618,uVar5,uVar2,uVar6,uVar7,uVar27,uVar3,
                              uVar22,(long)iVar16,(long)param_4,(long)iVar17,uVar23,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar20,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

