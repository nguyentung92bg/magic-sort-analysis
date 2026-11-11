/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleBoard
System_Threading_Tasks_Task_bool__o* Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBoard (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, System_Collections_Generic_List_BottleItem__o* availableBottles, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleBoard
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBoard
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   System_Collections_Generic_List_BottleItem__o* availableBottles,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBoard_1e99644
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c28166 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_057bc9c8);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c28166 = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_057bc9c8;
  puVar2 = PTR_DAT_0577b428;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_b8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_68 = uStack_a8;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_58 = param_2;
  FUN_012d0d74(&uStack_58,param_2);
  uStack_50 = param_3;
  FUN_012d0d74(&uStack_50,param_3);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_MegaShuffleManager__ShuffleBoard_d__8__3c61244
            (uVar5,&uStack_80,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
  return;
}

