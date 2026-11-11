/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$EnableBottleVisuals
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$EnableBottleVisuals
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals_22fc854
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_2;
  FUN_012d0d74(plVar1);
  if ((*(long *)(param_1 + 0x110) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x110) + 0x18), lVar2 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
    if (*plVar1 != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*plVar1 + 0x20);
                    /* try { // try from 023fc8a0 to 024fc8f7 has its CatchHandler @ 023fc8a0
                       catch() { ... } // from try @ 023fc8a0 with catch @ 023fc8a0
                       catch() { ... } // from try @ 023fc944 with catch @ 023fc8a0
                       catch() { ... } // from try @ 023fc988 with catch @ 023fc8a0
                       catch() { ... } // from try @ 023fca08 with catch @ 023fc8a0 */
      FUN_012d0d74((undefined8 *)(param_1 + 0x30));
      if (*(long *)(param_1 + 0x110) != 0) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x28);
        FUN_012d0d74((undefined8 *)(param_1 + 0x38));
        if (*(long *)(param_1 + 0x110) != 0) {
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x30);
          FUN_012d0d74((undefined8 *)(param_1 + 0x40));
          if (*(long *)(param_1 + 0x110) != 0) {
            *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x38);
                    /* try { // try from 023fc8f8 to 024fc943 has its CatchHandler @ 023fc958 */
            FUN_012d0d74((undefined8 *)(param_1 + 0x48));
            if ((*(long *)(param_1 + 0x110) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_1 + 0x110) + 0x60), lVar2 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
              if (*plVar1 != 0) {
                *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*plVar1 + 0x68);
                FUN_012d0d74((undefined8 *)(param_1 + 0x20));
                if (*(long *)(param_1 + 0x110) != 0) {
                  *(undefined8 *)(param_1 + 0xf8) =
                       *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x70);
                    /* try { // try from 023fc944 to 024fc96f has its CatchHandler @ 023fc8a0 */
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

