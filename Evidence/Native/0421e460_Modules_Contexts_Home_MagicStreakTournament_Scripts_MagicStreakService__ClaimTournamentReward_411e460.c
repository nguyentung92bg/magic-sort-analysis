/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ClaimTournamentReward
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ClaimTournamentReward (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ClaimTournamentReward
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ClaimTournamentReward
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ClaimTournamentReward_411e460
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [3];
  
  if ((bRam0000000005c3ac6b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579de10);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3ac6b = 1;
  }
  iVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                    (param_1);
  if (iVar3 == 1) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IncreaseTournamentWinCount_411e668
              (param_1);
  }
  puVar2 = PTR_DAT_057b8520;
  puVar1 = PTR_DAT_0579de10;
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
    *(undefined1 *)(*(long *)(lVar5 + 0x20) + 0x18) = 1;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetProgressbarRewardScoreAndMultiplierIndex_411e69c
              (param_1);
    Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetLastSeenData_411e6d0
              (param_1);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldSendGetRequest_3e07efc
                          (*(long *)(param_1 + 0x18),0);
        puVar1 = PTR_DAT_05779e78;
        if ((uVar4 & 1) != 0) {
          if ((bRam0000000005c3ac6d & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05779e78);
            bRam0000000005c3ac6d = 1;
          }
          alStack_48[1] = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          alStack_48[0] = 0;
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          uStack_78 = uStack_98;
          uStack_80 = uStack_a0;
          uStack_60 = uStack_a8;
          uStack_68 = uStack_b0;
          uStack_50 = uStack_98;
          uStack_58 = uStack_a0;
          FUN_012d0d74((ulong)&uStack_70 | 8,0);
          alStack_48[0] = param_1;
          FUN_012d0d74(alStack_48,param_1);
          uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
          System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_MagicStreakService__FetchCurrentEvent_d__24__21704dc
                    ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
          return;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__ShouldSendClaimRequest_3e07f30
                            (*(long *)(param_1 + 0x18),0);
          puVar1 = PTR_DAT_057ab8b8;
          if ((uVar4 & 1) != 0) {
            if ((bRam0000000005c3ac6e & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057ab8b8);
              bRam0000000005c3ac6e = 1;
            }
            alStack_48[1] = 0;
            uStack_58 = 0;
            uStack_60 = 0;
            alStack_48[0] = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
            uStack_88 = uStack_a8;
            uStack_90 = uStack_b0;
            uStack_78 = uStack_98;
            uStack_80 = uStack_a0;
            uStack_60 = uStack_a8;
            uStack_68 = uStack_b0;
            uStack_50 = uStack_98;
            uStack_58 = uStack_a0;
            FUN_012d0d74((ulong)&uStack_70 | 8,0);
            alStack_48[0] = param_1;
            FUN_012d0d74(alStack_48,param_1);
            uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
            System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_MagicStreakService__SendClaimRequest_d__25__21705e0
                      ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
            return;
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

