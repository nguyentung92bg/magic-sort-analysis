/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagTrail$$SetInUse
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__SetInUse (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o* __this, bool inUse, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagTrail$$SetInUse
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__SetInUse
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o* __this, bool inUse, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__SetInUse_2f5f6f4
               (long param_1,byte param_2)

{
  long lVar1;
  
                    /* try { // try from 0305f6f4 to 0315f6fb has its CatchHandler @ 0305f73c */
                    /* try { // try from 0305f6fc to 0315f6ff has its CatchHandler @ 0305f728 */
                    /* try { // try from 0305f700 to 0315f707 has its CatchHandler @ 0305f738 */
  *(byte *)(param_1 + 0x30) = param_2 & 1;
                    /* try { // try from 0305f708 to 0315f70f has its CatchHandler @ 0305f754 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0305f710 to 0315f713 has its CatchHandler @ 0305f724 */
                    /* try { // try from 0305f714 to 0315f71b has its CatchHandler @ 0305f750 */
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0);
    if (lVar1 != 0) {
                    /* try { // try from 0305f71c to 0315f71f has its CatchHandler @ 0305f720 */
                    /* catch() { ... } // from try @ 0305f71c with catch @ 0305f720
                       try { // try from 0305f720 to 0315f76b has its CatchHandler @ 0305f0f4 */
                    /* catch() { ... } // from try @ 0305f710 with catch @ 0305f724 */
                    /* catch() { ... } // from try @ 0305f6fc with catch @ 0305f728 */
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0305f6f0 with catch @ 0305f72c */
  FUN_012d0ef0();
}

