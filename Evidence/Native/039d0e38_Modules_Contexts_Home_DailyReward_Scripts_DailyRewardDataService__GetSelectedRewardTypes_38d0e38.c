/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetSelectedRewardTypes
System_Collections_Generic_List_CurrencyType__o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSelectedRewardTypes (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetSelectedRewardTypes
   System_Collections_Generic_List_CurrencyType__o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSelectedRewardTypes
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const
   MethodInfo* method); */

long Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetSelectedRewardTypes_38d0e38
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_057f8d68;
  if ((bRam0000000005c34baa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e4dd0);
    FUN_012d0dc8(PTR_DAT_057a5788);
    FUN_012d0dc8(PTR_DAT_057bfc08);
    FUN_012d0dc8(PTR_DAT_05791a58);
    FUN_012d0dc8(PTR_DAT_05784028);
    FUN_012d0dc8(PTR_DAT_057abdb0);
    FUN_012d0dc8(PTR_DAT_05777000);
    FUN_012d0dc8(PTR_DAT_057ce468);
    FUN_012d0dc8(PTR_DAT_05774c68);
    FUN_012d0dc8(PTR_DAT_057e83a8);
    FUN_012d0dc8(PTR_DAT_0577f168);
    FUN_012d0dc8(PTR_DAT_05779150);
    FUN_012d0dc8(PTR_DAT_057d9160);
    FUN_012d0dc8(PTR_DAT_057da768);
    FUN_012d0dc8(PTR_DAT_057d8638);
    FUN_012d0dc8(PTR_DAT_057f8d68);
    FUN_012d0dc8(PTR_DAT_057bfd80);
    FUN_012d0dc8(PTR_DAT_0579ce00);
    FUN_012d0dc8(PTR_DAT_05817ad0);
    FUN_012d0dc8(PTR_DAT_057f67c0);
    bRam0000000005c34baa = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05777000;
  if (lVar11 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_20512f0
              (lVar11,*(undefined8 *)PTR_DAT_057da768);
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar12 != 0) &&
       (System_Collections_Generic_Dictionary_Int32Enum__int____ctor_36cd93c
                  (lVar12,*(undefined8 *)PTR_DAT_05791a58), puVar2 = PTR_DAT_057e4dd0, param_2 != 0)
       ) {
      System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                (lVar12,4,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_057e4dd0);
      System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                (lVar12,5,*(undefined4 *)(param_2 + 0x14),*(undefined8 *)puVar2);
      System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                (lVar12,6,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)puVar2);
      System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                (lVar12,1,*(undefined4 *)(param_2 + 0x1c),*(undefined8 *)puVar2);
      System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                (lVar12,2,*(undefined4 *)(param_2 + 0x20),*(undefined8 *)puVar2);
      uVar13 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward_38d1924
                         (param_1,&lStack_68);
      if ((uVar13 & 1) != 0) {
        if (lStack_68 == 0) goto LAB_039d12f4;
        if (*(int *)(lStack_68 + 0x10) - 4U < 3) {
          System_Collections_Generic_Dictionary_Int32Enum__int___Remove_36cf838
                    (lVar12,*(int *)(lStack_68 + 0x10),*(undefined8 *)PTR_DAT_057bfc08);
        }
      }
      uVar13 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel_38d1a98
                         ();
      if ((uVar13 & 1) != 0) {
        lVar16 = *(long *)(lVar11 + 0x10);
        lVar17 = *(long *)PTR_DAT_057d9160;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_039d12f4;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = 2;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))(lVar11,2);
        }
        System_Collections_Generic_Dictionary_Int32Enum__int___Remove_36cf838
                  (lVar12,2,*(undefined8 *)PTR_DAT_057bfc08);
      }
      plVar14 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f67c0);
      if (plVar14 != (long *)0x0) {
        System_Random___ctor_2692230(plVar14,0);
        puVar7 = PTR_DAT_05817ad0;
        puVar6 = PTR_DAT_057ce468;
        puVar5 = PTR_DAT_057abdb0;
        puVar4 = PTR_DAT_057a5788;
        puVar3 = PTR_DAT_05784028;
        puVar2 = PTR_DAT_05774c68;
        iVar8 = *(int *)(lVar11 + 0x18);
        do {
          if ((2 < iVar8) ||
             (iVar8 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Count_36cdfd4
                                (lVar12,*(undefined8 *)puVar3), iVar8 < 1)) {
            return lVar11;
          }
          uVar15 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Values_36ce170
                             (lVar12,*(undefined8 *)puVar5);
          uVar9 = System_Linq_Enumerable__Sum_3d79b90(uVar15,0);
          iVar10 = (**(code **)(*plVar14 + 0x1a8))(plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x1b0));
          uStack_70 = 0;
          System_Collections_Generic_Dictionary_Int32Enum__int___GetEnumerator_36ce7a0
                    (&uStack_b0,lVar12,*(undefined8 *)puVar4);
          iVar8 = 0;
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          do {
            uVar13 = System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___MoveNext_3926d94
                               (&uStack_90,*(undefined8 *)puVar2);
            if ((uVar13 & 1) == 0) goto LAB_039d11ec;
            iVar8 = iVar8 + (int)((ulong)uStack_80 >> 0x20);
          } while (iVar8 <= iVar10);
          uStack_b0 = 0;
          System_Nullable_Int32Enum____ctor_203c774
                    (&uStack_b0,uStack_80,*(undefined8 *)PTR_DAT_057bfd80);
          uStack_70 = uStack_b0;
LAB_039d11ec:
          System_Collections_Generic_Dictionary_Enumerator_Int32Enum__int___Dispose_3926e8c
                    (&uStack_90,*(undefined8 *)puVar6);
          if ((char)uStack_70 != '\0') {
            uVar9 = System_Nullable_Int32Enum___get_Value_203c78c(&uStack_70,*(undefined8 *)puVar7);
            lVar16 = *(long *)(lVar11 + 0x10);
            lVar17 = *(long *)PTR_DAT_057d9160;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar9;
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar11);
            }
            uVar9 = System_Nullable_Int32Enum___get_Value_203c78c(&uStack_70,*(undefined8 *)puVar7);
            System_Collections_Generic_Dictionary_Int32Enum__int___Remove_36cf838
                      (lVar12,uVar9,*(undefined8 *)PTR_DAT_057bfc08);
          }
          iVar8 = *(int *)(lVar11 + 0x18);
        } while( true );
      }
    }
  }
LAB_039d12f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

