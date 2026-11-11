/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseRevealBooster
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseRevealBooster (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* selectedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseRevealBooster
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseRevealBooster
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* selectedBottle, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseRevealBooster_1e93084
               (undefined8 param_1,undefined8 param_2)

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
  if ((bRam0000000005c28147 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7e88);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c28147 = 1;
  }
  puVar2 = PTR_DAT_057f7e88;
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
  uStack_40 = param_2;
  FUN_012d0d74(&uStack_40,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_BoosterManager__UseRevealBooster_d__25__1f635b0
            (uVar3,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

