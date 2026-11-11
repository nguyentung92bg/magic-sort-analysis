/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$GetLeaderboard
System_Threading_Tasks_Task_ApiResponse_WeeklyGetLeaderboardResponse___o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__GetLeaderboard (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$GetLeaderboard
   System_Threading_Tasks_Task_ApiResponse_WeeklyGetLeaderboardResponse___o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__GetLeaderboard
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, int32_t
   progress, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__GetLeaderboard_32d6ee0
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  
  puVar1 = PTR_DAT_057a7dc0;
  if ((bRam0000000005c31d5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2368);
    FUN_012d0dc8(PTR_DAT_057cdd08);
    FUN_012d0dc8(PTR_DAT_057d30e8);
    FUN_012d0dc8(PTR_DAT_057a7dc0);
    bRam0000000005c31d5c = 1;
  }
  puVar4 = PTR_DAT_057d30e8;
  puVar3 = PTR_DAT_057d2368;
  puVar2 = PTR_DAT_057cdd08;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar3);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_58 = param_1;
  FUN_012d0d74(&uStack_58,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_WeeklyTournamentRemoteService__GetLeaderboard_d__6__332d734
            (uVar5,&uStack_80,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar4);
  return;
}

