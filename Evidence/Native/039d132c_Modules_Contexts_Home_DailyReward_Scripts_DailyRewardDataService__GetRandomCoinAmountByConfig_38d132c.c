/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomCoinAmountByConfig
int32_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomCoinAmountByConfig (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetRandomCoinAmountByConfig
   int32_t
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomCoinAmountByConfig
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* probabilityConfig, const
   MethodInfo* method); */

ulong Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomCoinAmountByConfig_38d132c
                (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000005c34bab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057968f8);
    FUN_012d0dc8(PTR_DAT_057bb838);
    FUN_012d0dc8(PTR_DAT_0579e208);
    FUN_012d0dc8(PTR_DAT_057a3830);
    FUN_012d0dc8(PTR_DAT_057ea2c8);
    FUN_012d0dc8(PTR_DAT_05760458);
    FUN_012d0dc8(PTR_DAT_057ded58);
    FUN_012d0dc8(PTR_DAT_057f0c00);
    FUN_012d0dc8(PTR_DAT_057e8d68);
    FUN_012d0dc8(PTR_DAT_057c6210);
    FUN_012d0dc8(PTR_DAT_0578a0d8);
    FUN_012d0dc8(PTR_DAT_057f67c0);
    bRam0000000005c34bab = 1;
  }
  lStack_38 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 != 0) {
    lVar11 = *(long *)(param_2 + 0x28);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05760458);
    if ((lVar6 != 0) &&
       (System_Collections_Generic_Dictionary_int__int____ctor_396cdc4
                  (lVar6,*(undefined8 *)PTR_DAT_057a3830), puVar1 = PTR_DAT_057968f8, lVar11 != 0))
    {
      System_Collections_Generic_Dictionary_int__int___Add_396d834
                (lVar6,100,*(undefined4 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_057968f8);
      System_Collections_Generic_Dictionary_int__int___Add_396d834
                (lVar6,200,*(undefined4 *)(lVar11 + 0x14),*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary_int__int___Add_396d834
                (lVar6,300,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)puVar1);
      uVar7 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward_38d1924
                        (param_1,&lStack_38);
      if ((uVar7 & 1) != 0) {
        if (lStack_38 == 0) goto LAB_039d1590;
        if (*(int *)(lStack_38 + 0x10) == 1) {
          System_Collections_Generic_Dictionary_int__int___Remove_396ece0
                    (lVar6,*(undefined4 *)(lStack_38 + 0x14),*(undefined8 *)PTR_DAT_0579e208);
        }
      }
      puVar1 = PTR_DAT_057f67c0;
      uVar8 = System_Collections_Generic_Dictionary_int__int___get_Values_396d5f8
                        (lVar6,*(undefined8 *)PTR_DAT_057ea2c8);
      uVar4 = System_Linq_Enumerable__Sum_3d79b90(uVar8,0);
      plVar9 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar3 = PTR_DAT_057f0c00;
      puVar2 = PTR_DAT_057ded58;
      puVar1 = PTR_DAT_057bb838;
      if (plVar9 != (long *)0x0) {
        System_Random___ctor_2692230(plVar9,0);
        iVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x1b0));
        System_Collections_Generic_Dictionary_int__int___GetEnumerator_396dc28
                  (&uStack_80,lVar6,*(undefined8 *)puVar1);
        iVar10 = 0;
        uStack_58 = uStack_78;
        uStack_60 = uStack_80;
        uStack_48 = uStack_68;
        uStack_50 = uStack_70;
        do {
          uVar7 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext_39207b0
                            (&uStack_60,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            uVar7 = 100;
            break;
          }
          iVar10 = iVar10 + (int)(uStack_50 >> 0x20);
          uVar7 = uStack_50;
        } while (iVar10 <= iVar5);
        System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose_39208a8
                  (&uStack_60,*(undefined8 *)puVar2);
        return uVar7 & 0xffffffff;
      }
    }
  }
LAB_039d1590:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

