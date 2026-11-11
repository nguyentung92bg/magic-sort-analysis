/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryPlayMagicStreakRewardAnimationLobbyReturnCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__ExecuteAsync (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryPlayMagicStreakRewardAnimationLobbyReturnCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__ExecuteAsync
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__ExecuteAsync_3cf16a8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c37135 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c12f0);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c37135 = 1;
  }
  puVar2 = PTR_DAT_057c12f0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 03df1710 to 03ef1713 has its CatchHandler @ 03df1714 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df1710 with catch @ 03df1714
                       try { // try from 03df1714 to 03ef172f has its CatchHandler @ 03df1528 */
    thunk_FUN_0130472c();
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df15a4 with catch @ 03df1718
                        */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_a8,0);
                    /* try { // try from 03df1730 to 03ef173b has its CatchHandler @ 03df1834 */
  uVar3 = (ulong)&uStack_70 | 8;
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_60 = uStack_a0;
  uStack_68 = uStack_a8;
  uStack_58 = uStack_98;
  FUN_012d0d74(uVar3,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
                    /* try { // try from 03df1768 to 03ef1773 has its CatchHandler @ 03df1830 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
                    /* try { // try from 03df1774 to 03ef184b has its CatchHandler @ 03df1528 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__ExecuteAsync_d__9__1e75bec
            (uVar3,&uStack_70,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

