/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetRewardModelByRank
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetRewardModelByRank
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, int32_t rank,
   const MethodInfo* method); */

long Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank_32d9e2c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x38), lVar7 != 0)) {
    lVar7 = *(long *)(lVar7 + 0x18);
    if (param_2 == 3) {
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0x30);
        goto LAB_033d9e84;
      }
    }
    else if (param_2 == 2) {
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0x28);
        goto LAB_033d9e84;
      }
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0x20);
LAB_033d9e84:
        lVar7 = *plVar8;
        if ((bRam0000000005c370eb & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05811f10,0);
          FUN_012d0dc8(PTR_DAT_057b3a70);
          FUN_012d0dc8(PTR_DAT_05803990);
          FUN_012d0dc8(PTR_DAT_057a6288);
          FUN_012d0dc8(PTR_DAT_0579bac0);
          FUN_012d0dc8(PTR_DAT_0575eb20);
          bRam0000000005c370eb = 1;
        }
        puVar2 = PTR_DAT_05811f10;
        puVar1 = PTR_DAT_057b3a70;
        uStack_40 = 0;
        lStack_38 = 0;
        uStack_48 = 0;
        lVar3 = lVar7;
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x10) == 0xd) {
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Object___ctor_23dfe5c(lVar3,0);
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
            *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
            *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar7 + 0x28);
            puVar10 = (undefined8 *)(lVar3 + 0x20);
            *puVar10 = *(undefined8 *)(lVar7 + 0x20);
            FUN_012d0d74(puVar10);
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
            FUN_012d0d74();
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar7 + 0x38);
            FUN_012d0d74();
            uVar4 = Modules_Contexts_Application_Reward_Scripts_RewardUtil__GetAvailableChestRewards_3ceb32c
                              (lVar7);
            *puVar10 = uVar4;
            FUN_012d0d74(puVar10,uVar4);
          }
          else {
            lVar5 = *(long *)(lVar7 + 0x38);
            if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_48,lVar5,*(undefined8 *)PTR_DAT_057a6288);
              do {
                uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_48,*(undefined8 *)puVar1);
                lVar3 = lStack_38;
                if ((uVar6 & 1) == 0) {
                  lVar3 = 0;
                  iVar9 = 9;
                  goto LAB_03deb28c;
                }
                uVar6 = Modules_Contexts_Application_Reward_Scripts_RewardUtil__IsPrimaryRewardAvailable_3ceb578
                                  (lStack_38);
              } while ((uVar6 & 1) == 0);
              iVar9 = 8;
LAB_03deb28c:
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_48,*(undefined8 *)puVar2);
              if (iVar9 != 8) {
                lVar3 = lVar7;
              }
            }
          }
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

