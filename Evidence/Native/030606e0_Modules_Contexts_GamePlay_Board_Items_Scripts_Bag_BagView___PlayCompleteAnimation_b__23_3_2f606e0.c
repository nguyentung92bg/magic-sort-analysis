/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$<PlayCompleteAnimation>b__23_3
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_3 (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$<PlayCompleteAnimation>b__23_3
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_3
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_3_2f606e0
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c308f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774908);
    bRam0000000005c308f8 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
                    /* try { // try from 03060724 to 03160727 has its CatchHandler @ 030607a0 */
    uVar2 = *(undefined8 *)PTR_DAT_05774908;
                    /* try { // try from 03060728 to 0316072f has its CatchHandler @ 030607c4 */
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03060730 to 03160733 has its CatchHandler @ 0306079c */
  FUN_012d0ef0();
}

