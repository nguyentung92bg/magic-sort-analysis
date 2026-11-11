/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$SetScore
System_Threading_Tasks_Task_ApiResponse_string___o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__SetScore (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, int32_t score, int32_t playerProgress, System_String_o* tournamentId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$SetScore
   System_Threading_Tasks_Task_ApiResponse_string___o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__SetScore
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, int32_t
   score, int32_t playerProgress, System_String_o* tournamentId, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__SetScore_32d7360
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  
  puVar4 = PTR_DAT_0580e270;
  if ((bRam0000000005c31d60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057788f0);
    FUN_012d0dc8(PTR_DAT_05758110);
    FUN_012d0dc8(PTR_DAT_057fa3f8);
    FUN_012d0dc8(PTR_DAT_0580e270);
    bRam0000000005c31d60 = 1;
  }
  puVar3 = PTR_DAT_057fa3f8;
  puVar2 = PTR_DAT_057788f0;
  puVar1 = PTR_DAT_05758110;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_a8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_90 | 8;
  uStack_80 = uStack_a0;
  uStack_88 = uStack_a8;
  uStack_78 = uStack_98;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_70 = CONCAT44(param_3,param_2);
  uStack_68 = param_4;
  FUN_012d0d74(&uStack_68,param_4);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_WeeklyTournamentRemoteService__SetScore_d__10__313a174
            (uVar5,&uStack_90,*(undefined8 *)puVar1);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

