/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ExecuteAsync (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ExecuteAsync
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__ExecuteAsync_3cf23c4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c3713d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808e60);
                    /* try { // try from 03df23fc to 03ef23ff has its CatchHandler @ 03df2400 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df23fc with catch @ 03df2400
                       try { // try from 03df2400 to 03ef2423 has its CatchHandler @ 03df2178 */
    FUN_012d0dc8(PTR_DAT_0576e800);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df22a0 with catch @ 03df2404
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df227c with catch @ 03df2408
                        */
    bRam0000000005c3713d = 1;
  }
  puVar2 = PTR_DAT_05808e60;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df222c with catch @ 03df240c
                        */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 03df2424 to 03ef242f has its CatchHandler @ 03df2528 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
  uVar3 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
                    /* try { // try from 03df245c to 03ef2467 has its CatchHandler @ 03df2524 */
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  FUN_012d0d74(uVar3,0);
                    /* try { // try from 03df2468 to 03ef253f has its CatchHandler @ 03df2178 */
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_TryShowMagicStreakLeaderboardLobbyReturnCommand__ExecuteAsync_d__11__20caf9c
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

