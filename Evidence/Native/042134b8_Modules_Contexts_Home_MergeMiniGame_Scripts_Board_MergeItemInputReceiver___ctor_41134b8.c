/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$.ctor
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver___ctor (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$.ctor
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver___ctor
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver___ctor_41134b8
          (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (cRam0000000005c259c0 == '\0') {
    FUN_012d0dc8(PTR_DAT_05803150);
    cRam0000000005c259c0 = '\x01';
  }
  lVar2 = *(long *)PTR_DAT_05803150;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

