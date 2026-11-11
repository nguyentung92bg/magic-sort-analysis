/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$Hide
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Hide (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$Hide
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Hide
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Hide_2f5e57c(long param_1)

{
  long *plVar1;
  
                    /* try { // try from 0305e57c to 0315e587 has its CatchHandler @ 0305da88 */
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0305e588 to 0315e58f has its CatchHandler @ 0305e590 */
                    /* catch() { ... } // from try @ 0305e56c with catch @ 0305e590
                       catch() { ... } // from try @ 0305e588 with catch @ 0305e590 */
                    /* WARNING: Could not recover jumptable at 0x0305e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

