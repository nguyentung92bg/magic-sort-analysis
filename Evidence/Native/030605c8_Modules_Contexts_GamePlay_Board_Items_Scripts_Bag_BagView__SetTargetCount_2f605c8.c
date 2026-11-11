/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$SetTargetCount
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetTargetCount (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$SetTargetCount
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetTargetCount
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__SetTargetCount_2f605c8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576c200;
  uStack_24 = *(undefined4 *)(param_1 + 0x88);
  if ((bRam0000000005c308f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c308f6 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x560));
  }
  return;
}

