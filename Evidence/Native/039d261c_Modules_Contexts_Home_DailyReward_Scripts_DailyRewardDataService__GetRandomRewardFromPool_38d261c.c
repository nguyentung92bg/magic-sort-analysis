/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomRewardFromPool
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardFromPool (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomRewardFromPool
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardFromPool
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardFromPool_38d261c
          (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c34bb5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1ff0);
    FUN_012d0dc8(PTR_DAT_057c82b0);
    FUN_012d0dc8(PTR_DAT_05792f50);
    FUN_012d0dc8(PTR_DAT_057f77c8);
    FUN_012d0dc8(PTR_DAT_057a8840);
    FUN_012d0dc8(PTR_DAT_05779ce8);
    FUN_012d0dc8(PTR_DAT_057608c8);
    FUN_012d0dc8(PTR_DAT_057d5e50);
    FUN_012d0dc8(PTR_DAT_05762460);
    FUN_012d0dc8(PTR_DAT_05811f10);
    FUN_012d0dc8(PTR_DAT_057b4190);
    FUN_012d0dc8(PTR_DAT_057b3a70);
    FUN_012d0dc8(PTR_DAT_057adac0);
    FUN_012d0dc8(PTR_DAT_05803990);
    FUN_012d0dc8(PTR_DAT_057aae70);
    FUN_012d0dc8(PTR_DAT_05795f40);
    FUN_012d0dc8(PTR_DAT_057ffa80);
    FUN_012d0dc8(PTR_DAT_05793ad8);
    FUN_012d0dc8(PTR_DAT_057a6288);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_057f8ee8);
    FUN_012d0dc8(PTR_DAT_057ce528);
    FUN_012d0dc8(PTR_DAT_057e9000);
    bRam0000000005c34bb5 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_039d2abc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar15 != 0) {
    lVar15 = *(long *)(lVar15 + 0x38);
    if (lVar15 == 0) {
      return 0;
    }
    if (*(int *)(lVar15 + 0x18) != 0) {
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057608c8);
      puVar8 = PTR_DAT_057f77c8;
      puVar7 = PTR_DAT_057e9000;
      puVar6 = PTR_DAT_057c82b0;
      puVar5 = PTR_DAT_057b3a70;
      puVar4 = PTR_DAT_057adac0;
      puVar3 = PTR_DAT_057a6288;
      puVar2 = PTR_DAT_05779ce8;
      if (lVar12 != 0) {
        System_Collections_Generic_Dictionary_object__int____ctor_3b9da64
                  (lVar12,*(undefined8 *)PTR_DAT_05792f50);
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_c8,lVar15,*(undefined8 *)puVar3);
        uStack_78 = uStack_c0;
        uStack_80 = uStack_c8;
        lStack_70 = lStack_b8;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar5), lVar16 = lStack_70,
              puVar3 = PTR_DAT_05811f10, (uVar13 & 1) != 0) {
          System_Collections_Generic_Dictionary_object__int___TryAdd_3b9fd30
                    (lVar12,lStack_70,0,*(undefined8 *)puVar6);
          iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item_3b9e430
                            (lVar12,lVar16,*(undefined8 *)puVar8);
          iVar10 = 0;
          if (*(int *)(lVar15 + 0x18) != 0) {
            iVar10 = 100 / *(int *)(lVar15 + 0x18);
          }
          System_Collections_Generic_Dictionary_object__int___set_Item_3b9e4a0
                    (lVar12,lVar16,iVar10 + iVar9,*(undefined8 *)puVar2);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)PTR_DAT_05811f10);
        if (((*(long *)(param_1 + 0x10) != 0) &&
            (lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar16 != 0)) &&
           (lVar16 = *(long *)(lVar16 + 0x40), lVar16 != 0)) {
          iVar10 = *(int *)(lVar16 + 0x18);
          uVar13 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel_38d1a98
                             ();
          if ((0 < iVar10) && ((uVar13 & 1) != 0)) {
            iVar10 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetUnlimitedLifeOpenProbabilityByOpenedRewardCount_38d1c0c
                               (uVar13,iVar10);
            lVar16 = *(long *)puVar7;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_0130472c(lVar16);
              lVar16 = *(long *)puVar7;
            }
            lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
            if (lVar17 == 0) {
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_0130472c(lVar16);
                lVar16 = *(long *)puVar7;
              }
              uVar18 = **(undefined8 **)(lVar16 + 0xb8);
              lVar17 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05795f40);
              if (lVar17 == 0) goto LAB_039d2abc;
              System_Func_object__bool____ctor_338137c
                        (lVar17,uVar18,*(undefined8 *)PTR_DAT_057ce528,0);
              plVar14 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
              *plVar14 = lVar17;
              FUN_012d0d74(plVar14,lVar17);
            }
            iVar9 = System_Linq_Enumerable__Count_object__241f07c
                              (lVar15,lVar17,*(undefined8 *)PTR_DAT_057d5e50);
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            iVar1 = 0;
            if (iVar9 != 0) {
              iVar1 = (100 - iVar10) / iVar9;
            }
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_c8,lVar15,*(undefined8 *)PTR_DAT_057a6288);
            uStack_78 = uStack_c0;
            uStack_80 = uStack_c8;
            lStack_70 = lStack_b8;
            while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_80,*(undefined8 *)puVar5), (uVar13 & 1) != 0) {
              if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              iVar9 = iVar10;
              if (*(int *)(lStack_70 + 0x10) != 2) {
                iVar9 = iVar1;
              }
              System_Collections_Generic_Dictionary_object__int___set_Item_3b9e4a0
                        (lVar12,lStack_70,iVar9,*(undefined8 *)puVar2);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)puVar3);
          }
          uVar18 = System_Collections_Generic_Dictionary_object__int___get_Values_3b9e2a4
                             (lVar12,*(undefined8 *)PTR_DAT_057a8840);
          uVar11 = System_Linq_Enumerable__Sum_3d79b90(uVar18,0);
          iVar9 = UnityEngine_Random__Range_383a650(0,uVar11,0);
          System_Collections_Generic_Dictionary_object__int___GetEnumerator_3b9e8c4
                    (&uStack_b0,lVar12,*(undefined8 *)PTR_DAT_057f1ff0);
          iVar10 = 0;
          do {
            uVar13 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext_37240e8
                               (&uStack_b0,*(undefined8 *)puVar4);
            uVar18 = uStack_a0;
            if ((uVar13 & 1) == 0) {
              System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_3724204
                        (&uStack_b0,*(undefined8 *)PTR_DAT_057b4190);
              uVar18 = System_Linq_Enumerable__FirstOrDefault_object__2421158
                                 (lVar15,*(undefined8 *)PTR_DAT_05762460);
              return uVar18;
            }
            iVar10 = iVar10 + (int)uStack_98;
          } while (iVar10 <= iVar9);
          System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_3724204
                    (&uStack_b0,*(undefined8 *)PTR_DAT_057b4190);
          return uVar18;
        }
      }
      goto LAB_039d2abc;
    }
  }
  return 0;
}

