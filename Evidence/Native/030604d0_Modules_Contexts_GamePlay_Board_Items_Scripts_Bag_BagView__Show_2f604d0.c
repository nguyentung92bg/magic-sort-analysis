/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Show
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Show (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$Show
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Show
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__Show_2f604d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 030604d0 to 031604d7 has its CatchHandler @ 030607d4 */
  if ((bRam0000000005c308f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057720e0);
    bRam0000000005c308f4 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_Animation__Stop_1f79e6c(*(long *)(param_1 + 0x48),0);
      lVar1 = *(long *)(param_1 + 0x48);
                    /* try { // try from 0306052c to 03160533 has its CatchHandler @ 030607b4 */
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)PTR_DAT_057720e0;
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar1,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

