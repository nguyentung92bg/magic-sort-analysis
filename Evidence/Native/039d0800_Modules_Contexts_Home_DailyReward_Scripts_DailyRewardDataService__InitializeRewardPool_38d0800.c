/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$InitializeRewardPool
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPool (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$InitializeRewardPool
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPool
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__InitializeRewardPool_38d0800
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000005c34ba9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05782db8);
    FUN_012d0dc8(PTR_DAT_057cfa78);
    FUN_012d0dc8(PTR_DAT_057dd5f8);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057ade90);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057ff0f0);
    FUN_012d0dc8(PTR_DAT_05810900);
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_05788798);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_0576ecf8);
    FUN_012d0dc8(PTR_DAT_057bdd58);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_057fc6d0);
    FUN_012d0dc8(PTR_DAT_057e9000);
    bRam0000000005c34ba9 = 1;
  }
  puVar2 = PTR_DAT_05781050;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x38) != 0)) {
      return;
    }
    lVar14 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSelectedRewardTypes_38d0e38
                       (param_1,param_2);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar9 != 0) &&
       (System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar9,*(undefined8 *)PTR_DAT_057994c8), puVar6 = PTR_DAT_057b3a70,
       puVar5 = PTR_DAT_057ade90, puVar4 = PTR_DAT_0576c1b8, puVar3 = PTR_DAT_05766c50,
       puVar2 = PTR_DAT_0575eb20, lVar14 != 0)) {
      System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                (&uStack_b8,lVar14,*(undefined8 *)PTR_DAT_05788798);
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_70 = uStack_a8;
      while (uVar10 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                                (&uStack_80,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
        iVar7 = (int)uStack_70;
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar14,0);
        *(int *)(lVar14 + 0x10) = iVar7;
        if (iVar7 - 4U < 3) {
          *(undefined4 *)(lVar14 + 0x14) = 1;
        }
        else if (iVar7 == 1) {
          uVar8 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomCoinAmountByConfig_38d132c
                            (param_1,param_2);
          *(undefined4 *)(lVar14 + 0x14) = uVar8;
        }
        else if (iVar7 == 2) {
          iVar7 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomUnlimitedLifeTimeByConfig_38d1600
                            (param_1,param_2);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar11 = System_TimeSpan__FromMinutes_2699eec((double)iVar7,0);
          *(undefined8 *)(lVar14 + 0x18) = uVar11;
        }
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
          *plVar12 = lVar14;
          FUN_012d0d74(plVar12,lVar14);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar9,lVar14);
        }
      }
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                (&uStack_80,*(undefined8 *)PTR_DAT_057dd5f8);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05781050);
      if (lVar14 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar14,*(undefined8 *)PTR_DAT_057994c8);
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,lVar9,*(undefined8 *)PTR_DAT_057a6288);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        uStack_90 = uStack_a8;
        while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_a0,*(undefined8 *)puVar6), uVar11 = uStack_90,
              (uVar10 & 1) != 0) {
          iVar7 = 3;
          do {
            lVar9 = *(long *)(lVar14 + 0x10);
            lVar15 = *(long *)puVar3;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              puVar13 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar13 = uVar11;
              FUN_012d0d74(puVar13,uVar11);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar14,uVar11);
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)PTR_DAT_05811f10);
        puVar2 = PTR_DAT_057e9000;
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar9 = *(long *)PTR_DAT_057e9000;
          lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar9);
            lVar9 = *(long *)puVar2;
          }
          lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar16 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_0130472c(lVar9);
              lVar9 = *(long *)puVar2;
            }
            uVar11 = **(undefined8 **)(lVar9 + 0xb8);
            lVar16 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05810900);
            if (lVar16 == 0) goto LAB_039d0d30;
            System_Func_object__float____ctor_338234c
                      (lVar16,uVar11,*(undefined8 *)PTR_DAT_057fc6d0,0);
            plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar12 = lVar16;
            FUN_012d0d74(plVar12,lVar16);
          }
          uVar11 = System_Linq_Enumerable__OrderBy_object__float__2423864
                             (lVar14,lVar16,*(undefined8 *)PTR_DAT_05782db8);
          uVar11 = System_Linq_Enumerable__ToList_object__242f814
                             (uVar11,*(undefined8 *)PTR_DAT_057cfa78);
          if (lVar15 != 0) {
            puVar13 = (undefined8 *)(lVar15 + 0x38);
            *puVar13 = uVar11;
            FUN_012d0d74(puVar13,uVar11);
            if (*(long *)(param_1 + 0x10) != 0) {
              lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
              lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057bdd58);
              if ((lVar14 != 0) &&
                 (System_Collections_Generic_List_object____ctor_21fc1fc
                            (lVar14,*(undefined8 *)PTR_DAT_0576ecf8), lVar9 != 0)) {
                plVar12 = (long *)(lVar9 + 0x40);
                *plVar12 = lVar14;
                FUN_012d0d74(plVar12,lVar14);
                *(undefined2 *)(param_1 + 0x20) = 0x101;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_039d0d30:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

