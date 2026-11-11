/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryGetTournamentReward
bool Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryGetTournamentReward (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, System_Collections_Generic_List_RewardModel__o** rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$TryGetTournamentReward
   bool 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryGetTournamentReward
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   System_Collections_Generic_List_RewardModel__o** rewards, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryGetTournamentReward_32da3ec
          (long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c31d78 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    FUN_012d0dc8(PTR_DAT_0575eb20);
    bRam0000000005c31d78 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057994c8);
    *param_2 = lVar5;
    FUN_012d0d74(param_2,lVar5);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                        ();
      iVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardAmountByRank_32d9d9c
                        (param_1,uVar3);
      lVar5 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRewardModelByRank_32d9e2c
                        (param_1,uVar3);
      puVar2 = PTR_DAT_05766c50;
      if ((iVar4 == 0) && (lVar5 == 0)) {
        uVar6 = 0;
      }
      else {
        if (lVar5 != 0) {
          lVar7 = *param_2;
          if (lVar7 == 0) goto LAB_033da5d4;
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)PTR_DAT_05766c50;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_033da5d4;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar5;
            FUN_012d0d74(plVar9);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))();
          }
        }
        if (0 < iVar4) {
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
          if (lVar5 == 0) goto LAB_033da5d4;
          Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar5,0);
          *(undefined4 *)(lVar5 + 0x10) = 1;
          *(int *)(lVar5 + 0x14) = iVar4;
          lVar7 = *param_2;
          if (lVar7 == 0) goto LAB_033da5d4;
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)puVar2;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_033da5d4;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar5;
            FUN_012d0d74(plVar9,lVar5);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar7,lVar5);
          }
        }
        uVar6 = 1;
      }
      return uVar6;
    }
  }
LAB_033da5d4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

