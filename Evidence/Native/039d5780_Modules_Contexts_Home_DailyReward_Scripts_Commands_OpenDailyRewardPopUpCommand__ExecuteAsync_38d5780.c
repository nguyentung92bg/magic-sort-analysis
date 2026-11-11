/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.OpenDailyRewardPopUpCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_DailyReward_Scripts_Commands_OpenDailyRewardPopUpCommand__ExecuteAsync (Modules_Contexts_Home_DailyReward_Scripts_Commands_OpenDailyRewardPopUpCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.Commands.OpenDailyRewardPopUpCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_DailyReward_Scripts_Commands_OpenDailyRewardPopUpCommand__ExecuteAsync
   (Modules_Contexts_Home_DailyReward_Scripts_Commands_OpenDailyRewardPopUpCommand_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_Commands_OpenDailyRewardPopUpCommand__ExecuteAsync_38d5780
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
                    /* catch() { ... } // from try @ 039d5694 with catch @ 039d578c
                       catch() { ... } // from try @ 039d56cc with catch @ 039d578c
                       catch() { ... } // from try @ 039d56f8 with catch @ 039d578c
                       catch() { ... } // from try @ 039d577c with catch @ 039d578c */
                    /* try { // try from 039d5790 to 03ad5793 has its CatchHandler @ 039d579c */
                    /* try { // try from 039d5794 to 03ad579f has its CatchHandler @ 039d55c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d5790 with catch @ 039d579c
                        */
  if ((bRam0000000005c34be7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8598);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c34be7 = 1;
  }
  puVar2 = PTR_DAT_057c8598;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
  uVar3 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  FUN_012d0d74(uVar3,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_OpenDailyRewardPopUpCommand__ExecuteAsync_d__2__1e6b868
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

