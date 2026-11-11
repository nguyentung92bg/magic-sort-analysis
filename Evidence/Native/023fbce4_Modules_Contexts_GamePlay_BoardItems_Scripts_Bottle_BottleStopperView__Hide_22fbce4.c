/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$Hide
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__Hide (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleStopperView$$Hide
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__Hide
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__Hide_22fbce4
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c2a5f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5f6 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
                    /* try { // try from 023fbd60 to 024fbe8b has its CatchHandler @ 023fbd60
                       catch() { ... } // from try @ 023fbd60 with catch @ 023fbd60
                       catch() { ... } // from try @ 023fbff8 with catch @ 023fbd60
                       catch() { ... } // from try @ 023fc084 with catch @ 023fbd60
                       catch() { ... } // from try @ 023fc08c with catch @ 023fbd60
                       catch() { ... } // from try @ 023fc130 with catch @ 023fbd60 */
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar1 = *(long *)(param_1 + 0x28);
      if ((lVar1 != 0) && (lVar3 = *(long *)(lVar1 + 0x38), lVar3 != 0)) {
        uVar4 = *(undefined8 *)(lVar1 + 0x30);
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar4,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar3,uVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

