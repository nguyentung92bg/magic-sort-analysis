/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$ShowRewarded
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowRewarded (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$ShowRewarded
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowRewarded
   (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowRewarded_4106188
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c3aba1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_057aed00);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c3aba1 = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_057aed00;
  puVar2 = PTR_DAT_0577b428;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_98,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_40 = CONCAT44(uStack_40._4_4_,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_RewardedButton__ShowRewarded_d__5__3c62180
            (uVar5,&uStack_60,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
  return;
}

