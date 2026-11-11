/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomRewardV2
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardV2 (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o* probabilities, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomRewardV2
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardV2
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o* probabilities, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardV2_38d1e50
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_05778908;
                    /* try { // try from 039d1e5c to 03ad1e6f has its CatchHandler @ 039d1d38 */
                    /* try { // try from 039d1e70 to 03ad1e87 has its CatchHandler @ 039d1f04 */
  if ((bRam0000000005c34baf & 1) == 0) {
                    /* try { // try from 039d1e88 to 03ad1ef3 has its CatchHandler @ 039d1d38 */
    FUN_012d0dc8(PTR_DAT_057f1ff0);
    FUN_012d0dc8(PTR_DAT_057732d8);
    FUN_012d0dc8(PTR_DAT_057bd7b8);
    FUN_012d0dc8(PTR_DAT_057a8840);
    FUN_012d0dc8(PTR_DAT_057f7ab8);
    FUN_012d0dc8(PTR_DAT_05773b80);
    FUN_012d0dc8(PTR_DAT_057b3ca0);
    FUN_012d0dc8(PTR_DAT_057b4190);
    FUN_012d0dc8(PTR_DAT_057adac0);
                    /* try { // try from 039d1ef4 to 03ad1f03 has its CatchHandler @ 039d1f04 */
    FUN_012d0dc8(PTR_DAT_057aae70);
    FUN_012d0dc8(PTR_DAT_057cc198);
                    /* catch() { ... } // from try @ 039d1e0c with catch @ 039d1f04
                       catch() { ... } // from try @ 039d1e44 with catch @ 039d1f04
                       catch() { ... } // from try @ 039d1e70 with catch @ 039d1f04
                       catch() { ... } // from try @ 039d1ef4 with catch @ 039d1f04 */
                    /* try { // try from 039d1f08 to 03ad1f0b has its CatchHandler @ 039d1f14 */
                    /* try { // try from 039d1f0c to 03ad1f17 has its CatchHandler @ 039d1d38 */
    FUN_012d0dc8(PTR_DAT_05795f40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d1f08 with catch @ 039d1f14
                        */
    FUN_012d0dc8(PTR_DAT_057865f8);
    FUN_012d0dc8(PTR_DAT_057ffa80);
    FUN_012d0dc8(PTR_DAT_05793ad8);
    FUN_012d0dc8(PTR_DAT_057aa960);
    FUN_012d0dc8(PTR_DAT_05784d70);
    FUN_012d0dc8(PTR_DAT_05805df0);
    FUN_012d0dc8(PTR_DAT_057c6a08);
    FUN_012d0dc8(PTR_DAT_05778908);
    FUN_012d0dc8(PTR_DAT_057e9000);
    bRam0000000005c34baf = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar7 == 0) goto LAB_039d224c;
  System_Object___ctor_23dfe5c(lVar7,0);
  puVar1 = PTR_DAT_057e9000;
  uVar13 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
LAB_039d222c:
      uVar13 = 0;
    }
    else {
      lVar8 = *(long *)PTR_DAT_057e9000;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar8 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_057865f8;
      lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar8 = *(long *)puVar1;
        }
        uVar13 = **(undefined8 **)(lVar8 + 0xb8);
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar12 == 0) goto LAB_039d224c;
        System_Func_object__object____ctor_33820ac(lVar12,uVar13,*(undefined8 *)PTR_DAT_05784d70,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
        *plVar9 = lVar12;
        FUN_012d0d74(plVar9,lVar12);
        lVar8 = *(long *)puVar1;
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar8 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_057cc198;
      lVar14 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
      if (lVar14 == 0) {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar8 = *(long *)puVar1;
        }
        uVar13 = **(undefined8 **)(lVar8 + 0xb8);
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar14 == 0) goto LAB_039d224c;
        System_Func_object__int____ctor_3381cbc(lVar14,uVar13,*(undefined8 *)PTR_DAT_05805df0,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
        *plVar9 = lVar14;
        FUN_012d0d74(plVar9,lVar14);
      }
      lVar8 = System_Linq_Enumerable__ToDictionary_object__object__int__242ce28
                        (param_2,lVar12,lVar14,*(undefined8 *)PTR_DAT_057b3ca0);
      uVar10 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward_38d1924
                         (param_1,lVar7 + 0x10);
      puVar1 = PTR_DAT_05795f40;
      if ((uVar10 & 1) == 0) {
        if (lVar8 == 0) goto LAB_039d224c;
      }
      else {
        if (lVar8 == 0) {
LAB_039d224c:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar13 = System_Collections_Generic_Dictionary_object__int___get_Keys_3b9e118
                           (lVar8,*(undefined8 *)PTR_DAT_057bd7b8);
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_05773b80;
        if (lVar12 == 0) goto LAB_039d224c;
        System_Func_object__bool____ctor_338137c(lVar12,lVar7,*(undefined8 *)PTR_DAT_057c6a08,0);
        lVar7 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                          (uVar13,lVar12,*(undefined8 *)puVar1);
        if (lVar7 != 0) {
          System_Collections_Generic_Dictionary_object__int___Remove_3b9f9ac
                    (lVar8,lVar7,*(undefined8 *)PTR_DAT_057732d8);
        }
      }
      puVar4 = PTR_DAT_057f7ab8;
      puVar3 = PTR_DAT_057f1ff0;
      puVar2 = PTR_DAT_057b4190;
      puVar1 = PTR_DAT_057adac0;
      uVar13 = System_Collections_Generic_Dictionary_object__int___get_Values_3b9e2a4
                         (lVar8,*(undefined8 *)PTR_DAT_057a8840);
      uVar5 = System_Linq_Enumerable__Sum_3d79b90(uVar13,0);
      iVar6 = UnityEngine_Random__Range_383a650(0,uVar5,0);
      System_Collections_Generic_Dictionary_object__int___GetEnumerator_3b9e8c4
                (&uStack_70,lVar8,*(undefined8 *)puVar3);
      iVar11 = 0;
      do {
        uVar10 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext_37240e8
                           (&uStack_70,*(undefined8 *)puVar1);
        uVar13 = uStack_60;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_3724204
                    (&uStack_70,*(undefined8 *)puVar2);
          lVar7 = System_Linq_Enumerable__FirstOrDefault_object__2421158
                            (param_2,*(undefined8 *)puVar4);
          if (lVar7 != 0) {
            return *(undefined8 *)(lVar7 + 0x10);
          }
          goto LAB_039d222c;
        }
        iVar11 = iVar11 + (int)uStack_58;
      } while (iVar11 <= iVar6);
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_3724204
                (&uStack_70,*(undefined8 *)puVar2);
    }
  }
  return uVar13;
}

