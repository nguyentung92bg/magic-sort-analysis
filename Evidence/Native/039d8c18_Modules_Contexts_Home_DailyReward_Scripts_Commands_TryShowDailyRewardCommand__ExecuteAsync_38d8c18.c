/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__ExecuteAsync (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__ExecuteAsync
   (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardCommand__ExecuteAsync_38d8c18
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
  if ((bRam0000000005c34bf3 & 1) == 0) {
                    /* try { // try from 039d8c48 to 03ad8c4b has its CatchHandler @ 039d8cb0 */
    FUN_012d0dc8(PTR_DAT_0579ab10);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c34bf3 = 1;
  }
  puVar2 = PTR_DAT_0579ab10;
                    /* try { // try from 039d8c64 to 03ad8c73 has its CatchHandler @ 039d8cb4 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 039d8c84 to 03ad8c9b has its CatchHandler @ 039d8cb8 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
                    /* try { // try from 039d8c9c to 03ad8ccf has its CatchHandler @ 039d8c0c */
  uVar3 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d8c48 with catch @ 039d8cb0
                        */
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d8c64 with catch @ 039d8cb4
                        */
  uStack_48 = uStack_88;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d8c84 with catch @ 039d8cb8
                        */
  FUN_012d0d74(uVar3,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
                    /* try { // try from 039d8cd0 to 03ad8ce7 has its CatchHandler @ 039d8d90 */
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_TryShowDailyRewardCommand__ExecuteAsync_d__13__20ca060
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
                    /* try { // try from 039d8ce8 to 03ad8cfb has its CatchHandler @ 039d8c0c */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
                    /* try { // try from 039d8cfc to 03ad8d13 has its CatchHandler @ 039d8d90 */
  return;
}

