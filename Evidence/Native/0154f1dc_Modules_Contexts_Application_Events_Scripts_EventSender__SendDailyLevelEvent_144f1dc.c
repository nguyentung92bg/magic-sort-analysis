/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyLevelEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelState, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDailyLevelEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelState, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent_144f1dc
               (undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  undefined8 uVar29;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2376c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05768e10);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057a3040);
    FUN_012d0dc8(PTR_DAT_057ef900);
    FUN_012d0dc8(PTR_DAT_0580ac18);
    FUN_012d0dc8(PTR_DAT_057c3218);
    FUN_012d0dc8(PTR_DAT_05787810);
    FUN_012d0dc8(PTR_DAT_0577f918);
    FUN_012d0dc8(PTR_DAT_057e5598);
    FUN_012d0dc8(PTR_DAT_057a8558);
    FUN_012d0dc8(PTR_DAT_058120e8);
    FUN_012d0dc8(PTR_DAT_057f16f8);
    FUN_012d0dc8(PTR_DAT_057bb470);
    FUN_012d0dc8(PTR_DAT_057a3170);
    FUN_012d0dc8(PTR_DAT_057fe5c0);
    FUN_012d0dc8(PTR_DAT_0575e318);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05778280);
    bRam0000000005c2376c = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
     (plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_057e8f70), plVar10 != (long *)0x0))
  {
    lVar9 = *plVar10;
    uVar26 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar27 + 10) * 0x10 + 0x138);
          goto LAB_0154f3f0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0581aae8,10);
LAB_0154f3f0:
    lVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (lVar9 != 0) {
      lVar28 = *(long *)(lVar9 + 0x20);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
      puVar3 = PTR_DAT_0580ac18;
      puVar5 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057bb470;
      puVar1 = PTR_DAT_05768e10;
      if (lVar9 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar9,*(undefined8 *)PTR_DAT_0575e318,0);
        iStack_64 = param_2;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar2,uVar12,0);
        uStack_88 = *(undefined8 *)puVar1;
        uStack_80 = 0xffffffffffffffff;
        uStack_78 = param_3;
        uVar12 = System_Enum__ToString_23a4eac(&uStack_88,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar9,*(undefined8 *)puVar3,uVar12,0);
        puVar8 = PTR_DAT_05802ff8;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_0579fa30;
        puVar2 = PTR_DAT_05774390;
        if (lVar28 != 0) {
          uVar12 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                             (lVar28,param_2,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar9,uVar12,0);
          uVar12 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetDailyLevelStats_1f1a0d4
                             (lVar28,param_2,0);
          uStack_a0 = *(undefined8 *)puVar1;
          uStack_98 = 0xffffffffffffffff;
          uStack_90 = param_3;
          uVar13 = System_Enum__ToString_23a4eac(&uStack_a0,0);
          uStack_68 = 0;
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
          uVar14 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                             (uVar12,*(undefined8 *)puVar4,uVar14,*(undefined8 *)puVar8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar3);
          }
          uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
          uStack_a4 = 0;
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a4);
          uVar15 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                             (uVar12,*(undefined8 *)PTR_DAT_057f16f8,uVar15,*(undefined8 *)puVar8);
          uVar15 = System_Convert__ToInt64_2130754(uVar15,0);
          plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                      (uVar12,*(undefined8 *)PTR_DAT_05778280,*(undefined8 *)puVar2,
                                       *(undefined8 *)puVar8);
          puVar7 = PTR_DAT_057fe5c0;
          puVar6 = PTR_DAT_057ef900;
          puVar4 = PTR_DAT_057a3170;
          puVar3 = PTR_DAT_05787810;
          puVar1 = PTR_DAT_0577f918;
          if (plVar10 != (long *)0x0) {
            uVar16 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            uStack_a8 = 0;
            uVar17 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_a8);
            uVar17 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar12,*(undefined8 *)puVar6,uVar17,*(undefined8 *)puVar8);
            uVar17 = System_Convert__ToInt64_2130754(uVar17,0);
            uStack_ac = 0;
            uVar18 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_ac);
            uVar18 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar12,*(undefined8 *)puVar4,uVar18,*(undefined8 *)puVar8);
            uVar18 = System_Convert__ToInt64_2130754(uVar18,0);
            uStack_b0 = 0;
            uVar19 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b0);
            uVar19 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar12,*(undefined8 *)puVar7,uVar19,*(undefined8 *)puVar8);
            uVar19 = System_Convert__ToInt64_2130754(uVar19,0);
            uStack_b4 = 0;
            uVar20 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b4);
            uVar20 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                               (uVar12,*(undefined8 *)puVar3,uVar20,*(undefined8 *)puVar8);
            uVar20 = System_Convert__ToInt64_2130754(uVar20,0);
            plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                        (uVar12,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                                         *(undefined8 *)puVar8);
            puVar1 = PTR_DAT_058120e8;
            if (plVar10 != (long *)0x0) {
              uVar21 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                          (uVar12,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                                           *(undefined8 *)puVar8);
              puVar4 = PTR_DAT_057c3218;
              puVar3 = PTR_DAT_057a8558;
              puVar1 = PTR_DAT_057a3040;
              if (plVar10 != (long *)0x0) {
                uVar22 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
                uStack_b8 = 0;
                uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_b8);
                uVar23 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar12,*(undefined8 *)puVar1,uVar23,*(undefined8 *)puVar8);
                uVar23 = System_Convert__ToInt64_2130754(uVar23,0);
                uStack_bc = 0;
                uVar24 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_bc);
                uVar24 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar12,*(undefined8 *)puVar4,uVar24,*(undefined8 *)puVar8);
                uVar24 = System_Convert__ToInt64_2130754(uVar24,0);
                uStack_c0 = 0;
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_c0);
                uVar25 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar12,*(undefined8 *)puVar3,uVar25,*(undefined8 *)puVar8);
                uVar29 = System_Convert__ToDouble_21312e0(uVar25,0);
                uStack_c4 = 0;
                uVar25 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_c4);
                uVar25 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                   (uVar12,*(undefined8 *)PTR_DAT_0580a230,uVar25,
                                    *(undefined8 *)puVar8);
                uVar25 = System_Convert__ToInt64_2130754(uVar25,0);
                plVar10 = (long *)System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                                            (uVar12,*(undefined8 *)PTR_DAT_057e5598,
                                             *(undefined8 *)puVar2,*(undefined8 *)puVar8);
                puVar1 = PTR_DAT_0575f9f0;
                if (plVar10 != (long *)0x0) {
                  uVar12 = (**(code **)(*plVar10 + 0x168))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                  uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DailyLevel_2db85d0
                                     (uVar29,(long)param_2,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18
                                      ,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar12,0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar1);
                  }
                  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
                  Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                            (param_1,lVar9);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

