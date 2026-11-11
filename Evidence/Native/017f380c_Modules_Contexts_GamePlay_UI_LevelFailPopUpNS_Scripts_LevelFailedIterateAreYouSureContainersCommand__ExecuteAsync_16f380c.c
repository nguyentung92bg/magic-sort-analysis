/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__ExecuteAsync (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailedIterateAreYouSureContainersCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__ExecuteAsync
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailedIterateAreYouSureContainersCommand__ExecuteAsync_16f380c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c24b6b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789358);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c24b6b = 1;
  }
  puVar2 = PTR_DAT_05789358;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_c8,0);
  uVar3 = (ulong)&uStack_90 | 8;
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_88 = uStack_c8;
  uStack_78 = uStack_b8;
  FUN_012d0d74(uVar3,0);
  uStack_70 = param_1;
  FUN_012d0d74(&uStack_70,param_1);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_LevelFailedIterateAreYouSureContainersCommand__ExecuteAsync_d__7__1e68dc0
            (uVar3,&uStack_90,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

