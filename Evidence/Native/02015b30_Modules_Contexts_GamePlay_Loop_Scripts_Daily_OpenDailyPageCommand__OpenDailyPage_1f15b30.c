/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.OpenDailyPageCommand$$OpenDailyPage
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_Loop_Scripts_Daily_OpenDailyPageCommand__OpenDailyPage (Modules_Contexts_GamePlay_Loop_Scripts_Daily_OpenDailyPageCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.OpenDailyPageCommand$$OpenDailyPage
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_Loop_Scripts_Daily_OpenDailyPageCommand__OpenDailyPage
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_OpenDailyPageCommand_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_OpenDailyPageCommand__OpenDailyPage_1f15b30
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
  undefined8 auStack_40 [2];
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c2862b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd578);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c2862b = 1;
  }
  puVar2 = PTR_DAT_057dd578;
  auStack_40[0] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
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
  auStack_40[0] = param_1;
  FUN_012d0d74(auStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_OpenDailyPageCommand__OpenDailyPage_d__13__1e6b764
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

