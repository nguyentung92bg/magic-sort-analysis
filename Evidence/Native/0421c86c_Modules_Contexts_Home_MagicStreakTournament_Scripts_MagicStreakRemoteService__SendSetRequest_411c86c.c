/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakRemoteService$$SendSetRequest
System_Threading_Tasks_Task_ApiResponse_string___o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService__SendSetRequest (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService_o* __this, System_String_o* url, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentRequestModel_o* requestModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakRemoteService$$SendSetRequest
   System_Threading_Tasks_Task_ApiResponse_string___o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService__SendSetRequest
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService_o* __this,
   System_String_o* url,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentRequestModel_o*
   requestModel, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService__SendSetRequest_411c86c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_0580e270;
  if ((bRam0000000005c3ac5f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057788f0);
    FUN_012d0dc8(PTR_DAT_057e0ef8);
    FUN_012d0dc8(PTR_DAT_057fa3f8);
    FUN_012d0dc8(PTR_DAT_0580e270);
    bRam0000000005c3ac5f = 1;
  }
  puVar3 = PTR_DAT_057fa3f8;
  puVar2 = PTR_DAT_057e0ef8;
  puVar1 = PTR_DAT_057788f0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar1);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_58 = param_2;
  FUN_012d0d74(&uStack_58,param_2);
  uStack_50 = param_3;
  FUN_012d0d74(&uStack_50,param_3);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_MagicStreakRemoteService__SendSetRequest_d__10__3326d94
            (uVar5,&uStack_80,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

