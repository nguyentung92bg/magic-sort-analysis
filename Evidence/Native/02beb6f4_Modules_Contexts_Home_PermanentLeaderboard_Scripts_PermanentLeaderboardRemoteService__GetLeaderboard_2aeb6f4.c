/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardRemoteService$$GetLeaderboard
System_Threading_Tasks_Task_ApiResponse_PermanentLeaderboardResponse___o* Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService__GetLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardRemoteService$$GetLeaderboard
   System_Threading_Tasks_Task_ApiResponse_PermanentLeaderboardResponse___o*
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService__GetLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardRemoteService__GetLeaderboard_2aeb6f4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_05806c18;
                    /* try { // try from 02beb704 to 02ceb70f has its CatchHandler @ 02beb3b8 */
                    /* try { // try from 02beb710 to 02ceb717 has its CatchHandler @ 02beb720 */
                    /* catch() { ... } // from try @ 02beb688 with catch @ 02beb718 */
  if ((bRam0000000005c2eb79 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02beb69c with catch @ 02beb720
                       catch(type#2 @ 00000000) { ... } // from try @ 02beb710 with catch @ 02beb720
                        */
    FUN_012d0dc8(PTR_DAT_05801bf8);
    FUN_012d0dc8(PTR_DAT_057b6048);
    FUN_012d0dc8(PTR_DAT_0579a8f0);
    FUN_012d0dc8(PTR_DAT_05806c18);
    bRam0000000005c2eb79 = 1;
  }
  puVar3 = PTR_DAT_05801bf8;
  puVar2 = PTR_DAT_057b6048;
  puVar1 = PTR_DAT_0579a8f0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_78,*(undefined8 *)puVar3);
  uVar5 = (ulong)&uStack_60 | 8;
  uStack_50 = uStack_70;
  uStack_58 = uStack_78;
  uStack_48 = uStack_68;
  FUN_012d0d74(uVar5,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_PermanentLeaderboardRemoteService__GetLeaderboard_d__6__33278c0
            (uVar5,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar1);
  return;
}

