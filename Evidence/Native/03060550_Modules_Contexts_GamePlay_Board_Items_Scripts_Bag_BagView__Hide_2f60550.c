/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Hide
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Hide (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Hide
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Hide
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Hide_2f60550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 03060558 to 0316055f has its CatchHandler @ 030607d0 */
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar1 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0);
      uVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (lVar1 != 0) {
        UnityEngine_Transform__set_parent_40933e0(lVar1,uVar2,0);
        lVar1 = *(long *)(param_1 + 0x60);
        if (lVar1 != 0) {
          if (pcRam0000000005c3a310 == (code *)0x0) {
            pcRam0000000005c3a310 = (code *)FUN_012d0d84(&UNK_043edb77);
          }
                    /* WARNING: Could not recover jumptable at 0x0418d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a310)(lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

